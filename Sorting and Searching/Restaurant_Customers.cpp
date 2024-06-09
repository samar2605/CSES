#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    ll a,b;
    vector<pair<ll,ll>> arr;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        arr.push_back({a,b});
    }

    sort(arr.begin(),arr.end());

    priority_queue<ll,vector<ll>, greater<ll>> pq;
    pq.push(arr[0].second);
    
    for(ll i=1;i<n;i++){
        if(arr[i].first>pq.top()){
            pq.pop();
            pq.push(arr[i].second);
            continue;
        }else{
            pq.push(arr[i].second);
        }    
    }
    cout<<pq.size()<<endl;

    return 0;
}