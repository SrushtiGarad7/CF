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
    vi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
     if(k==1 && !is_sorted(a.begin(), a.end())) no;
     else yes;
}
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
/*if k==1 and array is not sorted then only no else yes
2 1
3 1 
k=1 and arr is not sorted then no
if k=1 only in one case we will get yes i.e. in sorted array
*/