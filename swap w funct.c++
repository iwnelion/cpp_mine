#include <iostream>
using namespace std;

void swap(int *n1, int *n2){
  int temp=*n1;
  *n1=*n2;
  *n2=temp;
}
int main(){
int x=4, y=10;
cout<<"before swap: "<<endl;
cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
swap(&x,&y);
cout<<"after swap: "<<endl;
cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
return 0;
}
