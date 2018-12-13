#include <iostream>

using namespace std;

int divisorsAmount(long long int num) {
    int divAmount = 1;
    int counter = 0;
    int primeCounter = 1;

    long int primes[1500];

    long long int div = 1;
    bool isPrime;

    while(num != 1) {
        div++;
        isPrime = true;
        counter = 0;

        for(int i=0; i<primeCounter;i++) {
            if(div%primes[i] == 0) {
                isPrime = false;
            }
        }

        if(isPrime == true) {
            primes[primeCounter] = div;
            primeCounter++;

            while(num%div == 0) {
                num = num/div;
                counter++;
            }

            divAmount = divAmount * (counter+1);
        }

    }

    return divAmount;
}

int main()
{
    const int target = 500;
    int counter = 1;
    long long int triangleNum = 1;
    bool found = false;

    while(found == false) {
        counter++;
        triangleNum = triangleNum + counter;
        cout<<counter<<endl;
        cout<<triangleNum<<endl;
        cout<<divisorsAmount(triangleNum)<<endl;
        if(divisorsAmount(triangleNum) > target) {
            found = true;
            cout<<"found"<<endl;
        }
    }

    cout<<triangleNum<<endl;

    return 0;
}
