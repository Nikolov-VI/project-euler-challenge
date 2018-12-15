#include <iostream>

using namespace std;


long long int choose(int n, int k) {
    if(n < k) {
        cout<<"n can't be smaller than k"<<endl;
        return -1;
    }
    long long int result = 1;

    for(int i=1; i<=k; i++) {
        result = result * (n-k+i) / i;
    }

    return result;
}


int main()
{
    const int side = 20;
    long long int  pathAmount;

    // Using formula 2side choose side to represent pascal triangle row and position
    pathAmount = choose(side*2, side);

    cout<<pathAmount<<endl;

    return 0;
}
