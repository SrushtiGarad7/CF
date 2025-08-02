#include <bits/stdc++.h>
using namespace std;

//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//
#define Fighter        main 
#define Srushti        ios_base::sync_with_stdio(false);
#define Garad          cin.tie(NULL);
#define ll             long long
#define pii            pair<int, int> 
#define vs             vector<string>
#define vi             vector<int>
#define vl             vector<ll>
#define vii            vector<pair<int, int>>
#define vv             vector<vector<ll>>
#define st             string
#define mii            map<int,int>
#define mll            map<ll,ll>
#define umll           unordered_map<ll,ll>
#define umii           unordered_map<int,int>
#define vpair          vector<pair<ll, ll>>
#define set            set<ll>
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl 
#define f              first
#define s              second
#define pb             push_back
#define all(x)         (x).begin(), (x).end()
#define allr(x)        (x).rbegin(), (x).rend()
#define loop(n)        for(int i = 0; i < n; i++)
#define lop(i,x,y)     for(int i = x; i < y; i++)
#define rlop(i,x,y)    for(int i = x; i >=y; i--)
#define cout(n)        cout<<n<<endl
#define lb             lower_bound
#define ub             upper_bound

//v input(ll n){v a(n); for(auto &x : a) cin>>x; return a;}

//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
       ll n,m;
       cin>>n>>m;
       vv a(n, vl(m));
       ll ans=0;
       loop(n){
        //   vi vec;
           lop(j,0,m){
            cin>>a[i][j];
            ans=max(ans,a[i][j]);
           }
        //   a.pb(vec);
       }
       ll ans1=ans;
       lop(i,0,n){
        lop(j,0,m){
            ll cnt=0;
            lop(k,0,n){
                lop(l,0,m){
                    ll v=a[k][l];
                    if(k==i||l==j) v--;
                    cnt=max(cnt, v);
                }
            }
            // if(cnt<ans1) ans1=cnt;
            ans1=min(ans1,cnt);
           }
       }
       cout(ans1);
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}