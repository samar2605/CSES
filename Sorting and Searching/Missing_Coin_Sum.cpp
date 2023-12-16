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
    sort(arr.begin(),arr.end());
    
    if(arr[0]!=1)
    {
        cout<<1<<endl;
        return 0;
    }
    ll sum=1,ans=INT_MAX;
    for(ll i=1;i<n;i++)
    {
        if(sum<arr[i]-1){
            ans=sum+1;
            break;
        }
        sum+=arr[i];
    }
    if(ans == INT_MAX)
        ans = sum+1;
    cout<<ans<<endl;
    return 0;
}