#include <iostream>

using namespace std;
int main() {
    int a{0}, b{0};
    cin >> a >> b;

    for(auto i = a; i <= b; i++){
        if(i<10){
            switch(i){
                case 1: cout << "one" << endl; break;
                case 2: cout << "two" << endl; break;
                case 3: cout << "three" << endl; break;
                case 4: cout << "four" << endl; break;
                case 5: cout << "five" << endl; break;
                case 6: cout << "six" << endl; break;
                case 7: cout << "seven" << endl; break;
                case 8: cout << "eight" << endl; break;
                case 9: cout << "nine" << endl; break;
            }
        }
		else{
			cout << ((i&1)?"odd":"even") << endl;
		}
    }
    
    return 0;
}
