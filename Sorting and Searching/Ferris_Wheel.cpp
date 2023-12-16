#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n, w;
    cin>>n>>w;

    vector<ll> weight(n);
    for(ll i=0;i<n;i++){
        cin>>weight[i];
    }

    sort(weight.begin(),weight.end());

    ll i=0,j=weight.size()-1,count=0;

    while(i<=j){
        if(weight[i]+weight[j]<=w){
            count++;
            i++;
            j--;
        }else if(weight[j]<=w){
            count++;
            j--;
        }
    }
    cout<<count<<endl;
    return 0;
}