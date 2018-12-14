#include <iostream>

using namespace std;

int main()
{
    const long int ceil = 1000000;
    int arr[ceil];

    long int max = 1;

    int counter;
    long int curr;

    for(int i=1; i<ceil; i++) {
        counter = 0;
        curr = i;

        while(curr != 1) {
            counter++;
            if(curr%2 == 0) {
                curr = curr/2;
                if(curr<i) {
                    counter = counter + arr[curr];
                    curr = 1;
                }
            }
            else {
                curr = curr*3 + 1;
                if(curr<i) {
                    counter = counter + arr[curr];
                    curr = 1;
                }
            }
        }
        arr[i] = counter;
        //cout<<counter<<endl;

        if(arr[i] > arr[max]) {
            max = i;
        }
    }

    cout<<max<<endl;

    return 0;
}
