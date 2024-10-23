#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int count=i;
        for(int j=i;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}