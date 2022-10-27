#include <iostream>
using namespace std;

int main() {
	int T,a[1000],b[1000],i;
	cin>>T;
	for(i=0;i<T;i++) cin>>a[i]>>b[i];
	for(i=0;i<T;i++){
	    if(a[i]<=b[i]) cout<<a[i]<<endl;
	    else cout<<b[i]<<endl;
	}
	return 0;
}
