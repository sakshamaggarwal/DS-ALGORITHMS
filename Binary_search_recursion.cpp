#include<iostream>
using namespace std;

int binarySearch(int a[],int key,int s,int e){
    ///Base Case
    if(s>e){
        return -1;
    }
    ///Rec Case
    int mid = (s+e)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        int leftHalfIndex= binarySearch(a,key,s,mid-1);
        return leftHalfIndex;
    }
    else{
            int rightHalfIndex = binarySearch(a,key,mid+1,e);
            return rightHalfIndex;

    }

}
int main(){
    int a[] = {1,2,3,5,7,9,10};

    cout<<binarySearch(a,9,0,6);

return 0;
}
