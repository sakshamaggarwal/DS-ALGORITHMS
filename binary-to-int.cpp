#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int long n,i=0,num=0,remainder;
    cout<<"Enter a binary number : ";
    cin>>n;

    while(n)
    {
        remainder=n%10;
        n=n/10;
        if(remainder==1)
            num=num+pow(2,i);
        ++i;
    }
    cout<<"\nDecimal number is : "<<num;

}
