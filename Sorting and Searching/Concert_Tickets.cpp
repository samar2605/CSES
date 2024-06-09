#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;

    multiset<ll> s;
    vector<ll> price(n), ticket(m);
    for(ll i=0;i<n;i++){
        cin>>price[i];
        s.insert(price[i]);
    }
    for(ll i=0;i<m;i++){
        cin>>ticket[i];
    }

    vector<ll> ans(m,-1);
    
    for(ll i=0;i<m;i++){
        auto index =s.lower_bound(ticket[i]);
        if(index!=s.begin()){
            if(*index!=ticket[i])
                index--;
            ans[i]=*index;
            s.erase(index);
        }else if(*index==ticket[i]){
            ans[i]=*index;
            s.erase(index);
        }
        else{
            ans[i]=-1;
        }
    }

    for(auto v:ans){
        cout<<v<<endl;
    }
    return 0;
}