#include <iostream>
using namespace std;
//function overload example w int, char & float
void print(int a){
    cout<<a<<endl;
}
void print(char a){
    cout<<a<<endl;
}
void print(float a){
    cout<<a<<endl;
}
int main(){
int i=4;
char c='@';
float f=2.3;

print(i);
print(c);
print(f);

return 0;
}
