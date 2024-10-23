#include<iostream>
using namespace std;
// Greater between two numbers
int main(){

    int a;
    int b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;

    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<b<<" is equal to "<<a<<endl;
    }

    return 0;
}