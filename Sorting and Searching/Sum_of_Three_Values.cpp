#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, target;
    cin>>n>>target;

    vector<pair<ll,ll>> arr;
    ll num;
    for(ll i=0;i<n;i++){
        cin>>num;
        arr.push_back({num,i});
    }
    sort(arr.begin(),arr.end());
    ll first,second,third, flag=0;
    for(ll i=0;i<n-2;i++){
        first = arr[i].second+1;
        ll j=i+1,k=n-1;
        while(j<k){
            if(arr[i].first+arr[j].first+arr[k].first==target){
                second = arr[j].second+1;
                third = arr[k].second+1;
                flag =1;
                break;
            }else if(arr[i].first+arr[j].first+arr[k].first<target)
                j++;
            else    
                k--;
        }
        if(flag)
            break;
    }
    if(flag){
        cout<<first<<" "<<second<<" "<<third<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}