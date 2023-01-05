#include <iostream>
using namespace std;

int main() {
	int n,a[5],i,s=0;
	cin>>n;
	while(n--){
	    s=0;
	    for(i=0;i<5;i++){ 
	        cin>>a[i];
	        s=s+a[i];
	}
	if(s==0) cout<<"Beginner\n";
	else if(s==1) cout<<"Junior Developer\n";
	else if(s==2) cout<<"Middle Developer\n";
	else if(s==3) cout<<"Senior Developer\n";
	else if(s==4) cout<<"Hacker\n";
	else if(s==5) cout<<"Jeff Dean\n";
	}
	return 0;
}
