//maximum sub array kadane
#include<bits/stdc++.h>
#define ll long long
#define INF 9999999
using namespace std;
int max_sub(int ara[],int n){
    int sum=0,ans=INT_MIN,i,j;
    for(i=0;i<n;i++){
        sum+=ara[i];
        if(sum>0)ans=max(ans,sum);
        else sum=0;
    }
    return ans;
}
int main()
{
    int n=10;
    int ara[n+5]={1,-3,2,-5,7,6,-1,-4,11,-23};
    cout<<max_sub(ara,n);
    return 0;
}
//TAFSIR RAHMAN
//190041130

