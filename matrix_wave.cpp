#include<iostream>
using namespace std;

int main(){

    int a[100][100];
    int n,m;
    cin>>n>>m;

    ///Input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ///Output
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    ///Wave Print
    for(int j=0;j<m;j++){
        if(j&1){
            ///Col is odd
            for(int i=n-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            ///Col is even
            for(int i=0;i<n;i++){
                cout<<a[i][j]<<" ";
            }

        }
    }


}
