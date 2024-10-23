#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    char ch1='A'+n-1;
    char ch2='A'+n-1;
    for(int i=1;i<=n;i++)
    {
        char ch2=ch1;
        for(int j=1;j<=i;j++)
        {
           cout<<ch2<<" ";
           ch2++;
        }
        ch1--;
        cout<<endl;
    }
    
    

    return 0;
}