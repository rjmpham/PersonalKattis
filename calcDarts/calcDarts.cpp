#include <iostream>
using namespace std;

int sol_1(int num);
int sol_2(int num);
int sol_3(int num);

int main(){
	long long n;
	cin >> n;
	if(sol_1(n)){
		// print sol with one input n
		if (n%3 ==0){
			cout << "triple " << n/3;
		} else if (n%2 == 0){
			cout << "double " << n/2;
		} else {
			cout << "single " << n;
		}
		return 0;
	}
	if(sol_2(n)){
		return 0;
	}
	if(sol_3(n)){
		return 0;
	}
	cout << "impossible";
	return 0;
}

int sol_1(int num1){
	if(num1 > 60){
		return 0;
	} else if (num1 < 21){
		return num1;
	} else if ((num1 < 41)&&(num1%2 ==0)){
		return num1;
	} else if (num1%3==0){
		return num1;
	} else {
		return 0;
	}
}

int sol_2(int num){
	int num1,num2;
	num1 = num-1;
	num2 = 1;
	while(num1> (num2 -1)){
		if (sol_1(num1) && sol_1(num2)){
			//print sol
			if (num1%3 ==0){
				cout << "triple " << num1/3<<endl;
			} else if (num1%2 == 0){
				cout << "double " << num1/2<<endl;
			} else {
				cout << "single " << num1<<endl;
			}

			if (num2%3 ==0){
				cout << "triple " << num2/3;
			} else if (num2%2 == 0){
				cout << "double " << num2/2;
			} else {
				cout << "single " << num2;
			}
			return 1;
		}
		num1-=1;
		num2+=1;
	}
	return 0;
}

int sol_3(int num){
	int num1,num2;
	num1 = 1;
	num2 = num-1;
	while ((num1 < 61) && (num2 >0)){
		if (sol_1(num1)&&sol_2(num2)){
			//print sol
				if (num1%3 == 0){
					cout << endl << "triple " << num1/3;
				} else if (num1%2 == 0){
					cout << endl << "double " << num1/2;
				} else {
					cout << endl << "single " << num1;
				}
			return 1;
		}
		num1 += 1;
		num2 -= 1;
	}
	return 0;
}
