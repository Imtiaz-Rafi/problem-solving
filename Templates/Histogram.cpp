#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

ll histogram(ll arr[],ll n){
    stack<ll>s;
    ll mx_area = 0,area_top = 0,top = 0,i=0;
    while(i<n){
        if(s.empty() || arr[s.top()]<=arr[i])
            s.push(i++);
        else{
            top = s.top();
            s.pop();
            area_top = arr[top]*(s.empty()?i:i-s.top()-1);
            if(mx_area<area_top)
                mx_area = area_top;
        }
    }
    while(s.empty()==false){
        top = s.top();
        s.pop();
        area_top = arr[top]*(s.empty()?i:i-s.top()-1);
        if(mx_area< area_top)
            mx_area = area_top;
    }
    return mx_area;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,a,i;
    cin>>t;
    for(ll ts=0;ts<t;ts++){
        cin>>a;
        ll b[a];
        for(i=0;i<a;i++){
            cin>>b[i];
        }
        cout<<"Case "<<ts+1<<": "<<histogram(b,a)<<endl;
    }

return 0;// @Imtiaz_rafi
}

