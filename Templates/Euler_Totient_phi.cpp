const ll mx = 1e7+123;
ll marked[mx/64 +2];
vector<ll> prime;
ll phi[mx];
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

ll eulerPhi(ll n){
    ll result = n;
    for(ll i=0;i<prime.size() && prime[i]<=sqrt(n);i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
            }
            result /= prime[i];
            result *= prime[i]-1;
        }
    }
    if(n>1){
        result /= n;
        result *= n-1;
    }
    return result;
}

void eulerTotient(){
    for(ll i=0;i<mx;i++) phi[i] = i;
    for(ll i=2;i<mx;i++){
        if(phi[i]==i){
            for(ll j=i;j<mx;j+=i){
                phi[j] -= (phi[j]/i);
            }
        }
    }
}
