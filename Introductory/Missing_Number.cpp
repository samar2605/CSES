#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n;
    cin>>n;

    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n-1);
    int j=0;
    for(int i=1;i<=n;i++){
        if(arr[j]!=i){
            cout<<i<<endl;
            break;
        }
        j++;
    }

    return 0;
}