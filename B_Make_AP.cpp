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
    ll a,b,c;
    cin>>a>>b>>c;
    bool ans=0;
    
    if((c+a)%(2*b)==0) ans=1;
    if((2*b-c)%a==0 && (2*b-c)/a>0) ans=1;
    if((2*b-a)%c==0 && (2*b-a)/c>0) ans=1;
    if(a==b && b==c) ans=1;
    
    if(ans) yes;
    else no;
    }
    
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

