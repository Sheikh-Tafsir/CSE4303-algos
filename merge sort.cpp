//merge sort
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void mergee(int l[],int r[],int ara[],int li,int ri){
    int i=0,j=0,k=0;
    while(i<li && j<ri){
        if(l[i]<r[j]){
            ara[k]=l[i];
            i++;
            k++;
        }
        else{
            ara[k]=r[j];
            j++;
            k++;
        }
    }
    while(i<li){
        ara[k]=l[i];
        i++;
        k++;
    }
    while(j<ri){
        ara[k]=r[j];
        j++;
        k++;
    }
}
void merge_sort(int ara[],int n){
    if(n<=1){
        return;
    }
    int m=n/2,i,j;
    int l[m],r[n-m];
    for(i=0;i<m;i++){
        l[i]=ara[i];
    }
    for(i=m,j=0;i<n;i++,j++){
        r[j]=ara[i];
    }
    merge_sort(l,m);
    merge_sort(r,n-m);
    mergee(l,r,ara,m,n-m);
}
int main()
{
    int n=10;
    int ara[]={1,-3,2,-5,7,6,-1,-4,11,-23};
    merge_sort(ara,n);
    for(int i=0;i<n;i++){
        cout<<ara[i]<<" ";
    }
    return 0;
}
//TAFSIR RAHMAN
//190041130

