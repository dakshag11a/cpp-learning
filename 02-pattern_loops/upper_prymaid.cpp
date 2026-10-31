#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int a = 0 ; a<n ; a++){
        for(int b = a+1 ; b<n ; b++){
            cout <<" ";
        }    
        for(int b = 1 ; b<=(2*a)+1 ; b++){
            cout << "*";
        }
    cout<<endl;
    }
    return 0;
}
