// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

/*
 * - calculate the average in an array of five integers
 * - just add the values and divide by 5
 * - store the result in  a float variable
 * - print the average on screen
 * - haven't technically learned loops yet 
 * */

#include <iostream>

int main(){
    const int length = 5;
    int nums[length] = {1,23,32,24,337};
    float result {
        (float)(nums[0] + nums[1] + nums[2] + nums[3] + nums[4]) / length
    }; 

    // Write your code here
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
