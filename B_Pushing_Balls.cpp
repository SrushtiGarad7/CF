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
#define allr(x)        (x).rbegin(), (x).rend()
#define loop(n)        for(int i=0; i<n; i++)
#define cout(n)        cout<<n<<endl
#define lb             lower_bound
#define ub             upper_bound
//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
     ll n,m;
     cin>>n>>m;
     vs a(n);
     loop(n) cin>>a[i];

     bool ans=1;
     loop(n){
        if(!ans) break;
        for(int j=0; j<m; j++){
            if(a[i][j]=='1'){
                bool row=0, col=0;

                for(int k=0; k<i; k++) if(a[k][j]=='0') row=1;
                for(int k=0; k<j; k++) if(a[i][k]=='0') col=1;

                if(row && col){
                    ans=0;
                    break;
                }

            }
        }
     }
     if(ans) yes;
     else no;
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}


