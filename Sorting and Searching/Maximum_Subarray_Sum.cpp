#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    ll sum=0,mx=INT_MIN, num;
    for(ll i=0;i<n;i++){
        cin>>num;
        sum+=num;
        mx= max(mx,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<mx<<endl;
    return 0;
}