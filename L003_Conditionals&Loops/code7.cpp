#include<iostream>
using namespace std;

// find number is prime or not

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=2;
    int flag=0;
    while(i<n){
        if(n%i==0){
            flag=1;
        }
        if(flag==1){
            break;
        }
        i++;
    }
    if(flag==0) {
        cout<<"Prime";
    }
    else if(flag==1){
        cout<<"Not Prime";
    }
    return 0;
}