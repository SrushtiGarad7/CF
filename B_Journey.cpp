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
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    int sum= a+b+c;
    int ans=3*(n/sum);
    n=n%sum;
    if(n==0) cout<<ans<<endl;
    else{
        if(n<=a) cout<<ans+1<<endl;
        else if(n<=a+b) cout<<ans+2<<endl;
        else cout<<ans+3<<endl;
    }
    
 }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
