#include <iostream>
#include <stack>
using namespace std;

int main(){
stack<string> drivers;
//you can't add elements at the time of declaration!

//add
drivers.push("max");
drivers.push("lando");
drivers.push("charles");
drivers.push("oscar");
drivers.push("carlos");

//access
//you can't access stack index number
//but you can access only the top element
cout<<drivers.top()<<endl;      //carlos

//change the top element
drivers.top()="CARLOS";         //CARLOS
cout<<drivers.top()<<endl;

//remove
drivers.pop();
cout<<drivers.top()<<endl;      //oscar

//size
cout<<drivers.size()<<endl;     //4

//check if empty
cout<<drivers.empty()<<endl;    //0, bc it's not empty

return 0;
}
