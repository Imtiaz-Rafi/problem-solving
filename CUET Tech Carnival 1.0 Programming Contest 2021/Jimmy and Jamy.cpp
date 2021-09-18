#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
typedef vector<ll>vi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1,ts,a,b,x,y,z,i;
    cin>>t;
    for(ts=0;ts<t;ts++){
        cout<<"Case "<<ts+1<<": ";
        string s;
        cin>>a>>s>>b;
        double temp,ans,upor;
        temp = 1/(double)a;
        ans=0.0;
        for(i=0;i<a;i++){
            cin>>x>>y>>z;
            if(s=="red"){
                if(i==b-1){
                    upor = temp*(double)(x/(double)(x+y+z));
                }
                ans+= (temp)*(double)(x/(double)(x+y+z));
            }else if(s=="green"){
                if(i==b-1){
                    upor = temp*(double)(y/(double)(x+y+z));
                }
                ans+= (temp)*(double)(y/(double)(x+y+z));
            }else if(s=="blue"){
                if(i==b-1){
                    upor = temp*(double)(z/(double)(x+y+z));
                }
                ans+= (temp)*(double)(z/(double)(x+y+z));
            }

        }
        cout<<fixed<<setprecision(5)<<double(upor/ans)<<endl;

    }



return 0;// @Imtiaz_rafi
}
