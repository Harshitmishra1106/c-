#include <iostream>
using namespace std;

int main() {
	int t,n,a[100],i,x,s=0,p;
	cin>>t;
	while(t--){
	    s=0;
	    cin>>n>>x;
	    for(i=0;i<n-1;i++) cin>>a[i];
	    for(i=0;i<n-1;i++) s=s+a[i];
	    p=n*x;
	    if(s/(n-1)<x) cout<<p-s<<endl;
	    else cout<<"0\n";
	}
	return 0;
}
