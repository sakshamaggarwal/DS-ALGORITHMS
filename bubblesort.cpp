#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter N";
    cin>>n;

    int a[100];
    ///Input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ///Bubble Sort
    for(int i=0;i<n-1;i++){
            bool isSorted = true;
            for(int j=0;j<=n-2-i;j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                    isSorted = false;
                }
            }
            if(isSorted){
                break;
            }
    }
    ///Print the elements
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }





}
