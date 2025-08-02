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
    int n,m,k;
    cin>>n>>m>>k;
    vi a(m);
    vi b(k);
    
    int s1=0,s2=0;
    for(int i=0; i<m; i++) cin>>a[i];
    for(int j=0; j<k; j++){
         cin>>b[j];
         s2+=b[j];
    }
    for(int i=1; i<=n; i++) s1+=i;
    //for(int j=0; j<k; j++) s2+=b[j];
    
    int cnt=s1;
    if(k!=n && k+1!=n){
        for(int j=0; j<m; j++){
            cout<<"0";
        }
    }
    else if(k==n && s1==s2){
        for(int j=0; j<m; j++){
            cout<<"1";
        }
    }
    else{
        for(int j=0; j<m; j++){
            cnt-=a[j];
            if(cnt==s2 && k+1==n) cout<<"1";
            else cout<<"0";
            cnt=s1;
        }  
    }
cout<<endl;

}
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
