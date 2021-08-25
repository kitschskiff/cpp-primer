#include <iostream>
int main(){
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal){
        int cnt = 1; // store the count for the current value we're processing
        while (std::cin >> val){ // read the remaining numbers
            if (val == currVal) // if the values are the same
                ++cnt;           // add 1 to cnt
            else{ // otherwise, print the count for the previous value
                std::cout << currVal << " occurs " 
                        << cnt << " times" << std::endl;
                currVal = val; // remember the new value
                cnt = 1; // reset the counter
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
                << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}
// Warning: C++ uses = for assignment and == for equality. Both operators can appear inside a condition. 
// It is a common mistake to write = when you mean == inside a condition. 

// Exercise 1.17: What will happen in the program presented in this section if A) the input values are all equal? 
// - I know that the program will output said value " occurs " #input_values " times". 
// 1.18 A)
// - E.g. > "1 1 1 1 1" 
//        "1 occurs 5 times". 

// B) What if there are no duplicated values?
// - Then there will be #input_values prints to the console detailing that each input has occured once. 
// 1.18 B)
// - E.g. > "1 2 3 4 5"
//        "1 occurs 1 times"
//        "2 occurs 1 times"
//        "3 occurs 1 times"
//        "4 occurs 1 times"
//        "5 occurs 1 times"