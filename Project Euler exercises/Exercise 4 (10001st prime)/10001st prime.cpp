#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> primes;
    int size = 0;
    long long int num = 1;
    
    while(size <= 10001){
        num++;
        long int factor = num - 1;

        while(1){
    
            if(factor == 1){
                primes.push_back(num);
                size++;
                break;
            }
            else if(num%factor == 0){
                break;
            }
            factor--;
        };
    };

    cout << "Primo 10001: " << primes[10000] << endl;

    return 0;
}