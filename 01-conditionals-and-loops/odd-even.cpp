#include<iostream>
using namespace std;

int main()
{
    //code for even odd
int n;
cout << "enter any number to check wither its odd or even" << endl;
cin >> n;
if(n % 2 == 0){
    cout << "the number is even" << endl;
}
else{
    cout << "the number is odd" << endl;
}
    return 0;
}