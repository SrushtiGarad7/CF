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
       vi a(n), b(n);
       loop(n) cin>>a[i];
       loop(n) cin>>b[i];
    //    if(n%2==0) cout<<"Bob"<<endl;
    //    else cout<<"Alice";
    // ll cnt=0;
    // loop(n){
    //     if(a[i]!=b[i])cnt++;
    // }
    // if(cnt%2==0) cout<<"Bob"<<endl;
    // else cout<<"Alice"<<endl;
    vi v=b;
    reverse(all(b));
    if(a==b  || a==v) cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;

    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

