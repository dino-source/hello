#include <iostream>
#include "helpers.h"

int main()
{
    int x;
    x = 5;
    
    int y = 2;
    
    std::cout << "Result of strange addition: " << nadia::add(x, y) << '\n';
    
    int dogs = 3;
    int cats = 6;
    int animals = nadia::add(dogs, cats);
    
    std::cout << "And another one (dogs + cats): " << animals << "\n\n";

    return 0;
}