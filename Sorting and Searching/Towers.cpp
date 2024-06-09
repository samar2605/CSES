#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    multiset<ll> s;
    for(ll i=0;i<n;i++){
        if(!s.empty()){
            auto index = s.upper_bound(arr[i]);
            if(index!=s.end()){
                s.erase(index);
            }
            }    
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}