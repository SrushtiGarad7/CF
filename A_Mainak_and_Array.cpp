//Author: Srushti Garad
//SY CSE
//Walchand College Of Engineering, Sangli

#include <bits/stdc++.h>
using namespace std;

//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//
#define Fighter        main 
#define Srushti        ios_base::sync_with_stdio(false);
#define Garad          cin.tie(NULL);
#define ll             long long
#define pii            pair<int, int> 
#define vll            vector<ll>
#define vs             vector<string>
#define vi             vector<int>
#define vii            vector<pair<int, int>>
#define st             string
#define mii            map<int,int>
#define mll            map<ll,ll>
#define umll           unordered_map<ll,ll>
#define umii           unordered_map<int,int>
#define vpair          vector<pair<ll, ll>>
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl 
#define f              first
#define s              second
#define pb             push_back
#define all(x)         (x).begin(), (x).end()
#define loop(n)        for(int i=0; i<n; i++)
//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vll a(n);
       loop(n) cin>>a[i];
       if(n==1) cout<<0<<endl;
       else{
        // sort(all(a));
        // cout<<a[n-1]-a[0]<<endl;
        ll mini=INT_MAX;
        ll maxi=INT_MIN;
        ll cnt=0;
        loop(n){
            mini=min(mini,a[i]);
        }
        mini=a[n-1]-mini;

        loop(n){
            maxi=max(maxi,a[i]);
        }
        maxi-=a[0];

        loop(n-1){
            cnt=max(cnt, a[i]-a[i+1]);
        }
        cout<<max({maxi,mini,cnt})<<endl;
       }

    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

