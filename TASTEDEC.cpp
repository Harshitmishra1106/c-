#include <iostream>
using namespace std;

int main() {
	int t,X,Y;
	cin>>t;
	while(t--){
	cin>>X>>Y;
	if(2*X>5*Y)  cout<<"Chocolate\n";
	else if(2*X<5*Y) cout<<"Candy\n";
	else cout<<"Either\n";}
	return 0;
}
