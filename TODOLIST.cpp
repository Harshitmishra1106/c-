#include <iostream>
using namespace std;

int main() {
	int t,n,d[5000],i,c=0;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>n;
	    for(i=0;i<n;i++) cin>>d[i];
	    for(i=0;i<n;i++){
	        if(d[i]>=1000) c++;
	        else continue;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
