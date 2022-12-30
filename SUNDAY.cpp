#include <iostream>
using namespace std;

int main() {
	int t,n,a[30],i,s=0;
	cin>>t;
	while(t--){
	    s=0;
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]%7==6||a[i]%7==0) s=s;
	        else s++;
	    }
	    cout<<s+8<<endl;
	}
	return 0;
}
