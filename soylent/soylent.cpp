#include <iostream>
using namespace std;

int main(){
	long long t,n;
	cin >> t;
	while ( cin >> n){
		long long result;
		result = n/400;
		if((n%400 )!= 0){
		result+=1;
		}
		t-=1;
		cout << result;
		if(t != 0){
			cout << endl;
		}
	}
}
