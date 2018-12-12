#include <iostream>

using namespace std;
/*
bool isPrime(long long int* primes, long long int num) {
    bool isPrime = true;

    for(int i=7; i<=num/10; i++) {
        if(num % i == 0) {
            isPrime = false;
        }
    }

    return isPrime;
}
*/

int main()
{

    int ceil = 10001;
    int primeCounter = 4;
    int numCounter = 1;
    long int primes[ceil];

    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;

    bool isPrime = true;

    while(primeCounter <= ceil) {
        if(numCounter%3 == 0) {
            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+1)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;
            }

            isPrime = true;

            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+7)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 7;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;
            }

            isPrime = true;
        }
        else if((numCounter+1)%3 == 0) {
            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+3)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 3;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;
            }

            isPrime = true;

            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+9)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 9;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;
            }

            isPrime = true;
        }
        else if((numCounter+2)%3 == 0) {
            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+1)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;
            }

            isPrime = true;

            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+3)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 3;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;

            }

            isPrime = true;

            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+7)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 7;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;
            }

            isPrime = true;

            for(int i=3; i<primeCounter; i++) {
                if((numCounter*10+9)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 9;
                //cout<<"added "<<primes[primeCounter]<<endl;
                primeCounter++;
            }

            isPrime = true;
        }

        numCounter++;

    }
/*
    for(int i=0; i<ceil; i++) {
        cout<<primes[i]<<endl;
    }
*/
    cout<<primes[ceil-1]<<endl;

    return 0;
}
