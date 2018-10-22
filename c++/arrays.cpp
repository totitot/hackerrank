#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num{0};
	int temp{0};

	cin >> num;
	vector<int> vnum;

	while( num ){
		cin >> temp;
		vnum.push_back(move(temp));
		num--;
	}

	auto print = [](const int &n){cout << n << " ";};

	for_each(vnum.rbegin(), vnum.rend(), print);
	cout << endl;

    return 0;
}
