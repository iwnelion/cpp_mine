#include <iostream>
#include <string>
using namespace std;
int main(){
    string food="pizza";
    string *ptr=&food;
    cout<<ptr<<endl;
    cout<<*ptr;     //dereference operator: prints pizza
    
    return 0;
}
