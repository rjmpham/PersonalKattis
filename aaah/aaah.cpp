#include <iostream>
using namespace std;

int main(){
	string dr, jon;
	cin >> jon >> dr;
	if(dr.length() > jon.length()){
		cout << "no";
	} else {
		cout << "go";
	}
	return 0;
}
