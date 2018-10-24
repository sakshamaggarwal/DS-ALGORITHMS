#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n,i,a[1000];
    cout<<"Enter Decimal value ";
    cin>>n;

    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    cout<<"\nBinary value is ";
    for(i=i-1;i>=0;i--)
        cout<<a[i];

    return 0;
}
