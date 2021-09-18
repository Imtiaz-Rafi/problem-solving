#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e5+123;
ll tree[mx*3],arr[mx];
ll init(ll node,ll l,ll r){
    if(l==r){
        tree[node] = arr[l];
        return tree[node];
    }
    ll mid = (l+r)/2;
    ll left = node*2;
    ll right = (node*2)+1;
    return tree[node] = min(init(left,l,mid) , init(right,mid+1,r));
}

ll query(ll node,ll l,ll r,ll i,ll j){
    if(i>r || j<l) return INT_MAX;
    if(l>=i && r<=j) return tree[node];
    ll left = node*2;
    ll right = (node*2)+1;
    ll mid = (l+r)/2;
    ll x = query(left,l,mid,i,j);
    ll y = query(right,mid+1,r,i,j);
    return min(x,y);
}

ll update(ll node,ll l,ll r,ll i,ll value){
    if(i>r || i<l) return INT_MAX;
    if(l>=i && r<=i){
        return tree[node]=value;
    }
    ll left = node*2;
    ll right = (node*2)+1;
    ll mid = (l+r)/2;
    return tree[node] = min(update(left,l,mid,i,value),update(right,mid+1,r,i,value));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,ts,a,b,n,x,y,i;
    cin>>t;
    for(ts=1;ts<=t;ts++){
        cin>>a>>b;
        for(i=1;i<=a;i++){
            cin>>arr[i];
        }
        init(1,1,a);
        cout<<"Case "<<ts+1<<":"<<endl;
        for(i=0;i<b;i++)
        {
            cin>>x>>y;
            cout<<query(1,1,a,x,y)<<endl;
        }
    }
return 0;// @Imtiaz_rafi
}
