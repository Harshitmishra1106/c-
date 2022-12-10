#include <iostream>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x=0,a=0,b=0;
	    cin>>n;
	    while(n>2*x)
	    {
	        if ((n-2*x) % 7 == 0)
	        {
	          a++;
	          break;
	        }
	        x++;
	    }
	    if (n % 2 == 0)
	      b++;
	    if (a!=0 || b!=0)
	      cout<<"YES"<<endl;
	    else
	      cout<<"NO"<<endl;
	}
	return 0;
}