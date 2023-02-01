#include <iostream>
using namespace std;

int main() {
	int t,n,i,opr=0,zero=0,one=0;
	char string[100000];
	cin>>t;
	while(t--){
	    opr=0;
	    zero=0;
	    one=0;
	    cin>>n;
	    for(i=0;i<n;i++){ 
	        cin>>string[i];
	        if(string[i]=='0') zero++;
	        else one++;
	    }
	    if(one==zero) cout<<zero<<endl;
	    else if(zero<one) cout<<zero+1<<endl;
	    else cout<<one<<endl;
	}
	return 0;
}
