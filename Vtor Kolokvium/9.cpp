
#include<iostream>
using namespace std;

double rekurzija(int *a,int n,int i){
    if(i==n)//stop uslov
        return 1.0/a[i];
    else{
        return a[i]+1.0/rekurzija(a,n,i+1);
    }
}
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<rekurzija(a,n,0);
}