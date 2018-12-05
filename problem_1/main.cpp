#include <iostream>

using namespace std;

int main()
{
    long int sum = 0;
    int ceil = 1000;

    for(int i=0; i<ceil; i++) {
        if(i%3 == 0 || i%5 == 0) {
            sum = sum + i;
        }
    }

    cout<<sum<<endl;

    return 0;
}
