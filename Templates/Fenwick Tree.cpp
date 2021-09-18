
//FENWICK TREE

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const ll mx = 1e5+123;
ll tree[mx];

void update(ll ind,ll val,ll bound){
    while(ind<=bound){
        tree[ind]+=val;
        ind+= (ind & -ind);
    }
	return;
}

ll query(ll ind){
    ll sum=0;
    while(ind>0){
        sum+=tree[ind];
        ind-= (ind & -ind);
    }
    return sum;
}
void showTree(ll b[],ll a){
    for(ll i=1;i<=a;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
	return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,a,i;
    cin>>t;
    while(t--){
        cin>>a;
        ll b[a+1];
		memset(tree,0,sizeof(tree));  //MUST DO MEMSET
        for(i=1;i<=a;i++){
            cin>>b[i];
            update(i,b[i],a);		//MUST UPDATE WHILE CIN
        }
        ll q;
        cin>>q;
        while(q--){
            //cout<<query(ind)<<endl;
        }
    }

return 0;// @Imtiaz_rafi
}
