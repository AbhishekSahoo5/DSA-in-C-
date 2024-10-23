#include<iostream>
using namespace std;
// Number is positive or negative
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    if(n>0){
        cout<<"Positive"<<endl;
    }
    else if(n==0){
        cout<<"Zero"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
}