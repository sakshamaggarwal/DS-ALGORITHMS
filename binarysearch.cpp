#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,a[10000],m=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    long int num;
    cin>>num;
   long int beg=0;
   long int end=n-1;
    for(int j=0;j<n;j++)
        {

        int mid=(beg+end)/2;
        if(num==a[mid])
            {
            cout<<mid;
              break;
        }
        else if(num>a[mid])
            {
            beg=mid+1;
        }
        else
            end=mid-1;
    }

    return 0;
}
