#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll x,n,pos;
    cin>>x>>n;

    set<ll> s;
    s.insert(0);
    s.insert(x);
    multiset<ll> len;
    len.insert(x);
    for(ll i=0;i<n;i++){
        cin>>pos;
        auto it = s.lower_bound(pos);
        ll left = *prev(it);
        ll right = *it;
        s.insert(pos);
        len.erase(len.find(right-left));
        len.insert(right-pos);
        len.insert(pos-left);
        cout<<*len.rbegin()<<" ";
    }
    return 0;
}