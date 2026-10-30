#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "enter the max no. of stars in a triangle" << endl;
    cin >> n;
    for (int a = 1; a<=n ; a++){
       for(int b = a ; b<=n ; b++){
       cout << "* ";
       } 
    
    cout << endl;
    }
    return 0;
}