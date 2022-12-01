#include <iostream>
using namespace std;

int main() {
	int t,n,k,a[100],i,c;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>n>>k;
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++){
	        if((a[i]+k)%7==0) c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
