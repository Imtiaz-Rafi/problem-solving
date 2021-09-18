/**
*   Bismillahir Rahmanir Rahim.
*   Imtiaz_rafi
*   PCIU, CHITTAGONG
**/
#include<bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(0);cin.tie(0);
#define filein freopen ("input.txt", "r", stdin)
#define fileout freopen ("output.txt", "w", stdout)
#define rep(i,a) for(ll i=0;i<a;i++)
#define rep1(i,begin,end) for(ll i=begin;i<=end;i++)
#define all(v)   v.begin(),v.end()
#define pb push_back
#define pf push_front
#define mp make_pair
#define pi acos(-1)
// bitshift (1LL<<(3)) *2^3
typedef long long int ll;
typedef vector<ll>vi;
typedef map<ll,ll>m;
typedef map<char,ll>mc;
typedef set<ll>st;
typedef set<char>sc;
const int mx = 1e5+123;
vi adj[mx];
int vis[mx];
void bfs(int u)
{
    memset(vis,-1,sizeof(vis));
    vis[u]=0;
    queue<int>q;
    q.push(u);
    while(!q.empty())
    {
       int v = q.front();
       q.pop();
       for(auto x:adj[v])
       {
         if(vis[x]==-1)
         {
           vis[x]=vis[v]+1; //level
           q.push(x);
         }
       }
    }
}
int main()
{
    speed;
    int t,i,j,a,b,x,y,e=0,ans=0,sum=0,u,v;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        for(i=0;i<a;i++)
      {
        adj[i].clear();
      }
        for(i=0;i<b;i++)
        {
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        bfs(1);
        cout<<vis[a]<<endl;

    }


}

