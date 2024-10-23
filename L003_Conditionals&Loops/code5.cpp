#include<iostream>
using namespace std;

// Sum of first n numbers

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum;
    return 0;
}