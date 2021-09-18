#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e5+123;
ll dp[110][mx];
ll a,b,w[mx],c[mx];
ll solve(ll i, ll j){
    if(i>=a) return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    ll x = 0,y = 0;
    if(w[i]+j<=b)
        x = c[i] + solve(i+1,w[i]+j);
    y = solve(i+1,j);
    return dp[i][j] = max(x,y);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp,-1,sizeof(dp));
    cin>>a>>b;
    for(ll i=0;i<a;i++){
        cin>>w[i]>>c[i];
    }
    cout<<solve(0,0)<<endl;

return 0;// @Imtiaz_rafi
}
