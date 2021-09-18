#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e8+123;
ll marked[mx/64 +2];
#define all(v)  v.begin(),v.end()
vector<ll> prime;
bool isPrime(ll n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    return (marked[n/64]&(1LL<<((n&63)/2))) ==false;
}
void sieve(ll n) {
    n +=100;
    for(ll i=3; i*i<=n ;i+=2){
        if(!(marked[i/64] & (1LL<<((i&63)/2)))){
            for( ll j=(i*i) ; j<=n ; j+=(i+i) ) {
                marked[j/64] |= (1LL<<((j&63)/2)) ;
            }
        }
    }
    prime.pb(2);
    for(ll i=3;i<=n;i+=2)
        if(!(marked[i/64]&(1LL <<((i&63)/2))))
            prime.pb(i);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve(100000000);

    ll t=1,ts,a,b,i;
    cin>>t;
    for(ts=0;ts<t;ts++){
        cout<<"Case "<<ts+1<<": ";
        cin>>a>>b;
        ll ans=0;
        ll x=lower_bound(all(prime),a)-prime.begin();
        ll y=upper_bound(all(prime),b)-prime.begin();
        //cout<<x<<" "<<y<<endl;

        cout<<y-x<<endl;
    }



return 0;// @Imtiaz_rafi
}
