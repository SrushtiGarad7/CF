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
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
        if(is_sorted(a.begin(),a.end())){ 
        yes;
        continue;
        }
        bool flag = false;
        while(true){
            bool s=false;

        for(int i=1; i<n-1; i++){
            if(a[i-1]<a[i] && a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                s=true;
            }
        }
                if(is_sorted(a.begin(),a.end())){
                    flag=true;
                    break;
                }
                //swap(a[i],a[i+1]);
                if(!s)break;
            }
        if(flag) yes;
        else no;
 }
}

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
