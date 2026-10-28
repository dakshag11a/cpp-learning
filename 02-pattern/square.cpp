#include <iostream>

using namespace std;

int main() {
        int n;
    cout << "enter the max number in a row and no of times it to be repeated" << endl;
    cin >> n;
    for(int a = 1 ; a<=n ; a++){
      for(int a = 1 ; a<=n ; a++){
      cout << a << " ";
    }
    cout << endl;
    }
    return 0;
}