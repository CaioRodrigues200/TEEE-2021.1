#include <iostream>

using namespace std;

int main(){
    
    long int sum3, sum5 = 0;

    long int num = 3;
    while  (num < 1000) {
        sum3 = sum3 + num;
        num = num + 3;
    };
    num = 5;
    while (num < 1000){
        if(num % 3 != 0)
            sum5 = sum5 + num;
        num = num + 5;
    }

    long int sumtot = sum3 + sum5;
    cout << "Soma total: " << sumtot;

    return 0;
}