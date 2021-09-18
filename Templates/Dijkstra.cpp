
const ll mx = 1e5+123;
const ll MOD = 1e9+7;
const ll INF = LLONG_MAX;
vector<pll>adj[mx];
ll dis[mx],par[mx];
bool vis[mx];


ll n,m;

void dijkstra(ll x) // passing source
{
    rep1(i,0,n)
        dis[i] = INF; //INF = LLONG_MAX
    priority_queue<pll>q;
    dis[x] = 0;
    q.push({0,x}); // contains distance && source node

    while(!q.empty()) {
        ll v = q.top().S; // v contains current node
        q.pop();
        if(vis[v]==0)     // if current node is not visited
        {
            vis[v] = 1;
            for(auto u:adj[v]) {         // goto next adj node
                ll a = u.F;              // a contains next adj node
                ll b = u.S;              // b contains next adj distance
                if(dis[v]+b < dis[a]) {  // relaxation
                    dis[a] = dis[v]+b;   // UPDATE
                    q.push({-dis[a],a}); // push negative dis for minimum possible and next node
                    par[a] = v;
                }
            }
        }
    }
}
