#include <bits/stdc++.h>
using namespace std;

//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//
#define Fighter        main 
#define Srushti        ios_base::sync_with_stdio(false);
#define Garad          cin.tie(NULL);
#define ll             long long
#define pii            pair<int, int> 
#define v            vector<ll>
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

v input(ll n){v a(n);for (auto &x : a) cin >> x;return a;}



void solve(){ 
    int t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       v a=input(n);
       st ans="01032025";

       mll m, m1;
       for(char c:ans) m[c]++;
       ll cnt=0;
       loop(n){
        char c='0'+a[i];
        if(m[c]>m1[c]){
            cnt++;
        }
        m1[c]++;
        if(cnt==ans.size()){
            cout(i+1);
            break;
        }
    }
            if(cnt<ans.size()){
                cout(0);
                
        }
       

    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}


