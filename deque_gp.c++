#include <iostream>
#include <deque>
using namespace std;

int main(){
deque<string> gp={"Azerbaijan", "Singapore", "United States", "Mexico", "Brazil"};

//access
cout<<gp[0]<<endl;      //Azerbaijan
cout<<gp.front()<<endl; //Azerbaijan
cout<<gp.back()<<endl;  //Brazil
cout<<gp.at(2)<<endl;   //United States

//change
gp[4]="las vegas";
cout<<gp[4]<<endl;      //las vegas
gp.at(4)="Brazil";
cout<<gp.at(4)<<endl;      //Brazil

//add
gp.push_front("italy");
cout<<gp.front()<<endl;     //italy
gp.push_back("las vegas");
cout<<gp.back()<<endl;      //las vegas

//remove
gp.pop_front();
cout<<gp.front()<<endl;     //Azerbaijan
gp.pop_back();
cout<<gp.back()<<endl;      //Brazil

//size
cout<<gp.size()<<endl;     //5

//check if empty
cout<<gp.empty()<<endl;     //0

//loop through
//for loop & .size()
for(int i=0; i<gp.size(); i++){
    cout<<gp[i]<<endl;
}
//for-each loop
for (string gp_name : gp){
    cout<<gp_name<<endl;
}

return 0;
}
