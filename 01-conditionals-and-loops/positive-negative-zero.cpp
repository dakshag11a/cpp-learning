#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter any number" <<endl;
    cin >> n;
    if(n > 0){
        cout << "the number is positive" << endl;
    }
    else if(n < 0){
        cout << "the number is negative" << endl;
    }
    else{
        cout << "the number is zero" << endl;
    }
    return 0;
}