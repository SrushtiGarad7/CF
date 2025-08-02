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
       ll n,m;
       cin>>n>>m;
       vll a(n);
       loop(n) cin>>a[i];
       ll b; cin>>b;
       //ll cnt=0;
    //    loop(n-1){
    //     if(a[i]<=a[i+1]) cnt++;
    //     else{
    //         a[i]=b-a[i];
    //         if((i==0||a[i-1]<=a[i]) && a[i]<=a[i+1]){
    //             cnt++;
    //         }else break;
    //     }
        
    //    }
    //     if(cnt==n-1) yes;
    //     else if(n==1) yes;
    //     else no;
    ll cnt=min(a[0],b-a[0]);
    bool ans=1;
    loop(n) {
        ll cnt1=a[i];
        ll cnt2=b-a[i];
        ll x=INT_MAX;
        if(cnt1>=cnt) x=min(x,cnt1);
        if(cnt2>=cnt) x=min(x,cnt2);

        if(x==INT_MAX){
            ans=0;
            break;
        }
        cnt=x;
    }
    if(ans) yes;
    else no;


    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

