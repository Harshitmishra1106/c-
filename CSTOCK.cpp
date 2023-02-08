#include <iostream>
using namespace std;

int main() {
	int t,c;
	float s,a,b,snew;
	cin>>t;
	while(t--){
	    cin>>s>>a>>b>>c;
	    if(c<0){
	        snew=s-abs(c)*(s/100);
	        if(snew>=a&&snew<=b) cout<<"Yes\n";
	        else cout<<"No\n";
	    }
	    else{
	        snew=s+c*(s/100);
	        if(snew>=a&&snew<=b) cout<<"Yes\n";
	        else cout<<"No\n";
	    }
	}
	return 0;
}
