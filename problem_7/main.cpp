#include <iostream>

using namespace std;

bool isPrime(long long int* primes, long long int num) {
    bool isPrime = true;

    for(int i=7; i<=num/10; i++) {
        if(num % i == 0) {
            isPrime = false;
        }
    }

    return isPrime;
}


int main()
{
    const int ceil = 10;
    int primeCounter = 4;
    long long int numCounter = 1;
    long long int primes[ceil-1];

    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;

    bool isPrime = true;

    while(primeCounter <= ceil) {
        if(numCounter%3 == 0) {
            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+1)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;

            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+7)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;
        }
        else if((numCounter+1)%3 == 0) {
            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+3)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;

            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+9)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;
        }
        else if((numCounter+2)%3 == 0) {
            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+1)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;

            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+3)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;

            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+7)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;

            for(long long int i=3; i<primeCounter; i++) {
                if((numCounter*10+9)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                primeCounter++;
            }

            isPrime = true;
        }

        numCounter++;

    }

    for(int i=0; i<10; i++) {
        cout<<primes[i]<<endl;
    }

    cout<<primes[ceil-1]<<endl;

    return 0;
}
