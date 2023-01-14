#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t,n,j=0,k=0;
	string s;
	cin>>t;
	while(t--){
	    j=0;
	    k=0;
	    cin>>n;
	    while(n--){
	        cin>>s;
	        if(s=="START38") j++;
	        else if(s=="LTIME108") k++;
	    }
	    cout<<j<<" "<<k<<endl;
	}
	return 0;
}
