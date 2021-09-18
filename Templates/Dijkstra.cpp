#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e5+123;
const ll INF = INT_MAX;
vector<pair<ll,ll>>adj[mx];
ll dis[mx],par[mx];
bool vis[mx];

ll m,n;

void dijkstra(ll x){
    for(ll i=0;i<n;i++){
        dis[i] = INF;
    }
    priority_queue<pair<ll,ll>>q;           //(curr node,distance)
    dis[x] = 0;
    q.push({x,0});

    while(!q.empty()){
        ll v = q.top().first;              //contain current node
        q.pop();
        if(vis[v]==0){                      //not visited
            vis[v] = 1;
            for(auto u:adj[v]){
                ll a = u.first;             //a = adj.node
                ll b = u.second;            //b = adj.distance
                if(dis[v]+b < dis[a]){
                    dis[a] = dis[v]+b;
                    q.push({a,-dis[a]});    //push neg distance for min possible in next node
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>m>>n;
    ll u,v,c,s,i;
    for(i=0;i<n;i++){
        cin>>u>>v>>c;
        adj[u].pb({v,c});
        adj[v].pb({u,c});
    }
    cout<<"Enter Source: "<<endl;
    cin>>s;
    dijkstra(s);
    for(ll i=1;i<=m;i++){
        cout<<s<<" --> "<<i<<" = "<<dis[i]<<endl;
    }

return 0;// @Imtiaz_rafi
}


