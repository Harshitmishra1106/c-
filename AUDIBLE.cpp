#include <iostream>
using namespace std;

int main() {
	int T,x[10000],i;
	cin>>T;
	for(i=0;i<T;i++) cin>>x[i];
	for(i=0;i<T;i++){
	    if(x[i]>67&&x[i]<45000) cout<<"YES\n";
	    else if(x[i]==67||x[i]==45000) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
