#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t,n,i,j;
	cin>>t;
	while(t--){
	    cin>>n;
	    int s[n],a[n],k=0;
	    char binary[n];
	    for(i=0;i<n;i++) cin>>s[i];
	    cin>>binary;
	    for(i=0;i<n;i++){
	        if(binary[i]=='0') {
	        a[k]=s[i];
	        k++;
	        }
	    }
	    j=a[0];
	    for(i=0;i<k;i++){
	        if(j>a[i]) j=a[i];
	    }
	    cout<<j<<endl;
	}
	return 0;
}
