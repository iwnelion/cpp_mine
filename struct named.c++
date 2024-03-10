#include <iostream>
using namespace std;
struct car{         //car is the NAME OF THE STRUCTURE
    string brand;
    string model;
    int year;
};

int main(){
    //create a car structure and store it in myCar1;
    car myCar1;
    myCar1.brand="bmw";
    myCar1.model="x5";
    myCar1.year=1999;
    
    //create another car structure and store it in myCar2;
    car myCar2;
    myCar2.brand="ford";
    myCar2.model="mustang";
    myCar2.year=1969;
    
    //print structure members
    cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
    cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year<<endl;
    
    
    /* runs:
    bmw x5 1999
    ford mustang 1969    */
    return 0;
}
