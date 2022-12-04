#include <iostream>
using namespace std;

int main() {
	int t,n,s[100],d[100],i,c;
	cin>>t;
	while(t--){
	    cin>>n;c=0;
	    for(i=0;i<n;i++) cin>>s[i];
	    for(i=0;i<n;i++) cin>>d[i];
	    for(i=0;i<n;i++){
	        if(s[i]==d[i]) c++;
	        else continue;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
