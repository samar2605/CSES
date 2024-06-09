#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    ll n,m,k;
    cin>>n>>m>>k;
    
    vector<ll> applicant(n), apartment(m);
    for(ll i=0;i<n;i++){
        cin>>applicant[i];
    }

    for(ll i=0;i<m;i++){
        cin>>apartment[i];
    }

    sort(applicant.begin(),applicant.end());
    sort(apartment.begin(),apartment.end());

    ll i=0,j=0,count=0;
    while(i<applicant.size() && j<apartment.size()){
        if(apartment[j]<=applicant[i]+k && apartment[j]>=applicant[i]-k){
            count++;
            j++;
            i++;
        }
        else{
            if(apartment[j]>applicant[i]+k)
                i++;
            else
                j++;
        }
    }
    cout<<count<<endl;
    return 0;
}