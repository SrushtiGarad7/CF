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
        ll n,l,r;
        cin>>n>>l>>r;
        // vi a(n);
        // for(int i=0; i<n; i++){
        //     cin>>a[i];
        // }
        // ll ans=0;
        // sort(a.begin(), a.end());
        // for(int i=0; i<r-l+1; i++){
        //     ans+=a[i];
        // }
        // cout<<ans<<endl;
        l--, r--;
        vi a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vi b, c;
        for(int i=l; i<n; i++){
            b.pb(a[i]);
        }
        for(int i=0; i<=r; i++){
            c.pb(a[i]);
        }
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        ll sum1=0;
        for(int i=0; i<(r-l+1); i++){
            sum1+=b[i];
        }
        ll sum2=0;
        for(int i=0; i<(r-l+1); i++){
            sum2+=c[i];
        }
        cout<<min(sum1, sum2)<<endl;
            
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

