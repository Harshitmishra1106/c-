#include <iostream>
using namespace std;

int main() {
	int T,i;
	char s[5],t[5];
	cin>>T;
	while(T--){
	    for(i=0;i<5;i++) cin>>s[i];
	    for(i=0;i<5;i++) cin>>t[i];
	    for(i=0;i<5;i++){
	        if(s[i]==t[i]) s[i]='G';
	        else s[i]='B';
	    }
	    for(i=0;i<5;i++) cout<<s[i];
	    cout<<endl;
	}
	return 0;
}
