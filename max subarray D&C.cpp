//max subarray D&C
#include<bits/stdc++.h>
#define ll long long
#define INF 9999999
using namespace std;
int max_sub(int ara[],int n){
    if(n==1){
        return ara[0];
    }
    int m=n/2,i,j,sum=0,leftsum=INT_MIN,rightsum=INT_MIN;
    int left_mss=max_sub(ara,m);
    int right_mss=max_sub(ara+m,n-m);

    for(i=m;i<n;i++){
        sum+=ara[i];
        rightsum=max(sum,rightsum);
    }
    sum=0;
    for(i=m-1;i>=0;i--){
        sum+=ara[i];
        leftsum=max(sum,leftsum);
    }
    return max(max(left_mss,right_mss),leftsum+rightsum);


}
int main()
{
    int n=4;
    //int ara[]={1,-3,2,-5,7,6,-1,-4,11,-23};
    int ara[]={3,-2,5,-1};
    cout<<max_sub(ara,n);
    return 0;
}
//TAFSIR RAHMAN
//190041130

