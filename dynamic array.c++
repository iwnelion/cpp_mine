#include <iostream>
using namespace std;
//dynamic array

int main(){
    int size;
    cout<<"size: ";
    cin>>size;
    int *arr = new int[size];   //NEW allocates memory
    
    for(int i=0;i<size;i++){
        cout<<"array["<<i<<"] = ";
        cin>>*(arr+i);          //arr[i]
    }
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";    //arr[i]
    }
    delete[]arr;                //DELETE deallocates memory
    arr=NULL;                      //to make sure^
return 0;
}
