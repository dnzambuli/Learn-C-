#include <iostream>

int main(){
    std::string phrase = "The quick brown fox jumped over the zebra grazing";

    // sellecting by index
    std::cout << phrase[0] << "\n";
    // accessing q
    std::cout << phrase[4] << "\n";
    // modify q to Q
    phrase[4] = 'Q';
    std::cout << phrase << "\n";

    /*
    Using the find method 
    string.find("string to be found", xy)
    xy - index to start from
    */
   std::cout << phrase.find("brown", 4);

   /*
   substr(start index, length to take after)
   take the characters that are a subset of the original string
   */
   std::cout << "\n"<<phrase.substr(4, 5) << "\n";
//    stroing substring
    std::string phrasesub;
    phrasesub = phrase.substr(4, 5);
    std::cout << phrasesub << "\n";

    return 0;
}