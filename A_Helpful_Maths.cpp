#include<bits/stdc++.h>
using namespace std;

int main(){
   string st;
   cin>>st;

   string s;
   for(char c:st){
    if(c!='+'){
        s+=c;
    }
   }

   sort(s.begin(),s.end());
   for(int i=0; i<s.size(); i++){
    cout<<s[i];
    if(i!=s.size()-1)
    cout<<"+";
   }
   cout<<endl;

}