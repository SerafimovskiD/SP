
#include<iostream>
using namespace std;
int BrojPozitivni(int *a,int n){
    if(n==0){
        return 0;
    }
    if(a[n-1]>0){
        return 1+ BrojPozitivni(a,n-1);
    }
    else{
        return BrojPozitivni(a,n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<BrojPozitivni(a,n);
}
