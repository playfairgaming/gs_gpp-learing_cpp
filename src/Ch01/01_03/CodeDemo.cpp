// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

/*
 * - Print message requesting user's name
 * - Print a message using that name
 * */

#include <iostream>
#include <string>

int main(){

    /* print message requesting user's name */
    std::string msg { "Please enter your name: " };
    std::cout << msg;

    /* get user's name */
    std::string name;                        // declare string variable, name
    std::cin >> name;                        // assign user input to name

    /* print message using user's name */
    std::string greeting { "It's nice to meet you " + name + ".\n" };
    std::cout << greeting;

    // eduardo making space in the output
    std::cout << std::endl << std::endl;

    return (0);
}
