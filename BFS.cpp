//BFS using LIST
#include<bits/stdc++.h>
#define INF 9999999
using namespace std;
vector<int>adj[505];
vector<int>dist(505,INF);
vector<int>status(505,0);
void bfs(int src){
    queue<int>q;
    q.push(src);
    dist[src]=0;

    while(!q.empty()){
        int p=q.front();
        //cout<<p<<" ";
        status[p]=2;
        cout<<p<<" ";
        q.pop();
        for( auto it: adj[p]){
            if(status[it]==0){
                status[it]=1;
                q.push(it);
            }
        }
    }

}
int main()
{
    long long int n,m,i,j,k,count=0,a,b;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
    }
    bfs(0);

}
//TAFSIR RAHMAN
//190041130

