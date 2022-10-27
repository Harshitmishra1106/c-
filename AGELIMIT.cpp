#include <iostream>
using namespace std;

int main() {
	int T,x[1000],y[1000],a[1000],i;
	cin>>T;
	for(i=0;i<T;i++) cin>>x[i]>>y[i]>>a[i];
	for(i=0;i<T;i++){
	    if(a[i]>=x[i]&&a[i]<y[i]) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
