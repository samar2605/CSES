#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll t;
    cin>>t;

    ll num;
    set<ll> s;
    while(t--){
        cin>>num;
        s.insert(num);
    }
    cout<<s.size()<<endl;
    
    return 0;
}