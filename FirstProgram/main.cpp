#include <iostream>

int main() {
    int my_favorite_number;
    int favorite_number;
    
    my_favorite_number = 2;
    
    std::cout << "Enter your favorite (1 - 100):" <<  std::endl;
    
    std::cin >> favorite_number;
    
    if(favorite_number == my_favorite_number){
    std::cout << "Amazing, "  << my_favorite_number << " is my favorite number too!" << std::endl;
    }
    else{
        std::cout << "No really, my favorite number is " << my_favorite_number <<  "."<< std::endl;
    }
    
    return 0;
}