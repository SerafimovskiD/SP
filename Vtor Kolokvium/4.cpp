
#include<iostream>
using namespace std;
int main(){
    int s1=0,s2=0,s3=0,s4=0;
    int a[100][100];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++){
        for(int j=y;j<m;j++){
            s1+=a[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            s2+=a[i][j];
        }
    }
    for(int i=x;i<n;i++){
        for(int j=0;j<y;j++){
            s3+=a[i][j];
        }
    }
    for(int i=x;i<n;i++){
        for(int j=y;j<m;j++){
            s4+=a[i][j];
        }
    }
    cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
}