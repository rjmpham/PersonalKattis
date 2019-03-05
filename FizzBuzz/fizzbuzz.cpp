#include <iostream>
using namespace std;

int main(){
	long long x,y,n;
	while(cin >> x >> y>>n){
	int i = 1;
	int fizz = 0;
	int buzz = 0;
	while(i<n+1){
		if(i%x==0){
			fizz +=1;
		}
		if(i%y==0){
			buzz +=1;
		}
		if(fizz&&buzz){
			cout << "FizzBuzz";
		}
		else if(fizz&&!buzz){
			cout << "Fizz";
		}
		else if(!fizz&&buzz){
			cout << "Buzz";
		}
		else{
			cout << i;
		}
		fizz =0;
		buzz=0;
		i+=1;
		if (i!=n+1){
		cout << "\n";
		}
	}
	}
	return 0;
}
