#include <iostream>
using namespace std;

int main() {
	int t,a1,a2,b1,b2,c1,c2,a,b,c;
	cin>>t;
	while(t--){
	    a=0;
	    b=0;
	    c=0;
	    cin>>a1>>a2>>b1>>b2>>c1>>c2;
	    a=a1+a2;
	    b=b2+b1;
	    c=c1+c2;
	    if(a>b&&a>c) cout<<a<<endl;
	    else if(b>a&&b>c) cout<<b<<endl;
	    else if(c>a&&c>b) cout<<c<<endl;
	    else if(a==b&&a>c) cout<<a<<endl;
	    else if(a==c&&a>b) cout<<a<<endl;
	    else if(c==b&&b>a) cout<<b<<endl;
	    
	    
	}
	return 0;
}
