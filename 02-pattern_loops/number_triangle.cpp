#include <iostream>

using namespace std;

int main() {
    cout << "enter the max no in any triangle" <<endl;
    int n;
    cin >> n;
    for(int a = 1 ; a<=n ; a++){
        for(int b = 1 ; b<=a ; b++ ){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}