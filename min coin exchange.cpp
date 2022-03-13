//minimum coin
#include<bits/stdc++.h>
#define INF 99999999
using namespace std;
void coin(int c[],int n,int w){
    int i,j;
    int ara[n][w+1]={};
    for(i=0;i<n;i++){
        for(j=1;j<=w;j++){
            if(i==0){
                if(j%c[i]==0)ara[i][j]=j/c[i];
                else ara[i][j]=INF;
            }
            else{
                if(c[i]>j)ara[i][j]=ara[i-1][j];
                else ara[i][j]=min(ara[i-1][j],1+ara[i][j-c[i]]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=w;j++){
            if(ara[i][j]==INF)cout<<"INF ";
            else cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
    i=n-1,j=w;
    while(w>0){
        if(ara[i][j]!=ara[i-1][j]){
            cout<<c[i]<<" ";
            w-=c[i];
            j=w;
        }
        else i--;
    }
}
int main()
{
    int n=4,w=15;
    int c[n]={2,3,5,10};
    coin(c,n,w);
    return 0;
}
//Tafsir Rahman
//190041130

