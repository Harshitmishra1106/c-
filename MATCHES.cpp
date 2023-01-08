#include <iostream>
using namespace std;

int main() {
	int t,a,b,sum;
	cin>>t;
	while(t--){
	    cin>>a>>b;
	    sum=a+b;
	    a=0;
	    b=0;
	    int s=0;
	    while(sum!=0){
	        a=sum%10;
	        sum=sum/10;
	        if(a==0||a==6||a==9) s=s+6;
	        else if(a==1) s=s+2;
	        else if(a==2||a==3||a==5) s=s+5;
	        else if(a==4) s=s+4;
	        else if(a==7) s=s+3;
	        else s=s+7;
	    }
	    cout<<s<<endl;
	}
	return 0;
}
