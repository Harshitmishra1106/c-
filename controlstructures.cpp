#include<iostream>
//#include<iomanip>
using namespace std;
int main()
{
    //there are three types of control structures,i.e:
    //1. sequence structure
    //2. selection structure
    //3. loop structure
    int age;
    cout<<"learn control structures\ntell your age\n";
    cin>>age;
    if(age<18){
        cout<<"you are a kid";
    }
    else if(age==18){
        cout<<"you will grow adult at above 18";
    }
    else{
        cout<<"you are an adult";
    }
    return 0;
}
