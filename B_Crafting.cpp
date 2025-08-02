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
//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vll a(n),b(n);
       for(auto &i: a) cin>>i;
       for(auto &i: b) cin>>i;
       ll cnt=0;
       for(int i=0; i<n; i++){
        cnt+=(a[i]<b[i]);
        //if(b[i]>a[i]) cnt++;
       }
       if(cnt>=2) no;
       else if(cnt ==0) yes;
       else{
        ll x=0;
        ll y=INT_MAX;;
        for(int i=0; i<n; i++){
            if(a[i]<b[i]){
            x=b[i]-a[i];
            }
            else{
                y=min(y,a[i]-b[i]);
            }

        }
        if(x<=y) yes;
        else no;
       }
      
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

