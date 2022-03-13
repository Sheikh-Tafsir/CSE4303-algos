//2XN tiles
#include<bits/stdc++.h>
#define INF 99999999
using namespace std;
int tiles(int n){
    if(n<=2)return n;
    else return tiles(n-1) + tiles(n-2);
}
int main()
{
    int n=3;
    cout<<tiles(n);
}
//TAFSIR RAHMAN
//190041130

