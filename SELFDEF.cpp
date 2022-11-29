#include <iostream>
using namespace std;

int main() {
	int t,n,a[100],i,c;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>n;
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]>=10&&a[i]<=60) c++;
	        else continue;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
