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
    int n,k;
    cin>>n>>k;
    vi a(n);
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        bool ans=1;
    for(int j=0; j<n; j++){
        if(i==j)
        continue;
        if(abs(a[i]-a[j])%k==0){
        ans=0;
        break;
    }
    }
    if(ans){
        yes;
        cout<<i+1<<endl;
        return;
    }
    }
    no;
    }

int Fighter(){
    Srushti Garad;
    int t;
    cin>>t;
    while (t--){
    solve();
    }
    return 0;
}
