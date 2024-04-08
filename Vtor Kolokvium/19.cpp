
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void promena(char *red,int X,int i){
    if(i>= strlen(red)){
        return;
    }
    if(isalpha(red[i]))
    {
        if(islower(red[i])){
            if(red[i]+X<='z')
            {
                red[i]=red[i]+X;
            }
            else{
                int potroseni='z'-red[i];
                int ostanati= X-potroseni;
                red[i]='a'+ostanati-1;
            }
        }
        else
        {
            if(red[i]+X<='Z')
            {
                red[i]=red[i]+X;
            }
            else{
                int potroseni='Z'-red[i];
                int ostanati= X-potroseni;
                red[i]='A'+ostanati-1;
            }
        }
    }
    promena(red,X,i+1);
}

int main(){
    int N,X;
    cin>>N>>X;
    getchar();
    char red[81];
    for(int i=0;i<N;i++){
        cin.getline(red,81);
        promena(red,X,0);
        cout<<red<<endl;
    }
    return 0;
}