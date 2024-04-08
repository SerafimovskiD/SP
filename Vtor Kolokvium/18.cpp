
#include<iostream>
using namespace std;
int main(){
    double a[100][100];
    double b[200][200];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    double x=0;
    double y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                x+=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j>n-1){
                y+=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && i+j==n-1){
                b[i][j]=x+y;
            }
            else if(i==j){
                b[i][j]=x;
            }
            else if(i+j==n-1){
                b[i][j]=y;
            }
            else{
                b[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}