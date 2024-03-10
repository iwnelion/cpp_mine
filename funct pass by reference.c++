#include <iostream>
using namespace std;
void swapNums(int &x, int &y){
    int z=x;
    x=y;
    y=z;
}
int main(){
    int firstnum=10;
    int secondnum=20;
    
    cout<<"before swap: "<<endl;
    cout<<firstnum<<secondnum<<endl;    //1020
    
    swapNums(firstnum,secondnum);
    cout<<"after swap: "<<endl;
    cout<<firstnum<<secondnum;          //2010
    return 0;
}
