#include <iostream>

using namespace std;

int main() {
    cout << "enter the length of diagnoal" << endl;
    int n;
    cin >> n;
    for(int a = 1 ; a<=n ; a++){
        for(int b = 1 ; b<=n ; b++){
            if(a == b || b==n-a+1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    } 
    return 0;
    }