#include <iostream>
#include <cmath>

using namespace std;

void update(int *a,int *b) {
    // Complete this function    
	int&& dif = *a + *b;
	int&& absv = abs(*a-*b); 

	*a = dif;
	*b = absv;

	return;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;

    update(pa, pb);

    cout << a << endl;
	cout << b << endl;

    return 0;
}
