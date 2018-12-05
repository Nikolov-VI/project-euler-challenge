#include <iostream>

using namespace std;

int main()
{
    long long int num = 600851475143;
    long long int largestPrime = 1;

    while(num != 1) {
        largestPrime++;
        while(num%largestPrime == 0) {
            num = num/largestPrime;
        }
    }

    cout<<largestPrime<<endl;

    return 0;
}
