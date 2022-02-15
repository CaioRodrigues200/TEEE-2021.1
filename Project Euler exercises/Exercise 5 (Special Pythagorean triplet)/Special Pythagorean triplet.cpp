#include <iostream>

using namespace std;

int main(){

    int a,b;
    int check = 1;
    int c = 997;

    while(check && c >= 335){
        a = 1;
        while(a<b){
            b = 1000-a-c;
            if(a*a + b*b == c*c){
                check--;
                break;
            }
            a++;
        };
        c--;
    };

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c+1 << endl;

    cout << endl << "a*b*c: " << a*b*(c+1) << endl;

    return 0;
}