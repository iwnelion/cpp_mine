#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<string> drivers={"max", "lando", "charles"};

//looping throught the vector
for (string driver : drivers){
    cout<<driver<<endl;
}
cout<<endl;

//access elements
cout<<drivers[1]<<endl;         //lando
cout<<drivers.front()<<endl;    //max
cout<<drivers.back()<<endl;     //charles
cout<<drivers.at(2)<<endl<<endl;      //charles

//change elements
drivers[0]="landooo";
cout<<drivers[0]<<endl;         //landooo

drivers.at(0)="maxx";
cout<<drivers.at(0)<<endl<<endl;      //maxx

//add
drivers.push_back("piastri");
cout<<drivers[3]<<endl<<endl;         //piastri

//remove
drivers.pop_back();
for (string driver : drivers){
    cout<<driver<<endl;
}                                      //piastri isn't there
cout<<endl;

//size
cout<<drivers.size()<<endl<<endl;       //3

//is empty?
cout<<drivers.empty()<<endl<<endl;      //0 bc it's not empty (1 if it was empty)

//loop through
for(int i=0; i<drivers.size(); i++){    //for loop and .size()
    cout<<drivers[i]<<endl;
}
cout<<endl;
for (string driver : drivers){          //for-each loop
    cout<<driver<<endl;
}

return 0;
}
