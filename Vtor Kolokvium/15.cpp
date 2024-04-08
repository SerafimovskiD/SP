
#include<iostream>
using namespace std;
int poramnet(int broj){
    if(broj==0)
        return 0;
    int cifra=broj%10;
    if(cifra==9){
        return 7+poramnet(broj/10)*10;
    }
    else{
        return cifra+ poramnet(broj/10)*10;
    }
}
void sort(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n=0;
    int a[100];
    int broj;
    while(cin>>broj){
        a[n]=poramnet(broj);
        n++;
    }
    sort(a,n);
    if(n<5){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    else{
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
    }
}