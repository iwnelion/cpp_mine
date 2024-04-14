#include <iostream>
using namespace std;

void printArr(char* ptr);

int main(){
    char arr[5]={'h','e','l','l','o'};

    printArr(arr);
    *(arr+1)='A';    //arr[1]
    printArr(arr);

    return 0;
}

void printArr(char* ptr){
    int i;
    for(i=0;*(ptr+i)!='\0';i++){
        cout<<*(ptr+i);
    }
    cout<<endl;
}
//hello
//hAllo
