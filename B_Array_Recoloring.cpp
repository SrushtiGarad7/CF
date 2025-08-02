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
//*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
      ll n,k;
      cin>>n>>k;
      vll a(n);
      loop(n) cin>>a[i];

      if(k==1){
        // ll maxl=INT_MIN;
        // loop(n-1){
        //     maxl= max(maxl,a[i]);
        // }
        // ll maxr=INT_MIN;
        // loop(n){
        //     maxr=max(maxr,a[i]);
        // }
        // cout<<max(a[0]+maxr, a[n-1]+maxl)<<endl;
        ll maxi=a[0]+a[n-1];
        for(int i=1; i<n-1; i++){
            maxi=max(maxi,max(a[0]+a[i],a[i]+a[n-1]));
            
        
        }
        cout<<maxi<<endl;
    }
  else{
      sort(allr(a));
      ll ans=0;
      for(int i=0; i<k+1; i++){
        //ll maxi=0;
        //for(int j=1; j<n; j++){
        //    if(a[j]>a[maxi]) maxi=j;
        ans+=a[i];
        }
        // ans+=a[maxi];
        // swap(a[maxi],a[n])
        // a[maxi]=INT_MIN;
        cout(ans);
        //return;
      
    }
      

     }

   }       

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}


