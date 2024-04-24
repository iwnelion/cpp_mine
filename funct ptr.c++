#include <iostream>
using namespace std;
//function pointer

int getNum(){
    return 5;
}

int main(){
    int(*funcPtr)()=getNum;        //funct ptr
    cout<<funcPtr();               //calls the funct
    
return 0;
}
