#include<bits/stdc++.h>
using namespace std;

#define ll long long

void allSubset(vector<ll> v,ll total,ll index,ll sum, ll& mn){
    if(index>=v.size())
    {
        mn = min(mn,abs(total-2*sum));
        return;
    }

    allSubset(v,total, index+1,sum, mn);
    allSubset(v,total, index+1,sum+v[index], mn);
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    ll mn = INT_MAX, total=0,sum=0; 
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        total+=v[i];
    }

    allSubset(v,total,0,sum,mn);
    cout<<mn;
    return 0;
}