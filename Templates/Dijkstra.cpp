#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e5+123;
const ll INF = LLONG_MAX;           // INF = 1e9+123
vector<pair<ll,ll>>adj[mx];
ll dis[mx],par[mx];
bool vis[mx];
 
ll m,n;
 
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
    //cin>>t;
    while(t--){
        cin>>n>>m;
        for(ll i=0;i<=n;i++){       //memset
            adj[i].clear();
            dis[i] = INF;
        }
        ll u,v,c,i;
        for(i=0;i<m;i++){
            cin>>u>>v>>c;
            adj[u].pb({v,c});
            adj[v].pb({u,c});
        }
        //cout<<"Enter Source: "<<endl;
        //ll src; cin>>src;
        dijkstra(1);
        /*
        // For Path Printing
        if(dis[n]==INF){
            cout<<-1<<endl;
        }else{
            vector<ll>v;
            ll x = n;
            while(x!=0){
                v.pb(x);
                x = par[x];
            }
            reverse(v.begin(),v.end());
            for(auto x:v)
                cout<<x<<" ";
            cout<<endl;
        }*/
        // For Cost Print
        cout<<dis[n]<<endl;
    }
 
 
return 0;// @Imtiaz_rafi
}