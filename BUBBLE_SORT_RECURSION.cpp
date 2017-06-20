  #include<iostream>
using namespace std;

void bubbleSort(int a[],int n){
    if(n==1){
        return;
    }

    for(int j=0;j<=n-2;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubbleSort(a,n-1);

}
int main(){
    int a[] = {5,4,3,2,1};
    bubbleSort(a,5);

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

return 0;
}
