#include <iostream>
using namespace std;

int main() {
	int t,n,i,c;
	cin>>t;
	while(t--){
	    cin>>n;c=0;
	    for(i=1;i<=n;i++){
	        if(n%i==0) c++;
	        else continue;
	    }
	    if(c==2) cout<<"yes\n";
	    else cout<<"no\n";
	}
	return 0;
}
