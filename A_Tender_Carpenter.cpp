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
    ll n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    
    int cnt=0;
    for(int i=0; i<n-1; i++){
        //if(a[i]==a[i+1]) cnt++;
        
        int x=min(a[i], a[i+1]);
        int y= max(a[i], a[i+1]);

        if(x*2>y) cnt++;
        
    }
    if(cnt+1>=2) yes;
    else no;

}
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
