#include <iostream>

int main(){
    // const keyword specifies the variable value can not be changed
    // ensures variables are only read only 
    const double PI = 3.14159;
    PI = 2.187;
    double radius = 10;
    double circumference = 2 * PI * radius;
    
    std::cout << circumference << " cm";

    return 0;
}