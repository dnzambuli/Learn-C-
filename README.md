# C++
- High level language 
- Improvement on the C language 

## core concets 
1. Set up
2. Variables 
3. Data types
4. if/ switch statements 
5. Loops 
6. Arrays
7. Objects

### set up 
1. Text editors(I.D.E)
2. Compilers
3. Hello world

create file - build the file - run build 
c++ runs code line by line from the top 

#### syntax
```c++
// this is an inline comment 
/*
this is a multiline
comment
*/
# include <iostream>

int main(){
    std::cout << "Hello World";
    return 0;
}
```
main() - where to find the executable code
return 0 - because main begins with ```int``` it has to return a number 
; - should be used to end each line of code

### lesson 2 
1. simple shape 
2. variables 
3. data types

'<Variables>' are names that store values for easy updating and modification
- containers for values 
```cpp
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
```
- ``std::string`` creates a string data type to store a collection of characters
- ``std::endl`` indicates the end of an output stream
- ``<< variableName<<`` adds the value stored in a variable to the output stream

**NOTE** '<strings>' in cpp are mutable 
- they can change if redefined withing the code 


'<Data type>' types of information that can be stored in cpp

#### character
```cpp
char grade = 'A';
// single utf8 character
``` 
#### string 
```cpp
std::string phrase = 'Giraffe';
// collection of characters
```
#### numbers 
1. whole numbers 
```1, 2, 3, 4, 5, ...```
```cpp
int age = 50;
int neg = -50;
```
2. decimal numbers  
```1.4, 2.5 , 3.3, ...```
- float '<not commonly used>'
- double 
```cpp
double gpa = 3.0;
```

#### boolean 
truth, false value 
```cpp
bool isMale = false;
```
