#include <iostream>

int main(){
    // const keyword specifies the variable value can not be changed
    // ensures variables are only read only 
    double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;
    
    std::cout << circumference << " cm";

    return 0;
}