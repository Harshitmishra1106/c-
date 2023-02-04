#include <iostream>
using namespace std;

int main() {
	int t,a[3],i,j,c;
	cin>>t;
	while(t--){
	for(i=0;i<3;i++) cin>>a[i];
	for(i=0;i<3;i++){
	    c=0;
	    for(j=0;j<3;j++){
	        if(a[i]==a[j]) c++;
	        else continue;
	    }
	    if(c>1){
	        cout<<"NO\n";
	        break;
	    }
	    else continue;
	}
	if(c<=1) cout<<"YES\n";
	}
	return 0;
}
