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
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      int x=a+b;
      int y=d-c;
      int cnt=0;
      int cnt2=0;
    
        if(a+b==x){
            cnt++;}
            if(b+x==c){
                cnt++;
            }
            if(x+c==d){
                cnt++;

            
        }else if(a+b==y){
            cnt2++;}
             if(b+y==c){
                cnt2++;
            }
            if(y+c==d){
                cnt2++;

            }
        
      
      cout<<max(cnt,cnt2)<<endl;
    }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}

