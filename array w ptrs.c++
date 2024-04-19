#include <iostream>
using namespace std;

int main(){
  int arr[5];
  arr[0]=3;

  int *ptr=arr;
  *(ptr+1)=5;
  *(ptr+2)=7;
  *(ptr+3)=9;

  for(int i=0;i<5;i++){
    cout<<*(ptr+i)<<endl;
    //cout<<arr[i]<<endl;
  }
  
return 0;
}
