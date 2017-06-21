#include<iostream>
using namespace std;
void merge(int a[],int x[],int y[],int s,int e);

void mergeSort(int a[],int s,int e){
    ///Base Case
    if(s>=e){
        return;
    }
    ///Rec Case
    /// Break into two parts
    int x[100],y[100];
    int mid = (s+e)/2;
    for(int i=s;i<=mid;i++){
        x[i] = a[i];
    }
    for(int i=mid+1;i<=e;i++){
        y[i] = a[i];
    }
    ///Sort the two parts
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);

    ///Merge the two parts
    merge(a,x,y,s,e);
}

void merge(int a[],int x[],int y[],int s,int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;

    while(i<=mid && j<=e){
        if(x[i]<y[j]){
            a[k]=x[i];
            i++;
            k++;
        }
        else{
            a[k] = y[j];
            j++;
            k++;
        }
    }
    while(j<=e){
        a[k] = y[j];
        j++; k++;
    }
    while(i<=mid){
        a[k] = x[i];
        i++; k++;
    }

}


int main(){
    int a[] = {1,3,4,0,7,5,6,2};
    int n = sizeof(a)/sizeof(int);

    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


return 0;
}
