#include <iostream>

using namespace std;

int main(){
	int t; 
	cin >> t;
	for( int a0 = 0; a0 < t; a0++ ){
		int n; cin >> n;
		uint64_t max3 = (n-1)/3;
		uint64_t max5 = (n-1)/5;
		uint64_t max15 = (n-1)/15;
		uint64_t sum3 = 0;
		uint64_t sum5 = 0;
		uint64_t sum15 = 0;
		sum3 = ( max3 * ( max3 + 1 ) ) / 2;
		sum5 = ( max5 * ( max5 + 1 ) ) / 2;
		sum15 = ( max15 * ( max15 + 1 ) ) / 2;
		sum3 *= 3;
		sum5 *= 5;
		sum15 *= 15;
		cout << sum3 + sum5 - sum15 << endl;
	}
}
