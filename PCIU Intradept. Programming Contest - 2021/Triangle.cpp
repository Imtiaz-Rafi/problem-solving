#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector< ll> vi;
typedef map<ll,ll> mi;
typedef pair<ll,ll> pll;
typedef vector<pll> vll;
typedef set<ll> st;
typedef set<char> sc;
ll dx[]={+1,-1,0,0};
ll dy[]={0,0,+1,-1};
const ll MOD = 1e9+7;

#define speed() ios::sync_with_stdio(0);cin.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define mem(dp,i) memset(dp,i,sizeof(dp));

#define pb push_back
#define mp make_pair
#define pi acos(-1)

template<class T> T power(T a, T b){a%=MOD;if(!a) return 0;T p=1;while(b>0){if(b&1){p*=a;p%=MOD;}a*=a;a%=MOD;b=b>>1;}return p; }
template<class T> T gcd(T a, T b){return (b!=0?gcd<T>(b,a%b):a);}
template<class T> T lcm(T a, T b){return (a/gcd<T>(a,b)*b);}

int main(){
    speed();
    ll t,ts,a,b,c,i;
    cin>>a>>b>>c;
    if(a==b &&a==c && b==c){
        cout<<"Equilateral Triangle"<<endl;
    }else if(a==b || b==c || a==c){
        cout<<"Isosceles Triangle"<<endl;
    }else{
        cout<<"Normal Triangle"<<endl;
    }
    return 0;
}



