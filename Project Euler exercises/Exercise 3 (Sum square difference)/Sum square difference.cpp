#include <iostream>

using namespace std;

int main(){

    // sum of squares
    long long int sum_sq = 0;
    for(int i=1; i<=100; i++){
        sum_sq = sum_sq + i*i;
    };

    // square of sum
    long long int sum = 0;
    for(int i=1; i<=100; i++){
        sum = sum + i;
    };
    long long int squaredSum = sum*sum;

    cout << "Difference is: " << squaredSum - sum_sq;

    return 0;
}