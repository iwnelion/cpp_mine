#include <iostream>
using namespace std;
int main(){
    string food="pizza";
    string * ptr=&food;     //pointer variable w the name "ptr"
    
    cout<<&food<<endl;
    cout<<ptr;
    //both run the memory address of food
    return 0;
}
