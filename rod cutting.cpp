//rod cutting
#include <bits/stdc++.h>
#define INF 9999999
using namespace std;

int main()
{
    int n=4,m=5,i,j;
    int w[n]={1,2,3,4},p[n]={2,3,6,9};
    int ara[n+1][m+1]={};
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(w[i-1]>j)ara[i][j]=ara[i-1][j];
            else ara[i][j]=max(ara[i-1][j],ara[i][j-w[i-1]] +p[i-1]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}

