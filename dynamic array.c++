#include <iostream>
using namespace std;
//dynamic array

int main(){
    int size;
    cout<<"size: ";
    cin>>size;
    int *arr = new int[size];
    
    for(int i=0;i<size;i++){
        cout<<"array["<<i<<"] = ";
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
