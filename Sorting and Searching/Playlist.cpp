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

    ll count = INT_MIN, j=0;
    map<ll,ll> mp;

    for(ll i=0;i<n;i++){
        while(j<i && mp.find(arr[i])!=mp.end()){
            mp[arr[j]]--;
            if(mp[arr[j]]==0)
                mp.erase(arr[j]);
            j++;
        }
        mp[arr[i]]++;
        count = max(count,i-j+1);
    }
    cout<<count<<endl;
    return 0;
}