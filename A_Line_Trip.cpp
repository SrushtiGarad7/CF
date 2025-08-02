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
    int n,x;
    cin>>n>>x;
    vi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
        int l=0;
        int ans= INT_MIN345;
        for(int i=0; i<n; i++){
            ans=max(ans, a[i]-l);
            l=a[i];
        }
        ans=max(ans, 2*(x-l));
        cout<<ans<<endl;
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
/*
3 7
1 2 5

0  1    2    5   7(x)
-->1l-->1l-->3l-->2l
             2l<--   ==2*2=4l
max(1, 1, 3, 4)=4
max(a1-a0, a2-a1, a3-a2,...2*(x-an))

*/
