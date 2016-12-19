#include <iostream>

using namespace std;

int main(){
	int t; cin >> t;
	for( int a0 = 0; a0 < t; a0++ ){
		int n; cin >> n;
		int sum = 0;
		for( int multiple3 = 3; multiple3 < n ; multiple3 += 3 ){
			sum += multiple3;
		}
		for( int multiple5 = 5; multiple5 < n ; multiple5 += 5 ){
			sum += multiple5;
		}
		cout << sum << endl;

	}
}
