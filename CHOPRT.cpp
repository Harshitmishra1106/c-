#include <iostream>
using namespace std;

int main() {
	int t,A,B;
	cin>>t;
	while(t--){
	cin>>A>>B;
	if(A>B) cout<<">\n";
	else if(A<B) cout<<"<\n";
	else cout<<"=\n";
	}
	return 0;
}
