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
#define loop(n)        for(ll i = 0; i < n; i++)
#define lop(i,x,y)     for(ll i = x; i < y; i++)
#define rlop(i,x,y)    for(int i = x; i >=y; i--)
#define cout(n)        cout<<n<<endl
#define lb             lower_bound
#define ub             upper_bound

v input(ll n){v a(n); for(auto &x : a) cin>>x; return a;}

//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    ll t;
    cin>>t;
    while(t--){
       const ll mod=998244353;
       ll n;
       cin>>n;
       v p=input(n);
       v q=input(n);
       ll maxi=0;
       loop(n){
        if(p[i]>maxi) maxi=p[i];
        if(q[i]>maxi) maxi=q[i];
       }
       v pow(maxi+1);
       pow[0]=1;
       for(ll i=1; i<=maxi; i++){
        pow[i]=(pow[i-1]*2)%mod;
       }
       loop(n){
        ll ans=0;
        for(ll j=0; j<=i; j++){
            ll cnt=pow[p[j]];
            ll cnt1=pow[q[i-j]];
            //lop(k,0,p[j]) cnt=(cnt*2)% mod;
            //lop(k,0,q[i-j]) cnt1=(cnt1*2)% mod;

            ll cnt2=(cnt+cnt1)%mod;
            //ans=max(ans,cnt2);
            if(cnt2>ans) ans=cnt2;


        }
        cout<<ans<<" ";
       }
       cout<<endl;
    
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}