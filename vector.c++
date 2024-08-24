#include <iostream>
#include <vector>
using namespace std;

int main(){
  std::vector<int> nums={2, 4, 3, 6, 1, 9};
  
  //sum of evens
  //product of odds
  int sum=0;
  int product=1;

  for(int i=0; i<nums.size(); i++){
    if(nums[i]%2==0){
      sum+=nums[i];
    }
    else if(nums[i]%2==1){
      product*=nums[i];
    }
  }
  cout<<"Sum of even numbers is "<<sum<<endl<<"Product of odd numbers is "<<product;
}
