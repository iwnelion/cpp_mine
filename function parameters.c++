#include <iostream>
using namespace std;
void funct(string fname){
    cout<<fname<<endl;
}
int main(){
    funct("Socrates");
    funct("Plato");
    funct("Aristotle");
    return 0;
}
//prints the names
