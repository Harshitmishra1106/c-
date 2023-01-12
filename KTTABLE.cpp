#include <iostream>
using namespace std;

int main() {
	int t,n,i,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++) cin>>b[i];
	    k=0;
	    for(i=0;i<n;i++){
	        if(i==0){
	            if(b[i]<=a[i]) k++;
	            else continue;
	        }
	        else{
	            if((a[i]-a[i-1])>=b[i]) k++;
	            else continue;
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}
