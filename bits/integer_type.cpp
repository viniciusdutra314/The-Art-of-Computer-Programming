#include <bitset>
#include <iostream>


int main(){
    //z=x+y
    constexpr int integer_size=8;
    std::bitset<integer_size> x{254};
    std::bitset<integer_size> y{0x3};
    std::bitset<integer_size> z;
    bool a=0;

    for (int i=0; i<integer_size;i++){
        z[i]=(x[i]^a)^y[i];
        a=(x[i] and y[i]) or (x[i] and a) or (y[i] and a);
    }
    if (a){
        std::cout<<"Overflow happend";
        return 1;
    }
    std::cout<<x<<"\n";
    std::cout<<y<<"\n";
    std::cout<<z<<"\n";
    return 0;
}