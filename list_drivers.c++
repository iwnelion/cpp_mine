#include <iostream>
#include <list>
using namespace std;

int main(){
list<string> drivers={"max", "lando", "charles"};
for (string driver : drivers){
    cout<<driver<<endl;
}
cout<<endl;

//access (you can't refer to their iindex numbers!)
cout<<drivers.front()<<endl;    //max
cout<<drivers.back()<<endl;     //charles
cout<<endl;

//change
drivers.front()="Landoo";
drivers.back()="Piastri";
cout<<drivers.front()<<endl;    //Landoo
cout<<drivers.back()<<endl;     //Piastri
cout<<endl;

//add
drivers.push_front("Max");
drivers.push_back("Charles");
cout<<drivers.front()<<endl;    //Max
cout<<drivers.back()<<endl;     //Charles
cout<<endl;

//remove
drivers.pop_front();
drivers.pop_back();
cout<<drivers.front()<<endl;    //Landoo
cout<<drivers.back()<<endl;     //Piastri
cout<<endl;

//size
cout<<drivers.size()<<endl;     //3
cout<<endl;

//check if empty
cout<<drivers.empty()<<endl;    //0
cout<<endl;

//loop through a list
//we can't use a traditional for loop & .size() bc we can't access a list's index numbers
//we can use a for-each loop
for (string driver : drivers){
    cout<<driver<<endl;
}

return 0;
}
