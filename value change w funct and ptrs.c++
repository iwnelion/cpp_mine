#include <iostream>
using namespace std;

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
