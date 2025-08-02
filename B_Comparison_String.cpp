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
      ll n;
      cin>>n;
      st s;
      cin>>s;
      ll cnt=1, maxi=1;
      lop(i,0,n-1){
        if(s[i]==s[i+1]) cnt++;
        else cnt=1;
        if(cnt>maxi) maxi=cnt;
      } 
      cout(maxi+1);
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}