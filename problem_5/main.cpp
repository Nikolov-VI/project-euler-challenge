#include <iostream>

using namespace std;

int main()
{
    const int ceil = 20;
    long int sum = 1;

    int arr[ceil];
    int num;

    for(int i=2; i<=ceil; i++) {
        num = i;
        for(int j=i-1; j>1; j--) {
            if(num%arr[j] == 0) {
                num = num/arr[j];
            }
        }
        arr[i] = num;
    }

    for(int i=2; i<=ceil; i++) {
        //cout<<arr[i]<<endl;
        sum = sum * arr[i];
    }

    cout << sum << endl;

    return 0;
}
