#include <iostream>
using namespace std;

int main() {
	int t,n,k,a[100000],i,c=0;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>n>>k;
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]>k) c++;
	        else continue;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
