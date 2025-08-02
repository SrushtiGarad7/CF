#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    bool f=false;
	    for(int i=0;i<n&&!f;i++){
	        for(int j=0;j<n&&!f;j++){
	            int s=a[i]+a[j];
	            bool b=false;
	            for(int k=0;k<n;k++){
	                
	            if(a[k]==s){
	                b=true;
	                break;
	            }
	            }
	            if(!b){
	                cout<<a[i]<<" "<<a[j]<<endl;
	                f=true;
	            }
	        }
	    }
	    if(!f){
	        cout<<-1<<endl;
	    }
	}
	return 0;

}