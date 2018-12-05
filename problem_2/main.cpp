#include <iostream>

using namespace std;

int main()
{
    long int prevPrev = 1;
    long int prev = 2;
    long int curr;
    const long int ceil = 4000000;
    long long int sum = 0;

    if(prevPrev%2 == 0) {
        sum = sum + prevPrev;
    }

    if(prev%2 == 0) {
        sum = sum + prev;
    }

    while(prevPrev + prev <= ceil) {
        curr = prev + prevPrev;
        if(curr%2 == 0) {
            sum = sum + curr;
        }

        prevPrev = prev;
        prev = curr;
    }

    cout<<sum<<endl;

    return 0;
}
