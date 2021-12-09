#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,a,i,c;
    cin>>a;
    ll b[a];
    ll sum=0,mx = INT_MIN;
    for(i=0;i<a;i++){
        cin>>b[i];
        sum+=b[i];
        mx = max(mx,sum);
        if(sum<0){
            sum = 0;
        }
    }
    cin>>c;
    cout<<mx-c<<endl;



return 0;// @Imtiaz_rafi
}

