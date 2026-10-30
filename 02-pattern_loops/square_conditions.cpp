#include <iostream>

using namespace std;

int main() {
        int n , m;
    cout << "enter the number till which counting is to be printed\nand max no of numbers in a row" << endl;
    cin >> n >> m;
    for(int a = 1 ; a<=n ; a++){
        cout << a << " ";
    if(a % m == 0){
        cout << endl;
    }
    }
    return 0;
}