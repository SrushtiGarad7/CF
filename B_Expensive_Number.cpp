#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int n=s.size();
        long long c=0;
        long long c1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') {
                c++;
            } else if((c+1)>c1) {
                c1=c+1;
            }
        }
        cout<<(n-c1)<<endl;
    }
    return 0;
}
