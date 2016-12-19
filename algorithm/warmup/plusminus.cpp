#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int num_of_elements = 0;
	cin >> num_of_elements;
	vector<int> vi;
	vi.reserve(num_of_elements);
	int dummy = 0;
	while( cin >> dummy ) vi.push_back(dummy);
	double poscount = 0;
	double negcount = 0;
	double zerocount = 0;
	for( auto i : vi ){
		if( i > 0 ) poscount += 1;
		if( i < 0 ) negcount += 1;
		if( i == 0 ) zerocount += 1;
	}
	cout << poscount/static_cast<double>(vi.size()) << endl;
	cout << negcount/static_cast<double>(vi.size()) << endl;
	cout << zerocount/static_cast<double>(vi.size()) << endl;
	return 0;
}
