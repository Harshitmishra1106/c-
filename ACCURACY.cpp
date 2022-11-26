#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	while(t--){
	    cin>>x;
	    if(x%3==0) cout<<"0\n";
	    else{
	        if(x%3==1) cout<<2<<endl;
	        else if(x%3==2) cout<<1<<endl;
	    }
	}
	return 0;
}
