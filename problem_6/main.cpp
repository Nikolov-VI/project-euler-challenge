#include <iostream>

using namespace std;

int main()
{
    long int sumSqr = 0;
    int sum = 0;
    long int sqrSum;
    long int diff;
    const int ceil = 100;

    for(int i=1; i<=ceil; i++) {
        sum = sum + i;
        sumSqr = sumSqr + i*i;
    }

    sqrSum = sum * sum;

    diff = sqrSum - sumSqr;

    cout<<diff<<endl;

    return 0;
}
