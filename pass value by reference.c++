#include <iostream>
using namespace std;
//value change w funct and ptrs
void change(int *x);
int main(){
int x=4;
cout<<x<<endl;
change(&x);
cout<<x;

  return 0;
}
void change(int *x){
  *x=33;
}
