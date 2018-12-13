#include <iostream>

using namespace std;


int main()
{
    const long int ceil = 2000000;
    long int primeCounter = 4;
    long int numCounter = 1;
    // ! Memory Leak
    long int primes[ceil/4];

    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;

    bool isPrime = true;

    unsigned long long int sum = 17;


    while(numCounter < ceil/10) {
        if(numCounter%3 == 0) {
            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+1)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;
            }

            isPrime = true;

            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+7)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 7;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;
            }

            isPrime = true;
        }
        else if((numCounter+1)%3 == 0) {
            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+3)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 3;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;
            }

            isPrime = true;

            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+9)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 9;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;
            }

            isPrime = true;
        }
        else if((numCounter+2)%3 == 0) {
            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+1)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 1;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;
            }

            isPrime = true;

            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+3)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 3;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;

            }

            isPrime = true;

            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+7)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 7;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;
            }

            isPrime = true;

            for(long int i=3; i<primeCounter; i++) {
                if((numCounter*10+9)%primes[i] == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime == true) {
                primes[primeCounter] = numCounter*10 + 9;
                //cout<<"added "<<primes[primeCounter]<<endl;
                sum = sum + primes[primeCounter];
                primeCounter++;
            }

            isPrime = true;
        }

        numCounter++;
    }


    cout<<"sum = "<<sum<<endl;

    return 0;
}
