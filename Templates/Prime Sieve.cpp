
const ll mx = 1e8+123;
ll marked[mx/64 +2];
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
