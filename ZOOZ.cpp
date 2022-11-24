#include <iostream>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(n%2==0){
	        for(i=1;i<=n;i++){
	            if(i==1||i==n) cout<<"1";
	            else cout<<"0";
	        }
	    }
	    else{
	        for(i=1;i<=n;i++){
	            if(i==(n+1)/2) cout<<"1";
	            else cout<<"0";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
