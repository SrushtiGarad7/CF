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
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int m1=min(a,m);
    int m2=min(b,m);
    //int m3= m-min(a,b);
    int m3=(m-min(a,m))+(m-min(b,m));
    int m4=min(c,m3);

    int ans= m1+m2+m4;
    cout<<ans<<endl;
}
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
