#include <iostream>
#include <map>
using namespace std;

int main(){
map<string, int> drivers={{"max", 303}, {"lando", 241}, {"charles", 217}};

//access
//you can't access index numbers
//use the key in []
cout<<"max has "<<drivers["max"]<<" points"<<endl;      //303
//.at()
cout<<"lando has "<<drivers.at("lando")<<" points"<<endl;   //241

//change
drivers["lando"]=304;
cout<<"lando's points now: "<<drivers.at("lando")<<endl;    //304
drivers.at("lando")=241;
cout<<"lando's points now: "<<drivers.at("lando")<<endl;    //241

//add
drivers["oscar"]=197;
drivers.insert({"carlos", 184});
cout<<"oscar: "<<drivers["oscar"]<<endl;        //197
cout<<"carlos: "<<drivers.at("carlos")<<endl;   //184

//remove
drivers.erase("carlos");
//rm all elements
    // drivers.clear();

//size
cout<<drivers.size()<<endl;     //4

//check if empty
cout<<drivers.empty()<<endl;    //0, bc it's not empty

//check if element exists
cout<<drivers.count("charles")<<endl;   //1, he exists
cout<<drivers.count("lewis")<<endl;     //0, he doesn't exist

//loop through
for(auto driver : drivers){
    cout<<driver.first<<"'s points: "<<driver.second<<endl;
}
//to change the order:
//at the declaration: map<string, int, greater<string>> drivers;

return 0;
}
