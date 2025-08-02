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
       ll n,k;
       cin>>n>>k;
       st s;
       cin>>s;
    //    st rev=s;
    //    reverse(all(rev));
    //    ll cnt=0;
       bool ans=0, ans1=1;
       loop(n/2){
        if(s[i]!=s[n-1-i]){
            ans=(s[i]<s[n-1-i]);
            break;}
       }
       if(ans){ 
        yes;
        continue;
       }
       loop(n){
        if(s[i]!=s[0]){ans1=0;
        break;}
       }
       if(ans1){ 
        no;
        continue;
       }
       if(k>0) yes;
       else no;

    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}


