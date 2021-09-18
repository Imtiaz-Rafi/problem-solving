/**
*   Bismillahir Rahmanir Rahim.
*   Imtiaz_rafi
*   PCIU, CHITTAGONG
**/
#include<bits/stdc++.h>
using namespace std;
#define speed() ios::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
typedef vector<ll>vi;

/*~~BELOW THIS IS NUMBER THEORY PART  ~~*/
#define on(x) (marked[x/64] & (1<<((x%64)/2)))
#define mark(x)  marked[x/64] |= (1<<((x%64)/2))
const ll mx = 1e8+123;
vector<ll>primes;
ll marked[mx]; // mx = 1e8+123;

bool IsPrime(ll a){
    return (a>1 && (a==2 || ((a&1) && !(on(a)))));
}

void sieve(ll a)
{
    for(ll i=3;i*i<=a;i+=2)
        if(!(on(i)))
            for(ll j=i*i;j<=a;j+=(i+i))
                marked[j/64] |= (1<<((j%64)/2));
}

vector<ll> getPrimes(ll n)
{
    for(ll i=2;i<=n;i++)
        if(IsPrime(i))
            primes.push_back(i);
    return primes;
}

ll countDivisor(ll a)
{
    ll div = 1;
    for(ll i=0;i<primes.size();i++)
    {
        if(a%primes[i]==0)
        {
            ll cnt = 1;
            while(a%primes[i]==0)
            {
                a/=primes[i];
                cnt++;
            }
            div*=cnt;
        }
    }
    return div;
}
int main()
{
    speed();
    ll a;

    //sieve(100000);
    //getPrimes(5000);
    //countDivisor(a);

return 0;
}
