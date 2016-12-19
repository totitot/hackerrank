#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int size;
	cin >> size;
	vector< vector<int> > vvi;
	for( int i = 0; i < size; i++ ){
		vvi.push_back( vector<int>() );
		for(int j = 0; j < size; j++ ){
			int dummy;
			cin >> dummy;
			vvi.back().push_back(dummy);
		}
	}
	int sum1 = 0, sum2 = 0;
	for( int i = 0; i < size; i++ ){
		sum1 += vvi[i][i];
	}
	for( int i = size-1, j = 0; i >= 0, j < size; i--,j++ ){
		sum2 += vvi[i][j];
	}
	cout << abs(sum1-sum2) << endl;
	return 0;

}
