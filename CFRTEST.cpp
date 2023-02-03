#include <iostream>
using namespace std;

int main() {
	int t,n,d[50],i,j,k=0,c=0;
	cin>>t;
	while(t--){
	    k=0;
	    cin>>n;
	    for(i=0;i<n;i++) cin>>d[i];
	    for(i=0;i<n;i++){
        c=0;
        for(j=0;j<n;j++){
            if(d[i]==d[j]&&i<j) c++;
            else if(d[i]==d[j]&&i==j) c=1;
            else if(d[i]==d[j]&&i>j) break;
            else continue;
        }
        if(c!=0) k++;
        else continue;
    }
    cout<<k<<endl;
	}
	return 0;
}
