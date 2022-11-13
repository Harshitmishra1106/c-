#include <iostream>
using namespace std;

int main() {
	int T,dsa,toc,dm,dsa1,toc1,dm1,t,t1;
	cin>>T;
	while(T--){
	    t=0;t1=0;
	    cin>>dsa>>toc>>dm;
	    t=t+dsa+toc+dm;
	    cin>>dsa1>>toc1>>dm1;
	    t1=t1+dsa1+toc1+dm1;
	    if(t>t1) cout<<"DRAGON\n";
	    else if(t<t1) cout<<"SLOTH\n";
	    else{
	        if(dsa>dsa1) cout<<"DRAGON\n";
	        else if(dsa<dsa1) cout<<"SLOTH\n";
	        else{
	            if(toc>toc1) cout<<"DRAGON\n";
	            else if(toc<toc1) cout<<"SLOTH\n";
	            else{
	                if(dm>dm1) cout<<"DRAGON\n";
	                else if(dm<dm1) cout<<"SLOTH\n";
	                else cout<<"TIE\n";
	            }
	        }
	    }
	}
	return 0;
}
