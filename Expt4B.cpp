//PRIYANSHA GOUR
//24070123079
//ENTC-A
//EXPERIMENT-4
#include <iostream>
#include <set>
using namespace std;

int main() {
    int a=300, reset, set, bit_to_set, bit_to_reset;
    cout<<"Enter the bit position to be set: ";
    cin>>bit_to_set;
    set=a|(1<<bit_to_set);
    cout<<"Enter the bit position to be reset: ";
    cin>>bit_to_reset;
    reset= a&(~(1<<bit_to_reset));
    
    cout<<"your number after reset is : "<<set<<endl;
    cout<<"your number after set is: "<<reset<<endl;

    return 0;
}
