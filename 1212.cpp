#include <iostream>
using namespace std;

int main(void) {
    string eight;
    cin>>eight;
    for(int i=0;i<eight.length();i++) {
        switch(eight[i]) {
            case ('0'): {
                if(i == 0) {
                    cout<<"0";
                    break;
                }
                else {
                    cout<<"000";
                    break;
                }
            }
            case('1'): {
                if(i==0) {
                    cout<<"1";
                    break;
                }
            }
        }
    }
}