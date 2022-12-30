#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int i=0;
	string s;
	cin>>s;
	i=s.size();
	if(i==1||i==2||i==3) cout<<i;
	else cout<<"More than 3 digits";
	return 0;
}
