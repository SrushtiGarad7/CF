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
#define set            set<ll>
//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vi a(n),cnt(n+1,0),b(n);
    set ans;
    for(int i=1; i<=n; i++){
        ans.insert(i);
    }
    for(int i=0; i<n; i++){ 
            cin>>a[i];
    }
        for(int i=0; i<n; i++){
            if(ans.count(a[i])){
                b[i] = a[i];
                ans.erase(a[i]);}
                else{
                b[i]=*ans.begin();
                ans.erase(ans.begin());}
            cnt[b[i]]++;
        }
        for(int i=0; i<n; i++) 
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
//not understood