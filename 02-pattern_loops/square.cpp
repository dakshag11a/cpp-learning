#include <iostream>

using namespace std;

int main() {
    cout << "enter the no of rows and number of columns" <<endl;
    int a , b;
    cin >> a;
    cin >> b;
    for(int x = 0 ; x<a ; x++){
        for(int y = 0 ; y<b ; y++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}