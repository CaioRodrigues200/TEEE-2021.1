#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){

    int i;
    long long int n, num, sum;
    vector<long long int> fifthpow;

    // testar até 999.999
    for(n=10; n<1000000; n++){
        num = n;
        i = 0;
        sum = 0;
        int *digits = new int(6);
        while(num > 0){
            digits[i] = num%10;
            num /= 10;
            i++;
        };
        for(int j = 0; j < i; j++){
            sum += pow(digits[j],5);
        };
        if(sum == n){
            fifthpow.push_back(n);
            cout << "........" << endl;
        }

        delete digits;
    };

    sum = 0;
    for(int j = 0; j < fifthpow.size(); j++){
        cout << fifthpow[j] << " ";
        sum += fifthpow[j];
    };
    cout << endl << "soma total: " << sum;

    return 0;
}