#include <iostream>
using namespace std;
void array(int nums[5]){
    for(int i=0;i<5;i++){
        cout<<nums[i]<<endl;
    }
}
int main(){
    int nums[5]={10,20,30,40,50};
    array(nums);    //prints the numbers
    return 0;
}
