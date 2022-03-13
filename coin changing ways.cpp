//number of ways
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=4,m=15,i,j;
    int c[4]={2,3,5,10};
    int ara[n][m+1]={};
    for(i=0;i<n;i++){
        ara[i][0]=1;
    }
    for(i=0;i<n;i++){
        for(j=1;j<=m;j++){
            if(i==0){
                if(j%c[i]==0)ara[i][j]=1;
            }
            else{
                if(c[i]>j)ara[i][j]=ara[i-1][j];
                else ara[i][j]=ara[i-1][j]+ara[i][j-c[i]];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<=m;j++){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }


}
