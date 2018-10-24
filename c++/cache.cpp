#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache: public Cache{
public:
	LRUCache(int capacity):size{0}{
		cp = capacity;
		tail = head = nullptr;
	}

	virtual void set(int k, int val){
		auto check = mp.find(k);

		if(check != mp.end()){
#ifdef DEBUG
			cout << "Found key" << endl;
#endif
			if( check->second != head ){
				detach(check->second);
				push_front(check->second);
			}
			check->second->value = val;
		}
		else{
#ifdef DEBUG
			cout << "Not found key" << endl;
#endif
			Node* node = new Node(k,val);
			push_front(node);
			mp[k] = node;
			if(size>cp){
				mp.erase(tail->key);
				Node *t = detach( tail );
#ifdef DEBUG
				cout << "here" << endl;
#endif
				delete t;

			}
		}
#ifdef DEBUG
		cout << "Size of cache: " << size << " capacity: " << cp << endl;
		crawl();
#endif
	}

	virtual int get(int k){
		auto check = mp.find(k);
		if(check != mp.end()){
#ifdef DEBUG
			cout << "Found key" << endl;
#endif
			if( check->second != head ){
				detach(check->second);
				push_front(check->second);
			}
			return check->second->value;
		}
		else{
#ifdef DEBUG
			cout << "Not found key" << endl;
#endif
			return -1;
		}
	}

private:
	int size;
    Node* detach(Node *entry)
    {
		if( entry == tail ){
			tail = entry->prev;
			entry->prev->next = nullptr;
		}
		else{
			entry->prev->next = entry->next;
			entry->next->prev = entry->prev;
		}
		entry->prev = nullptr;
		entry->next = nullptr;

		size--;
        return entry;
    }

    void push_front(Node *entry)
    {
        if( head != nullptr ){
			entry->next = head;
			head->prev = entry;
		}
		else{
			tail = entry;
			entry->next = nullptr;
		}
		entry->prev = nullptr;
		head = entry;
		size++;
    }

	void crawl(){
		Node *p = head;
		while(p != nullptr){
			cout << "Key: " << p->key << " val: " << p->value << endl;
			p = p->next;
		}
	}
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
