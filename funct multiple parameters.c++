#include <iostream>
#include <string>
using namespace std;
void funct(string name, int age){       //multiple parameters
    cout<<name<<" is "<<age<<" years old"<<endl;
}
int main(){
    funct("Jo", 23);
    funct("Plato", 21);
//Jo is 23 years old
//Plato is 21 years old
    return 0;
}
