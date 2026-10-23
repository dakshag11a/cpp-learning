#include<iostream>
using namespace std;

int main()
{
    // code for sum of odd number

    cout << "enter the number till which sum of odd number is to be printed" << endl;

    int n;
    cin >> n;
    int sum = 0;

    for(int a = 1 ; a<=n ; a++){

     if(a % 2 != 0){
     sum = sum + a; 
     }

     a++;

    }
    
      cout << "sum = " << sum <<endl;
    return 0;
    
}