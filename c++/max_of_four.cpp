#include <iostream>
#include <utility>

using namespace std;


int max_of_four(int a, int b, int c, int d){
	return( max(max(a,b),max(c,d)) );
}

int main() {
    int a{0}, b{0}, c{0}, d{0};
    cin >> a >> b >> c >> d;
    cout <<  max_of_four(a, b, c, d) << endl;
    
    return 0;
}
