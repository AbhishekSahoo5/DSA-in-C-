#include<iostream>
using namespace std;

// Check character is in lowercase, uppercase, digit

int main(){
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;

    if(ch>'A' && ch<'Z'){
        cout<<"UpperCase";
    }
    else if(ch>'a' && ch<'z'){
        cout<<"LowerCase";
    }
    else if(ch>'0' && ch <'9'){
        cout<<"Digit";
    }
    else{
        cout<<"Invalid Character";
    }

}