#include<iostream>

using namespace std;

int main()
{
    int arr[1000],j,n;
    cout<<"Enater the number of elements ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        j=i;
        while(j>0&&arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];

    return 0;
}
