#include<bits/stdc++.h>
using namespace std;

#define ll long long

void towerOfHanoi(ll n, ll source, ll mid, ll des,vector<pair<ll,ll>>& ans){
    if(n==0)
        return;

    towerOfHanoi(n-1, source,des,mid,ans);
    ans.push_back({source,des});
    towerOfHanoi(n-1,mid,source,des,ans);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<pair<ll,ll>> ans;
    towerOfHanoi(n,1,2,3,ans);
    
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}