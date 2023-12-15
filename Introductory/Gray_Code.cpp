#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;

    vector<string> ans;
    ans.push_back("");

    for(ll i=0;i<t;i++){
        ll size = ans.size();
        for(ll j=size-1;j>=0;j--){
            ans.push_back(ans[j]);
        }

        size = 2*size;
        for(ll j=0;j<size;j++){
            if(j<size/2)
                ans[j]+='0';
            else
                ans[j]+='1';
        }
    }
    for(auto v:ans){
        cout<<v<<endl;
    }
    return 0;
}