#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;
    ll res = (a+b+c);
    double x = ((2.0*res)/(double)(sqrt(3)));
    double ans = ((sqrt(3)/(double)4));
    double ans2 = (x*x);
    //cout<<x<<endl<<ans<<endl<<ans2<<endl<<ans*ans2<<endl;
    cout<<fixed<<setprecision(3)<<(res*res)/(sqrt(3))<<endl;

return 0;
}

