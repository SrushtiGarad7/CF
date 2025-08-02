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
//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
      ll n,m;
      cin>>n>>m;
      vi x(n);
      vi y(n);
      for(int i=0; i<n; i++){
        cin>>x[i]>>y[i];
      }
      ll ans=0;
      for(int i=0; i<n-1; i++){
        ans+=4*m;
        ll a=-x[i+1]+m;
        ll b=m-y[i+1];
        ans-=2*(a+b);
      }
      ans+=4*m;
      cout<<ans<<endl;
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

//to do tomorrow...