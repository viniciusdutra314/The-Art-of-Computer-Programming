#include <bitset>
#include <iostream>


int main(){
    std::bitset<8> integer{0x0};
    std::cout<<integer<<"\n";
    //we can flip the bits
    integer.flip();
    std::cout<<integer<<"\n";
}