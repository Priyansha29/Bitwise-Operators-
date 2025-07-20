//PRIYANSHA GOUR
//24070123079
//ENTC-A
//EXPERIMENT-4
#include <iostream>
#include <set>
using namespace std;
int main() {
    int a=10;// binary value = 1010
    int b=30;// binary value = 11110
    
    int bitwise_and=a&b;
    int bitwise_or=a|b;
    int bitwise_xor=a^b;
    int bitwise_not=~a;
    int left_shift=a<<2;
    int right_shift=a>>1;
    
    cout<<"AND: "<<bitwise_and<<endl;
    cout<<"OR: "<<bitwise_or<<endl;
    cout<<"XOR: "<<bitwise_xor<<endl;
    cout<<"NOT a: "<<bitwise_not<<endl;
    cout<<"Left Shift: "<<left_shift<<endl;
    cout<<"Right Shift: "<<right_shift<<endl;
    
 
    
    

    return 0;
}
