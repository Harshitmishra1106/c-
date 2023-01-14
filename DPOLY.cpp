#include <iostream>
using namespace std;

int main() {
	int t,n,i,degree=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    degree=0;
	    int coeff[n];
	    for(i=0;i<n;i++) cin>>coeff[i];
	    for(i=0;i<n;i++){
	        if(coeff[i]!=0) degree=i;
	        else continue;
	    }
	    cout<<degree<<endl;
	}
	return 0;
}
