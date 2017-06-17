#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[100];
    cin>>a;

    int l = strlen(a);

    for(int i=0;i<l;i++){
        for(int j=i;j<l;j++){
            ///Print the substring from i to j
            for(int k=i;k<=j;k++){
                cout<<a[k];
            }
            cout<<endl;
        }
    }

    return 0;
}
