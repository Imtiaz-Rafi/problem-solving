vector<ll> createTemp(string pattern){
    vector<ll> lps(pattern.size());
    ll index = 0;
    for(ll i=1;i<pattern.size();){
        if(pattern[index]==pattern[i]){
            lps[i] = index+1;
            index++, i++;
        } else {
            if(index!=0)
                index = lps[index-1];
            else
                lps[i] = index,i++;
        }
    }
    return lps;
}

void kmp(string text,string pattern){
    vector<ll> lps = createTemp(pattern);
    ll i=0,j=0;
    bool found = false;
    while(i<text.size()){
        if(text[i]==pattern[j]){
            i++,j++;
        } else{
            if(j!=0) j = lps[j-1];
            else i++;
        }
        if(j==pattern.size()){
            cout<<"found"<<endl;
            //cout<<(i-pattern.size())<<endl;
            found = true;
            break;
            //j = lps[j-1];
        }
    }
    if(!found) cout<<"Not Found"<<endl;
}
