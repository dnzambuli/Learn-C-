#include <iostream>


int main(){
    // string variable 
    std::string characterName = "Dan";
    // whole numbers 
    int characterAge;
    characterAge = 24;

    // creating a simple story
    std::cout << "There was once a man named " << characterName<< std::endl;
    std::cout << "He was " << characterAge << " years old\n";
    std::cout << "He liked coding\n";
    std::cout << "He didn\'t like photos\n";

    return 0;

}