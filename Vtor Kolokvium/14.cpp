
#include<iostream>
using namespace std;
int main(){
    int a[100][100],b[100][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n*2;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n;j<2*n;j++){
            b[n+i][j-n]=a[i][j];
        }
    }
    for(int i=0;i<2*n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}