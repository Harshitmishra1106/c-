#include <iostream>
using namespace std;

int main() {
	int t,l,r,i,c=0;
	cin>>t;
	while(t--){
	    cin>>l>>r;
	    c=0;
	    for(i=l;i<=r;i++){
	        if(i%10==2||i%10==3||i%10==9) c++;
	        else continue;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
