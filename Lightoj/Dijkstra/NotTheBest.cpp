#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e5+123;
const ll INF = LLONG_MAX;           // INF = 1e9+123
vector<pair<ll,ll>>adj[mx];
ll dis[mx],dis2[mx],par[mx];
bool vis[mx];

ll m,n;
vector<ll>vec;

void dijkstra(ll x){
    priority_queue<pair<ll,ll>>q;                           // (distance,cur_node)
    dis[x] = 0;
    q.push({0,x});

    while(!q.empty()){
        ll cur_node = q.top().second;                       // contain current node
        q.pop();
        for(auto child:adj[cur_node]){
            ll new_node = child.first;                      // new_node = adj.node
            ll new_dist = child.second;                     // new_dist = adj.distance
            if(dis[cur_node] + new_dist < dis[new_node]){
                dis[new_node] = dis[cur_node] + new_dist;
                q.push({-dis[new_node], new_node});         // (push neg distance for min possible, new node)
                par[new_node] = cur_node;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    for(ll ts = 1;ts<=t;ts++){
        cin>>n>>m;
        for(ll i=0;i<=n;i++){       //memset
            adj[i].clear();
            dis[i] = INF;
        }
        ll u,v,c,s,i;
        for(i=0;i<m;i++){
            cin>>u>>v>>c;
            adj[u].pb({v,c});
            adj[v].pb({u,c});
        }
        //cout<<"Enter Source: "<<endl;
        //cin>>s;
        dijkstra(1);
        for(i=0;i<=n;i++){
            dis2[i] = dis[i];
            dis[i] = INF;
        }
        dijkstra(n);
        ll ans = INT_MAX;
        for(i=1;i<=n;i++){
            for(auto x:adj[i]){
                ll d = dis2[i]+dis[x.first]+x.second;
                //cout<<dis2[i]<<" "<<dis[x.first]<<" "<<x.second<<endl;
                if(d>dis2[n]){
                    ans = min(ans,d);
                }
            }

        }
        cout<<"Case "<<ts<<": ";
        cout<<ans<<endl;
    }


return 0;// @Imtiaz_rafi
}
