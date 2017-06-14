#include<iostream>
using namespace std;

int partition(int a[],int s,int e){

    int i = s-1;
    int pivot = e;

    int j;
    for(j= s;j<=e-1;j++){
        if(a[j]<a[pivot]){
            i++;
            swap(a[i],a[j]);

        }
    }
    swap(a[i+1],a[pivot]);
    return i+1;

}


void quickSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main(){

    int a[] = { 2,1,3,4,5,7};
    quickSort(a,0,5);
    for(int i=0;i<=5;i++){
        cout<<a[i]<<endl;
    }
return 0;
}
