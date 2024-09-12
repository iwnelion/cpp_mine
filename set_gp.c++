#include <iostream>
#include <set>
using namespace std;

int main(){
set<string, greater<string>> gp={"Azerbaijan", "Singapore", "United States", "Mexico", "Brazil"};
//<, greater<string> is added so the elements are displayed in a desceding order
for (string gp_name : gp){
    cout<<gp_name<<endl;
}
cout<<endl;

//add
gp.insert("las vegas");
for (string gp_name : gp){
    cout<<gp_name<<endl;
}
cout<<endl;

//remove
gp.erase("las vegas");
for (string gp_name : gp){
    cout<<gp_name<<endl;
}
cout<<endl;

//remove all elements
    // gp.clear();
    // for (string gp_name : gp){
    //     cout<<gp_name<<endl;
    // }
    // cout<<endl;

//size
cout<<gp.size()<<endl<<endl;    //5

//check if empty
cout<<gp.empty()<<endl<<endl;   //0, bc it's not empty

//loop through
for (string gp_name : gp){
    cout<<gp_name<<endl;
}

return 0;
}
