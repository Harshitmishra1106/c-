#include <iostream>
using namespace std;

int main() {
	char P1,P2;
	cin>>P1>>P2;
	if(P1=='R'&& (P2=='B'||P2=='G'||P2=='R')) cout<<"R\n";
	else if((P1=='B'||P1=='G'||P1=='R') && P2=='R') cout<<"R\n";
	else if((P1=='B'&&P2=='G')||(P2=='B'&&P1=='G')||(P1=='B'&&P2=='B')) cout<<"B\n";
	else if(P1=='G'&&P2=='G') cout<<"G\n";
	return 0;
}
