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
    st st;
    cin>>st;
    int s,p=0;
    int s1=0; int p1=-1;

    int cnt=0;
    for(int cnt=0; cnt<st.size(); cnt++){
        char i=st[cnt];
        if(i=='s'){
            s++;
            s1=cnt;
        } 
        if(i=='p'){
            p++;
            if(p1==-1){
                p1=cnt;
            }
        }
            //cnt++;
        }
        if(s==0 || p==0) yes;
        else if (s1==0||p1==n-1) yes;
        else no;
    }    
 }

int Fighter(){
    Srushti Garad;
    solve();
    return 0;
}
