#include <iostream>
#include <string>

using namespace std;

int main(){
	string time;
	cin >> time;
	if( time.substr(time.size()-2,2) == "AM" ){
		if( time.substr(0,2) == "12" ){
			time.replace(0,2, "00" );
		}
		cout << time.substr(0,time.size()-2) << endl;
	}
	else{
		if( time.substr(0,2) != "12" ){
			time.replace(0,2, to_string(stoi(time.substr(0,2))+12));
		}
		cout << time.substr(0,time.size()-2) << endl;
	}
	return 0;
}
