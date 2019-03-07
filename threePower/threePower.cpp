#include <iostream>
#include <iomanip>
/*
The logic for this program works, but the solution doesn't seem to work
even with unsigned long long. Others have hardcoded the values of the
powers of three into their program. In lieu of doing that myself, I
simply want to mark that this difficulty exists for my own reference.
Rounding from doubles seems to be impossible too.
*/

int main(){
    long long n;
    std::cout << std::fixed;
    std::cout << std::setprecision(0);
    while(std::cin >>n){
        if(n ==0){
            return 0;
        }
        if(n ==1){
            std::cout << "{ }";
            continue;
        }
        n-=1; //start binary function
        std::cout<< "{ ";
        long double e=1;
        bool flag = 1; // ensure tailing element no comma
        if(n%2==1){
            n=n/2;
            std::cout <<"1";
            flag -=1;
        } else {
            n=n/2;
        }
        while(n>0){
            e=e*3;
            if(n%2==1){
                n=n/2;
                if(flag){
                    //printf("%LG", e);
                    std::cout << e;
                    flag -=1;
                }else{
                    std::cout <<", " << e;
                }

            } else {
                n=n/2;
            }
        }
        std::cout <<" }";
        e= 1;
    }
    return 0;
}
