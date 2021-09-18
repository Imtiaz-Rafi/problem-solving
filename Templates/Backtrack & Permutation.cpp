#include<bits/stdc++.h>
using namespace std;
#define speed() ios::sync_with_stdio(0);cin.tie(0);
#define mem(dp,i) memset(dp,i,sizeof(dp))
#define all(v)   v.begin(),v.end()
#define pb push_back
#define en '\n'
typedef long long int ll;

bool taken[35];
string s;
vector<char>pos;
ll a,n;
void backtrack(ll idx)
{
    if(pos.size()==a)
    {
        for(ll j=0;j<a;j++)
            cout<<pos[j];
        cout<<en;
        return;
    }
    for(ll i=idx;i<n;i++)
    {
        if(taken[i]==false)
        {
            taken[i] = true;
            pos.pb(s[i]);
            backtrack(i+1);
            taken[i] = false;
            pos.pop_back();
        }
        while(s[i]==s[i+1]) i++;
    }
}

int main()
{
    speed();
    while(cin>>s>>a)
    {
        mem(taken,false);
        n = s.size();
        sort(all(s));
        backtrack(0);
    }
return 0;
}

/*
Sample input:
abcde 2
abcd 3
aba 2

sample output:
ab
ac
ad
ae
bc
bd
be
cd
ce
de
abc
abd
acd
bcd
aa
ab
*/
