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
        ll n,k;
        cin>>n>>k;
        vi a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        mll cnt;
        for(int i=0; i<n; i++){
            cnt[a[i]]++;
        }
        vi ans;
        for(auto& x: cnt){
            ans.pb(x.s);
        }

        sort(ans.begin(), ans.end());

        int cnt1=ans.size();
        for(int i=0; i<ans.size(); i++){
            int ans1=ans[i];
            if(k>=ans1){
            k-=ans1;
            cnt1--;
            }
            else 
            break;

        

        }
        cout<<max(1,cnt1)<<endl;
    }
     
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

