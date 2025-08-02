//Author: Srushti Garad
//SY CSE
//Walchand College Of Engineering, Sangli

#include <bits/stdc++.h>
using namespace std;

//---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//
#define Fighter        main 
#define Srushti        ios_base::sync_with_stdio(false);
#define Garad          cin.tie(NULL);
#define ll             long long
#define pi             pair<int, int> 
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
//---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*---*//

void solve(){ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi a(n);
        umii diff;
        int c=0;
        
        for(int i=0; i<n; i++){
            cin>>a[i];
            int x= a[i]-i;
            c+=diff[x];
            diff[x]++;
        }
        cout<<c<<endl;
    }
 }

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
