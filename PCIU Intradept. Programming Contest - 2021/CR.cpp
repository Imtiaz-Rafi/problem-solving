#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector< ll> vi;
typedef map<ll,ll> mi;
typedef pair<ll,ll> pll;
typedef vector<pll> vll;
typedef set<ll> st;
typedef set<char> sc;
ll dx[]= {+1,-1,0,0};
ll dy[]= {0,0,+1,-1};
const ll MOD = 1e9+7;

#define speed() ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define mem(dp,i) memset(dp,i,sizeof(dp));

#define pb push_back
#define mp make_pair
#define pi acos(-1)

template<class T> T power(T a, T b)
{
    a%=MOD;
    if(!a) return 0;
    T p=1;
    while(b>0)
    {
        if(b&1)
        {
            p*=a;
            p%=MOD;
        }
        a*=a;
        a%=MOD;
        b=b>>1;
    }
    return p;
}
template<class T> T gcd(T a, T b)
{
    return (b!=0?gcd<T>(b,a%b):a);
}
template<class T> T lcm(T a, T b)
{
    return (a/gcd<T>(a,b)*b);
}

const ll mx =1e6+123;
// bitset<mx> is_prime;
bool is_prime[mx];
vector<ll> prime;
void sieve(ll n)
{
    n += 100;
    for (ll i = 3; i <= n; i += 2)
        is_prime[i] = 1;
    ll sq = sqrt(n);
    for (ll i = 3; i <= sq; i += 2)
    {
        if (is_prime[i] == 1)
        {
            for (ll j = i * i; j <= n; j += (i + i))
            {
                is_prime[j] = 0;
            }
        }
    }
    is_prime[2] = 1;
    prime.push_back(2);
    for (ll i = 3; i <= n; i += 2)
    {
        if (is_prime[i] == 1)
            prime.push_back(i);
    }
}
vector<long long> factorize(long long n)
{
    vector<long long> ret;
    for (auto p : prime)
    {
        if (1LL * p * p > n)
            break;
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n /= p;
                ret.push_back(p);
            }
        }
    }
    if (n > 1)
        ret.push_back(n);
    return ret;
}
int NOD (long long n) // 60
{
    int ret = 1;
    for ( auto p : prime )   // p = 5
    {
        if ( 1LL * p * p > n ) break;
        if ( n % p == 0 )
        {
            int cnt = 1;
            while ( n % p == 0 )   // n = 5
            {
                n /= p; // n = 5;
                cnt++; // 2
            }
            ret *= cnt; // 1 * 3 * 2
        }
    }
    if ( n > 1 ) ret *= 2; // 1 * 3 * 2 * 2 = 12
    return ret;
}
int main(){
    ll a,ans=0,res=0;
    sieve(1000000);
    cin>>a;

    for(ll i=1;i<=a;i++){
        ll mx=INT_MIN;
        mx=max(mx,ll(NOD(i)));
        //cout<<mx<<endl;
        if(mx>res){
            res=mx;
            ans=i;
        }
    }
    cout<<ans<<endl;

}

