#include <iostream>

using namespace std;

int main()
{
    // from 1 to 9;
    int toTen = 36;
    // from 10 to 12
    int tenToTwelve = 15;
    // from 13 to 19
    int teens = 27 + 7*4;
    // from 20 to 29
    int twentyToThirty = 6*10 + toTen;
    // from 30 to 99
    int thirtyToHundred = (teens-1 - 7*2)*10 + toTen*7;
    // from 1 to 99
    int toHundred = toTen + tenToTwelve + teens + twentyToThirty + thirtyToHundred;
    // from 100 to 999
    long int hundredToThousand = 9*(100*7 + 99*3 + toHundred) + toTen;
    // from 1 to 999
    long int toThousand = toHundred + hundredToThousand;
    // One Thousand
    int thousand = 11;

    // from 1 to 1000
    long int letterCount = toThousand + thousand;

    cout<<"teens = "<<teens<<endl;
    cout<<"twentyToThirty = "<<twentyToThirty<<endl;
    cout<<"toHundred = "<<toHundred<<endl;
    cout<<hundredToThousand<<endl;
    cout<<letterCount<<endl;
    return 0;
}
