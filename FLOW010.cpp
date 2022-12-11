#include <iostream>
using namespace std;

int main() {
	int t;
	char id;
	cin>>t;
	while(t--){
	    cin>>id;
	    if(id=='b'||id=='B') cout<<"BattleShip\n";
	    else if(id=='c'||id=='C') cout<<"Cruiser\n";
	    else if(id=='d'||id=='D') cout<<"Destroyer\n";
	    else if(id=='f'||id=='F') cout<<"Frigate\n";
	}
	return 0;
}
