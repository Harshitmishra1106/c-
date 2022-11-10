#include <iostream>
using namespace std;

int main() {
	int R,O,C,k;
	cin>>R>>O>>C;
	k=C+36*(20-O);
	if(k>R) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
