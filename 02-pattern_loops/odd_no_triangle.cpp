#include <iostream>

using namespace std;

int main() {
    cout << "enter the no" <<endl;
    int n;
    cin >> n;
    for(int a = 0 ; a<n ; a++){
        for(int b = 1 ; b<=2*a+1 ; b=b+2){
            cout << b << " ";
        }
        cout << endl;
    }
}