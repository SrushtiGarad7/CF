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
    int n,k;
    cin>>n>>k;
    vi a(n,0);
    int ans=1;
    //for(int i=1; i<=n/k; i++){
    //  a[i*k-1]=i;
    //}
    for(int j=k-1; j<n; j+=k){
        a[j]=ans;
        ans++;
    }
    for(int j=0; j<n; j++){
        if(a[j]==0){
           //while(ans<=n && (ans==k||ans<=n/k)) ans++;
           a[j]=ans;
           ans++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
