#include <iostream>
using namespace std;

int main() {
	int t,n,c,a;
	cin>>t;
	while(t--){
	    cin>>n;
	    c=0;
	    while(n!=0){
	        a=n%10;
	        n=n/10;
	        if(a==4) c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
