#include <iostream>

using namespace std;

int main() {
	int t,n,i,c=0,y=0;
	char a[1000];
	cin>>t;
	while(t--){
	    c=0;
	    y=0;
	    cin>>n;
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n;i++){
	        if(a[i]=='I'){
	            cout<<"INDIAN\n";
	            break;
	        }
	        else if(a[i]=='N') c++;
	        else if(a[i]=='Y') y++;
	    }
	    if(c==n) cout<<"NOT SURE\n";
	    else if((c+y)==n) cout<<"NOT INDIAN\n";
	}
	return 0;
}
