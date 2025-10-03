#include <iostream>
using namespace std;

int main()
{
    int nums[5]={10,20,30,40,50};
    cout<<sizeof(nums);
    //runs:20
    //it's the size of the array in bytes
    return 0;
}
