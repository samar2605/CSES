#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    ll mn=LONG_LONG_MAX;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    
    vector<ll> preSum(n,0),sufSum(n);
    preSum[0]=arr[0];
    for(ll i=1;i<n;i++){
        preSum[i]+=preSum[i-1]+arr[i];
    }
    sufSum[n-1]=arr[n-1];
    for(ll i=n-2;i>=0;i--){
        sufSum[i]+=sufSum[i+1]+arr[i];
    }

    for(ll i=0;i<n;i++){
        ll cost = abs(preSum[i]-(i+1)*arr[i])+abs(sufSum[i+1]-(n-i-1)*arr[i]);
        mn=min(mn,cost);
    }
    cout<<mn<<endl;
    return 0;
}