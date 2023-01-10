#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    if(a>=b){
	        b=b+c;
	        if(a>=b){
	            b=b+d;
	            if(a>=b) cout<<"N\n";
	            else cout<<"S\n";
	        }
	        else{
	            a=a+d;
	            if(a>=b) cout<<"N\n";
	            else cout<<"S\n";
	        }
	    }
	    else{
	        a=a+c;
	        if(a>=b){
	            b=b+d;
	            if(a>=b) cout<<"N\n";
	            else cout<<"S\n";
	        }
	        else{
	            a=a+d;
	            if(a>=b) cout<<"N\n";
	            else cout<<"S\n";
	        }
	    }
	}
	return 0;
}
