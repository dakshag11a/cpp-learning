#include <iostream>

using namespace std;

int main() {
    cout << "enter the odd value of n" <<endl;
    int n;
    cin >> n;
    for(int a = 1 ; a<=n ; a++){
        for(int b = 1 ; b<=n ; b++){
            if(a==(n+1)/2 || b==(n+1)/2){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}