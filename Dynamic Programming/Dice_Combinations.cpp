#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007


int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll> dp(n+1,0);
    dp[0]=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i] = (dp[i]+dp[i-j])%MOD;
            }
        }
    }
    cout<<dp[n]%MOD<<endl;
    return 0;
}