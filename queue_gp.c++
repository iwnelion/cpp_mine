#include <iostream>
#include <queue>
using namespace std;

int main(){
//we can't add elements at the time of declaration
queue<string> gp;

//add
gp.push("Azerbaijan");
gp.push("Singapore");
gp.push("United States");
gp.push("Mexico");
gp.push("Brazil");

//access
//we can't use their index numbers
cout<<gp.front()<<endl;     //Azerbaijan
cout<<gp.back()<<endl;      //Brazil

//change front and back elements
gp.front()="italy";
gp.back()="las vegas";
cout<<gp.front()<<endl;     //italy
cout<<gp.back()<<endl;      //las vegas

//remove
gp.pop();
cout<<gp.front()<<endl;     //Singapore

//size
cout<<gp.size()<<endl;      //4

//check if empty
cout<<gp.empty()<<endl;     //0, bc it's not empty

return 0;
}
