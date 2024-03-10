#include <iostream>
#include <string>
using namespace std;
void funct(string country="norway"){
    cout<<country<<endl;
}
int main(){
    funct("usa");
    funct();        //default parameter value: runs norway
    return 0;
}
