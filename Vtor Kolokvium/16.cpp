
#include<iostream>
using namespace std;
int maxCifra(int n,int max){
    if(n==0){
        return max;
    }
    int cifra=n%10;
    if(cifra>max){
        max=cifra;
    }
    return maxCifra(n/10,max);
}
int main(){
    int n;
    while(cin>>n){
        cout<<maxCifra(n,0)<<endl;
    }
    return 0;
}
