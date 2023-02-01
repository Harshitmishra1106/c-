#include <iostream>
using namespace std;

int main() {
	int t,n,i,c;
	char string[100000];
	cin>>t;
	while(t--){
	    c=0;
	    cin>>n;
	    for(i=0;i<n;i++) cin>>string[i];
	    for(i=0;i<n;i++){
	        if(string[i]==string[i+1]) i++;
	        
	        
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
