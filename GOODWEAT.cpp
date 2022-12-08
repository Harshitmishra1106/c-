#include <iostream>
using namespace std;

int main() {
	int t,a[7],i,b=0,c=0;
	cin>>t;
	while(t--){
	    b=0;
	    c=0;
	for(i=0;i<7;i++) cin>>a[i];
	for(i=0;i<7;i++){
	    if(a[i]==0) b++;
	    else c++;
	}
	if(c>b) cout<<"YES\n";
	else cout<<"NO\n";
	}
	return 0;
}
