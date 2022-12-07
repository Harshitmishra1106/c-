#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    if(a==b) cout<<"Yes\n";
	    else{
	       if(a>b){
	           if((a-b)%2==0) cout<<"Yes\n";
	           else cout<<"No\n";
	       }
	       else{
	           if((b-a)%2==0) cout<<"Yes\n";
	           else cout<<"No\n";
	       }
	    }
	}
	return 0;
}
