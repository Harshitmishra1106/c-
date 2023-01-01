#include <iostream>
using namespace std;

int main() {
	int t,a[10],i,second=0,first=0;
	cin>>t;
	while(t--){
	      first=0;
	      second=0;
	    for(i=0;i<10;i++){
	        cin>>a[i];
	        if(i%2==0){
	            if(a[i]==1) first=first+1;
	            else first=first;
	        }
	        else{
	            if(a[i]==1) second=second+1;
	            else second=second;
	        }
	    }
	    if(first==second) cout<<0<<endl;
	    else if(first>second) cout<<1<<endl;
	    else cout<<2<<endl;
	}
	return 0;
}
