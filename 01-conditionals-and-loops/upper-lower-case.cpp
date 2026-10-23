#include<iostream>
using namespace std;

int main()
{
    cout << "enter any character" << endl;
    char cr;
    cin >> cr;
    if(cr >= 'a' && cr <= 'z'){
        cout << "the character is in smaller case" << endl;
    }
    else{
        cout << "the character is in upper case" << endl;
    }

    
    return 0;
}