#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e5+123;
ll arr[mx];
struct info{
    ll prop,sum;
}tree[mx*3];

ll query(ll node,ll l,ll r,ll i,ll j,ll carry = 0){
    if(i>r || j<l) return 0;
    if(l>=i && r<=j) return tree[node].sum+ carry*(r-l+1);
    ll left = node*2;
    ll right = (node*2)+1;
    ll mid = (l+r)/2;
    ll x = query(left,l,mid,i,j,carry+tree[node].prop);
    ll y = query(right,mid+1,r,i,j,carry+tree[node].prop);
    return x+y;
}

void update(ll node,ll l,ll r,ll i,ll j,ll value){
    if(i>r || j<l) return;
    if(l>=i && r<=j){
        tree[node].sum+=((r-l+1)*value);
        tree[node].prop+=value;
        return;
    }
    ll left = node*2;
    ll right = (node*2)+1;
    ll mid = (l+r)/2;
    update(left,l,mid,i,j,value);
    update(right,mid+1,r,i,j,value);
    tree[node].sum =tree[left].sum+tree[right].sum+(r-l+1)*tree[node].prop;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,ts,a,b,n,x,y,i,c;
    cin>>t;
    for(ts=1;ts<=t;ts++){
        memset(tree,0,sizeof(tree));
        cin>>a>>b;
        cout<<"Case "<<ts<<":"<<endl;
        while(b--){
            cin>>c>>x>>y;
            if(c==0)
            {
                update(1,0,a-1,x,y,1);
            }
            else
            {
                cout<<query(1,0,a-1,x,y)<<endl;
            }
        }
    }
return 0;// @Imtiaz_rafi
}
