#include <iostream>
using namespace std;

int main() {
	int t,a[3],b[3],i,j,p1,p2;
	cin>>t;
	while(t--){
	    p1=0;
	    p2=0;
	    for(i=0;i<3;i++) cin>>a[i];
	    for(i=0;i<3;i++) cin>>b[i];
	    for(i=0;i<3;i++){
	        if(a[i]>b[i]) p1++;
	        else if(a[i]<b[i]) p2++;
	    }
	    
	    if(p1<p2) cout<<"B\n";
	    else cout<<"A\n";
	}
	return 0;
}
