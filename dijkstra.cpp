//dijkstra
#include<bits/stdc++.h>
#define ll long long
#define INF 9999999
using namespace std;
typedef pair<int,int> ipair;
vector<ipair>adj[505];
vector<int>dist(505,INF);
void shortest(ll int src, ll int n){
    for(int i=0;i<=n;i++){
        dist[i]=INF;
    }
    priority_queue<ipair>q;
    q.push(make_pair(0,src));
    dist[src]=0;
    while(!q.empty()){
        ll int u=q.top().second;
        q.pop();
        for( auto it: adj[u]){
            ll int v,w;
            v=it.first;
            w=it.second;
            if(dist[v]< dist[u]+w){
                dist[v]=dist[u]+w;
                q.push(make_pair(-dist[v],v));
            }
        }
    }
}
int main()
{
    ll int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        ll int n,m,src;
        cin>>n>>m;
        //cout<<n<<" "<<m<<endl;
        for(int i=0;i<=n;i++){
            adj[i].clear();
        }

        while(m--){
            ll int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }

        cin>>src;
        shortest(src,n);

        cout<<"Case "<<tt<<":"<<endl;
        for(int i=0;i<n;i++){
            if(dist[i]==INF)cout<<"Impossible"<<endl;
            else cout<<dist[i]<<endl;
        }
        cout<<endl;
    }
}
//TAFSIR RAHMAN
//190041130

