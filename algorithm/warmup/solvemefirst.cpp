#include <iostream>

using namespace std;

int solveMeFirst( int & a, int & b ){
	return a + b;
}

int main(){
	int num1, num2;
	cin >> num1 >> num2;

	cout << solveMeFirst(num1,num2) << endl;

	return 0;
}

