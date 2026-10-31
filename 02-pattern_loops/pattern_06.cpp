#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int a = 1 ; a<=n ; a++){
        for(int b = a ; b<n ; b++){
            cout << " ";
        }
        for(int c = 0 ; c<n ; c++){
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}