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
    ll first,second,third,fourth, flag=0;

    for(ll i=0;i<n-3;i++){
        first = arr[i].second+1;
        for(ll l=i+1;l<n-2;l++){
            second = arr[l].second+1;
            ll j=l+1,k=n-1;
            while(j<k){
                if(arr[i].first+arr[l].first+arr[j].first+arr[k].first==target){
                    third = arr[j].second+1;
                    fourth = arr[k].second+1;
                    flag =1;
                    break;
                }else if(arr[i].first+arr[l].first+arr[j].first+arr[k].first<target)
                    j++;
                else    
                    k--;
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    if(flag){
        cout<<first<<" "<<second<<" "<<third<<" "<<fourth<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}