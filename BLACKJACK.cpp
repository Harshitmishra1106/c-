#include <iostream>
using namespace std;

int main() {
	int t,a,b,s;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    s=21-(a+b);
	    if(s<10&&s>1) cout<<s<<endl;
	    else if(s==1||s==10) cout<<s<<endl;
	    else cout<<"-1\n";
	}
	return 0;
}
