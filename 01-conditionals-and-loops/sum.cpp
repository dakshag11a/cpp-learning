#include<iostream>
using namespace std;

int main()
{
    cout << "enter the number till which the sum is needed to be printed" << endl;
    int n;
    cin >> n;
    int a = 1;
    int sum = 0;
    while(a <= n){
        sum = sum + a;
        a++;
    
        if(a == n+1){
        cout << "sum = " << sum << endl;
        }
     
        
    }

    return 0;
}