#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll a,i,j;
    cin>>a;
    ll b[a];
    for(i=0;i<a;i++){
        cin>>b[i];
    }
    //Bubble Sort
    for(i=0;i<a-1;i++){
        for(j=0;j<a-i-1;j++){
            if(b[j]>b[j+1]){
                swap(b[j],b[j+1]);
            }
        }
    }
    for(i=0;i<a;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
 
return 0;  //@Imtiaz_rafi
}