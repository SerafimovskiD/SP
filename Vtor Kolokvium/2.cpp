
#include<iostream>
using namespace std;
int najznacajnaCifra(int n){
    while(n>9){
        n=n/10;
    }
    return n;
}
int main(){
    int n;
    int maxBr;
    while(cin>>n){
        int max=0;
        if(n==0){
            break;
        }

        for(int i=0;i<n;i++){
            int broj;
            cin>>broj;
            if(najznacajnaCifra(broj)>max)
            {
                max=najznacajnaCifra(broj);
                maxBr=broj;
            }

        }
        cout<<maxBr<<endl;
    }
}