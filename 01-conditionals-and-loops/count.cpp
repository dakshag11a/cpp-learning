#include<iostream>
using namespace std;

int main()
{
    cout << "enter the number till which counting is to be printed" << endl;
    int n;
    cin >> n;
    int a = 1;
    while(a <= n){
        cout << a << " " ;
        a++;
    }
    return 0;
}