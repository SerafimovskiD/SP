#include <iostream>
#include <cstring>
#include <cctype>
#include <climits>
using namespace std;
int main()
{
    int matrica[100][100],n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrica[i][j];
        }
    }
    int sredn;
    if(m%2!=0)
    {
        sredn=m/2;
        for(int i=0;i<n;i++)
        {
            int prvapolovina=0;
            int vtora=0;
            for(int j=0;j<sredn;j++)
            {
                prvapolovina+=matrica[i][j];
            }
            for(int j=sredn+1;j<m;j++)
            {
                vtora+=matrica[i][j];
            }
            for(int j=0;j<m;j++)
            {
                if(j==sredn)
                {
                    matrica[i][j]=abs(prvapolovina-vtora);
                }
            }

        }
    }
    else
    {
        sredn=m/2;
        for(int i=0;i<n;i++)
        {
            int prvapolovina=0;
            int vtora=0;
            for(int j=0;j<=sredn-1;j++)
            {
                prvapolovina+=matrica[i][j];
            }
            for(int j=sredn;j<m;j++)
            {
                vtora+=matrica[i][j];
            }
            for(int j=0;j<m;j++)
            {
                if(j==sredn || j==sredn-1)
                {
                    matrica[i][j]=abs(prvapolovina-vtora);
                }
            }

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrica[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}