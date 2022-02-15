#include <iostream>
#include <vector>

#define NUMBER 1000000

using namespace std;

int main(){

    vector<long long int> primes;

    // Finding prime numbers that sum together into under one million
    long long int num = 1;
    long long int sum = 0;
    while(sum < (NUMBER-num-1)){
        num++;
        long long int factor = num - 1;

        while(1){
    
            if(factor == 1){
                primes.push_back(num);
                sum = sum + num;
                break;
            }
            else if(num%factor == 0){
                break;
            }
            factor--;
        };
    };
    cout << "sum is: " << sum << endl;
    

    // Searching for the greatest prime that is a sum of consecutive prime numbers

    long long int sum_prime, largest_prime_sum; 
    int it_init, parcels, most_parcels = 0;
    int size = primes.size();

    cout << "Primos: " << endl;
    for (int i=0 ; i < size  ; i++){
        cout << primes[i] << " ";
    };
    cout << endl << endl;

    for (int k=2 ; k < size - 1 ; k++){
        for (int i=k ; i < size ; i++){
            int j = i;
            sum_prime = 0;
            while (j >= k-2){
                sum_prime = primes[j] + sum_prime;
                j--;
            };
            parcels = i-(k-2);

            long long int factor = sum_prime - 1;

            while(1){
                if(factor == 1){
                    if(parcels > most_parcels){
                        most_parcels = parcels;
                        largest_prime_sum = sum_prime;
                        it_init = k-2;
                    }
                    break;
                }
                else if(sum_prime%factor == 0)
                    break;
                factor--;
            };
        };
        cout << "Loading... " << k << "/" << size << endl;
    };
    cout << endl << "Maior primo formado de somas de primos consecutivos: " << largest_prime_sum << endl;
    cout << "iteracao inicial: " << it_init << endl;
    cout << "maior numero de parcelas: " << most_parcels+1 << endl;

    return 0;
}
