#include<iostream>
using namespace std;
//this is a single line comment
/*this
is 
a multiline comment*/
int glo=48;//this is a global variable.
void sum(){
    cout<<glo<<"\n";
}
int main(){
    int a=5,b=11;
    int glo=5;//this is a local variable.
    glo=16;//here local variable is updated.
    char letter='c';
    float pi=3.14;
    bool is_true= true;
    cout<<"this is the global variable ";
    sum();
    cout<<"the sum of "<<a<<"and "<<b<<" is "<<glo<<".\nThe formula for perimeter of "<<letter<<"ircle is 2*"<<pi<<"*r.\ncheck whether it is true or "<<is_true;
    return 0;
}
