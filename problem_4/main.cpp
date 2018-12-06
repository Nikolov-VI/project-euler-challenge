#include <iostream>

using namespace std;

bool hasTwoDivisors(long int num) {
    for(int i=100; i<1000; i++) {
        if(num%i == 0) {
            if(num/i >= 100 && num/i < 1000) {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    long int result = 0;
    bool found = false;

    for(int i=9; i>0; i--) {
        for(int j=9; j>=0; j--) {
            for(int k=9; k>=0;k--) {
                result = 100000*i + 10000*j + 1000*k + 100*k + 10*j + i;

                if(hasTwoDivisors(result) == true) {
                    found = true;
                    break;
                }
            }
            if(found == true) {
                break;
            }
        }
        if(found == true) {
            break;
        }
    }

    if(found == false) {
        for(int i=9; i>0; i--) {
            for(int j=9; j>=0; j--) {
                for(int k=9; k>=0;k--) {
                    result = 10000*i + 1000*j + 100*k + 10*j + i;

                    if(hasTwoDivisors(result) == true) {
                        found = true;
                        break;
                    }
                }
                if(found == true) {
                    break;
                }
            }
            if(found == true) {
                break;
            }
        }
    }

    cout<<result<<endl;

    return 0;
}
