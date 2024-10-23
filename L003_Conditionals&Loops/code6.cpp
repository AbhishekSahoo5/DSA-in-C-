#include<iostream>
using namespace std;

// Sum of first n even numbers numbers

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    int count=1;
    while(count<=n){
        if(i%2==0){
            sum+=i;
            count++;
        }
        i++;
    }
    cout<<sum;
    return 0;
}