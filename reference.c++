#include <iostream>
using namespace std;
int main(){
    string food="pizza";
    string &meal=food;
    
    cout<<food<<endl;   //pizza
    cout<<meal;         //pizza
    
    return 0;
}
