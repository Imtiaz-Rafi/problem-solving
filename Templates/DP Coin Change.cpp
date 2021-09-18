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
#define mem(dp,i) memset(dp,i,sizeof(dp))
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
ll dx[] ={-1,+1,0,0,+1,-1,+1,-1};
ll dy[] ={0,0,-1,+1,+1,+1,-1,-1};
const ll mx = 1e5+123;
bool vis[mx];
vi adj[mx];
ll a,b,coin[55],dp[55][260];
ll solve(ll i,ll n)
{
    if(i==b || n==0)
        return (n==0);
    if(dp[i][n]!=-1)
        return dp[i][n];
    ll ret = 0;
    for(ll j=0;j<=n;j++)
    {
        if(n-(j*coin[i])>=0)
        {
            ret+=solve(i+1,n-(j*coin[i]));
        }
        else
            break;

    }
    return dp[i][n] = ret;

}
int main()
{
    speed;
    ll i;
    cin>>a>>b;
    mem(dp,-1);
    for(i=0;i<b;i++)
    {
        cin>>coin[i];
    }
    cout<<solve(0,a)<<endl;;
}
