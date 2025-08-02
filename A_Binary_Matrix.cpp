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
#define loop(n)        for(int i=0; i<n; i++)
#define cout(n)        cout<<n<<endl
//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
       ll n,m;
       cin>>n>>m;
       vs a(n);
       loop(n) cin>>a[i];
       ll cnt1=0, cnt2=0;
       loop(n){
        ll ans=0;
        for(int j=0; j<m; j++) ans^=a[i][j]-'0';
        if(ans!=0) cnt1++;
       }
       loop(m){
        ll ans=0;
        for(int j=0; j<n; j++) ans^=a[j][i]-'0';
        if(ans!=0) cnt2++;
       }

       cout<<max(cnt1,cnt2)<<endl;

       }
   }       

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}


