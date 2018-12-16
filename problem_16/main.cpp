#include <iostream>

using namespace std;

int main()
{
    const int ceil = 1000;
    int numLength = ceil/3 + 1;

    int numArr[numLength];
    int counter = 1;
    int sum = 0;

    for(int i=0; i<numLength-1; i++) {
        numArr[i] = 0;
    }

    numArr[numLength-1] = 1;

    for(int i=0; i<ceil; i++) {
        for(int j=numLength-1; j>numLength-counter-1; j--) {
            numArr[j] = numArr[j] * 2;
        }

        for(int j=numLength-1; j>numLength-counter-1; j--) {
            if(numArr[j] > 9) {
                if(j == numLength-counter) {
                    counter++;
                }
                numArr[j-1] = numArr[j-1] + numArr[j] / 10;
                numArr[j] = numArr[j] % 10;
            }
        }
    }

    for(int i=0; i<numLength; i++) {
        sum = sum + numArr[i];
    }

    cout<<sum<<endl;



    return 0;
}
