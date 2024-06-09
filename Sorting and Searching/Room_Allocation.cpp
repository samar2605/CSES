#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n,arrival, departure;
    cin>>n;

    vector<pair<ll,pair<ll,ll>>> arr;
    for(ll i=0;i<n;i++){
        cin>>arrival>>departure;
        arr.push_back(make_pair(arrival,make_pair(departure,i)));
    }

    sort(arr.begin(),arr.end());

    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push({arr[0].second.first,1});
    vector<pair<ll,ll>> ans;
    ll count=1,room;
    ans.push_back({arr[0].second.second,count});
    for(ll i=1;i<n;i++){
        if(pq.top().first<arr[i].first){
            room=pq.top().second;
            ans.push_back({arr[i].second.second,room});
            pq.pop();
            pq.push({arr[i].second.first,room});
        }else{
            count++;
            ans.push_back({arr[i].second.second,count});
            pq.push({arr[i].second.first,count});
        }
    }
    sort(ans.begin(),ans.end());
    cout<<count<<endl;
    for(auto v:ans){
        cout<<v.second<<" ";
    }
    cout<<endl;

    return 0;
}