#include <iostream>
using namespace std;

int main()
{
    int nums[5]={10,20,30,40,50};
    for(int i : nums){
        cout<<i<<endl;
    }
    //runs: 10 20 30 40 50
    return 0;
}
