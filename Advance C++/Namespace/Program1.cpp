#include <iostream>

//namespace goes into the global areas
//necessary function 
/*
    string.find("hello") =  always return the position of the first occurance, no matter how many hello are there
    string.find("Hello") = always returns the last occurance of the string
    string.find_first_of("")  = returns any occurance of the string

*/

namespace firstNums {
    int num1 = 10;
    int num2 = 12;
}

namespace secondNums{
    int num1 = 1;
    int num2 = 2;
}

int main(){

    std::cout << "num1 in firstNums : " << firstNums::num1 << std::endl;
    std::cout << "num1 in secondNums : " << secondNums::num1 << std::endl;
    std::cout << "num2 in firstNums : " << firstNums::num2 << std::endl;
    std::cout << "num2 in firstNums : " << secondNums::num2 << std::endl;

    // You have to be inside the block other wise there will be conflicts

    {
        using namespace firstNums;
        std::cout << "num1 in firstNums : " << num1 << std::endl;
        std::cout << "num2 in firstNums : " << num2 << std::endl;
    }
    {
        using namespace secondNums;
        std::cout << "num1 in secondNums : " << num1 << std::endl;
        std::cout << "num2 in secondNums : " << num2 << std::endl;
    }
    return 0;
}