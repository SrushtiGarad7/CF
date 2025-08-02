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
       ll n,m,k;
       cin>>n>>m>>k;
       ll l=1,r=k,ans=k;
       while(l<=r){
        ll mid=(l+r)/2;
        ll cnt=n*((m/(mid+1))*mid+m%(mid+1));
        
        if(cnt>=k){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
       }
       cout(ans);
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}


