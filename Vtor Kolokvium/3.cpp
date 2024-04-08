
#include<iostream>
using namespace std;
int sum_pos(int *a,int N,int ind){
    if(ind>=N){
        return 0;
    }
    else{
        int s=0;
        for(int i=ind;i<N;i++){
            //s+=a[i];
            s+=*(a+i);
        }
        return s;
    }
}
int main(){
    int N,a[100], ind;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    cin>>ind;
    cout<<sum_pos(a,N,ind);
}