#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,n,a[1000],b[1000],i,c,p;
	cin>>t;
	while(t--){
	    c=0;
	    p=0;
	    cin>>n;
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++) cin>>b[i];
	    for(i=0;i<n;i++){
	        if(a[i]!=0&&b[i]!=0) c++;
	        else{
	            p=max(p,c);
	            c=0;
	        }
	    }
	    p=max(p,c);
	    cout<<p<<endl;
	}
	return 0;
}
