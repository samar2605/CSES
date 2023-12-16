#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;
    
    ll start,end;
    vector<pair<ll,ll>> arr;
    for(ll i=0;i<n;i++){
        cin>>start>>end;
        arr.push_back({end,start});
    }

    sort(arr.begin(),arr.end());

    ll count =1, endTime =arr[0].first;
    for(ll i=1;i<n;i++){
        if(arr[i].second>=endTime){
            endTime = arr[i].first;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

