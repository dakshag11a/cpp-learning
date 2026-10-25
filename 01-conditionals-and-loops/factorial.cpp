#include<iostream>
using namespace std;

int main(){
    int n,fact=1;

    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){
        cout<<"Factorial not possible";
    }
    else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<"Factorial is "<<fact;
    }

    return 0;
}