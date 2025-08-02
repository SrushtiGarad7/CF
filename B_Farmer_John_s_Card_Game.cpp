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
      ll n,m;
      cin>>n>>m;
      vector<vll>a(n, vll(m));
      //vector<vll>a(m);
      for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
      }
      for(int i=0; i<n; i++){
        sort(a[i].begin(), a[i].end());
      }
      vll v(n);
      for(int i=0; i<n; i++){
        v[i]=i+1;
      }
      for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i][0]>a[j][0]){
                swap(a[i],a[j]);
                swap(v[i],v[j]);
            }
        }
      }
      for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(a[i][j]!=j*n+i){ cout<<-1<<endl;
            return;
            }
        }
      }
      for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
      }
      
      cout<<endl;
      
      }

int Fighter(){
    Srushti Garad;
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}

