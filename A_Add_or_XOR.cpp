#include <bits/stdc++.h>
using namespace std;

//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//
#define Fighter        main 
#define Srushti        ios_base::sync_with_stdio(false);
#define Garad          cin.tie(NULL);
#define ll             long long
#define pii            pair<int, int> 
#define v              vector<ll>
#define vs             vector<string>
#define vi             vector<int>
#define vii            vector<pair<int, int>>
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

v input(ll n){v a(n); for(auto &x : a) cin>>x; return a;}

//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
       ll a,b,x,y;
       cin>>a>>b>>x>>y;
       if(a<=b){
        if(x<=y) cout((b-a)*x);
        else{
            ll ans=0;
            lop(i,a,b){
                if(i%2==0) ans+=y;
                else ans+=x;
            }
            cout(ans);
        }
       }
       else{
        if(a-b==1 && a%2!=0) cout(y);
        else cout(-1);
       }
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}