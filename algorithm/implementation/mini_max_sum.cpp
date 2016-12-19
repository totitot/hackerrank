#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
	vector<unsigned long long> vll;

	for( int i = 0; i < 5; i++ ){
		unsigned long long temp;
		cin >> temp;
		vll.push_back(temp);
	}

	sort( vll.begin(), vll.end() );
	unsigned long long temp = accumulate( vll.begin(), vll.end(), 0ULL );
	cout <<  temp - vll[4] << " " << temp - vll[0];
	return 0;

}
