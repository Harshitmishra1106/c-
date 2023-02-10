#include <iostream>
using namespace std;

int main() {
	int t,n,k,a[100],i,c=0;
	cin>>t;
	while(t--){
	    c=0;
	    cin>>n>>k;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++){
	        if(a[i]>=k) a[i+1]=(a[i+1]+a[i]-k);
	        else if(a[i]<k){ 
	            cout<<"NO "<<i+1<<endl;
	            c++;
	            break;}
	        else if(a[i]>=k&&i==n-1) cout<<"YES"<<endl;
	    }
	    if(c==0) cout<<"YES\n";
	}
	return 0;
}
