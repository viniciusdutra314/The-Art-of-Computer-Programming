#include <iostream>

//efficient memory management
struct Date {
    int year;
    unsigned int day : 5;
    unsigned int month : 4;
};

int main() {
    Date today = {2024, 16, 4};
    std::cout << "Date: " << today.day << "/" << today.month << "/" << today.year << std::endl;
    return 0;
}
