/**
*  Bismillahir Rahmanir Rahim.
*  Imtiaz_rafi
*  PCIU, CHITTAGONG
**/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<ll>vi;
typedef map<ll,ll>mi;
typedef pair<ll,ll>pll;
typedef vector<pll> vll;
typedef set<ll>st;
typedef set<char>sc;
ll dx[] = {-1,+1,0,0,+1,-1,+1,-1};
ll dy[] = {0,0,-1,+1,+1,+1,-1,-1};
const ll mx = 1e5+123;
const ll MOD = 1e9+7;
const ll INF = LLONG_MAX;

#define speed() ios::sync_with_stdio(0);cin.tie(0);
#define file()  freopen ("input.txt", "r", stdin);freopen ("output.txt", "w", stdout);
#define sl(a)   scanf("%lld",&a)
#define all(v)  v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define rep(i,b,e) for(__typeof(e) i=(b)-(b>e);i!=(e)-(b>e);i+=1-2*(b>e))
#define trace(x)   cerr << #x << " = " << x << endl
#define mem(dp,i)  memset(dp,i,sizeof(dp))
#define pb push_back
#define pf push_front
#define eb emplace_back
#define mp make_pair
#define F first
#define S second
#define pi acos(-1)
#define en '\n' //(1LL<<(3)) *2^3

template <class T> T power(T a,T b){a%=MOD;if(!a) return 0;T p=1;while(b>0){if(b&1){p*=a;p%=MOD;}a*=a;a%=MOD;b=b>>1;}return p;}
template <class T> void print(vector<T> &v){for(T u:v){cout<<u<<" ";}cout<<endl;}
template <class T> T is_sqrt(T a){T x = sqrt(a);return x*x==a;}
template <class T> T gcd(T a, T b){return (b!=0?gcd<T>(b,a%b):a);}
template <class T> T lcm(T a, T b){return (a/gcd<T>(a,b)*b);}

ll BS(ll l,ll r,ll a[],ll k){ll mid,i=-1;while(l<=r){mid=(l+r)>>1;if(a[mid]==k){return i=mid;/*r=mid-1;*/}if(a[mid]<k) l=mid+1;if(a[mid]>k) r=mid-1;}return i;}

int main()
{
    speed();



return 0;
}

