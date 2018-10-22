#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <utility>

using namespace std;

int main() {
	int n{0}, q{0}, temp{0};
	string str;

	cin >> n >> q;
	cin.ignore();

	vector<vector<int> > vv_int(n);

	for( auto i = 0; i < n; i++ ){
		getline(cin, str);
		istringstream ost(str);
		ost >> str;
		temp = stoi(str);
		if( vv_int[i].capacity() < temp ) vv_int[i].reserve(temp);
		while(ost >> str){
			temp = stoi(str);
			vv_int[i].push_back(move(temp));
		}
	}
	
	for( auto i = 0; i < q; i++ ){
		getline(cin, str);
		istringstream ost(str);
		ost >> str;
		n = stoi(str);
		ost >> str;
		temp = stoi(str);
		cout << vv_int[n][temp] << endl;
	}

    return 0;
}
