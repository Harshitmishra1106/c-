#include <iostream>
using namespace std;

int main() {
	int t,n,s,j,c=0;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>n;
	    while(n--){
	        cin>>s>>j;
	        if((j-s)>5) c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
