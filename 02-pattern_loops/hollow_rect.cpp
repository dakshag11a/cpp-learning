#include <iostream>

using namespace std;

int main() {
    cout << "enter the lenght and breadth of rectangle\nlength\nbreadth" << endl;
    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
    for(int a = 1 ; a<=n2 ; a++){
        for(int b = 1 ; b<=n1 ; b++){
            if(a>1 && a<n2 && b>1 && b<n1){
               cout << "  "; 
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}