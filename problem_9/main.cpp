#include <iostream>
#include <math.h>

using namespace std;

int findMax(int num1, int num2) {

    if(num1 > num2) {
        return num1;
    }

    return num2;
}

int main()
{
    int resultA = -1;
    int resultB = -1;
    int resultC = -1;
    double c;
    int cInt;
    long int product;


    const int sum = 1000;

    bool found = false;

    for(int a=1; a<249; a++) {
        for(int b=max(a, 200)+1; b<499; b++) {
            c = sqrt(a*a + b*b);
            cInt = c;

            if(c == cInt) {
                if(a + b + c == sum) {
                    resultA = a;
                    resultB = b;
                    resultC = c;

                    found = true;
                    break;
                }
            }
        }
        if(found == true) {
            break;
        }
    }

    cout<<"a = "<<resultA<<endl;
    cout<<"b = "<<resultB<<endl;
    cout<<"c = "<<resultC<<endl;

    product = resultA * resultB * resultC;

    cout<<"a * b * c = "<<product<<endl;

    return 0;
}
