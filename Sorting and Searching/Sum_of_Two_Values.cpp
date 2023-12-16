#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, target;
    cin>>n>> target;

    vector<pair<ll,ll>> arr;
    ll num;
    for(ll i=0;i<n;i++){
        cin>>num;
        arr.push_back({num,i+1});
    }
    sort(arr.begin(),arr.end());

    ll i=0,j=arr.size()-1;
    while(i<j){
        if(arr[i].first+arr[j].first==target){
            cout<<arr[i].second<<" "<<arr[j].second<<endl;
            return 0;
        }else if(arr[i].first+arr[j].first<target){
            i++;
        }else{
            j--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}