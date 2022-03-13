//knapsack
#include <bits/stdc++.h>
#define INF 999999999
using namespace std;
typedef long long ll;
void coin(int n,int m,int p[],int w[]){
    int ara[n+1][m+1]={},i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(w[i-1]>j)ara[i][j]=ara[i-1][j];
            else ara[i][j]=max(ara[i-1][j],ara[i-1][j-w[i-1]] +p[i-1]);
        }
    }

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
    i=n,j=m;
    int x=ara[n][m];
    //cout<<x<<endl;
    int status[n+1]={};
    while(x>0){
        if(ara[i][j]!=ara[i-1][j]){
            status[i]=1;
            x-=p[i-1];
            while(i>0){
                int f=0;
                i--;
                for(j=0;j<=m;j++){
                    if(ara[i][j]==x){
                        //cout<<i<<" "<<j<<endl;
                        f=1;
                        break;
                    }
                }
                if(f==1)break;
            }
        }
        else i--;
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        cout<<status[i]<<" ";
    }
}
int main() {
    int p[]={60,100,120};
    int w[]={10,20,30};
    //int c[]={5,6,9,1};
    int n=3,m=50;
    coin(n,m,p,w);
}
