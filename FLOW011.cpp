#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;++i){
	    
	    float salary=0,basic,hra,da;
	    cin>>basic;
	    if(basic<1500){
	        hra=0.1*basic;
	        da=0.9*basic;
	    }
	    else if(basic>=1500){
	        hra=500;
	        da=0.98*basic;
	    }
	    salary=basic+hra+da;
	   cout << fixed << setprecision(2) << salary << "\n";
	}
	return 0;
}
