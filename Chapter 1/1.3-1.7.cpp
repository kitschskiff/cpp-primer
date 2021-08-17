// The following is an incorrect attempt at "commenting out" a block of code that includes a paired comment. 
// Update: integer to float, to accomodate decimals. 
/* #include <iostream>

 * int main(){
 *   /* // Cannot nest paired comments
 *    * This function outputs the quotient of the two values given. 
 *    * Then, it returns 0, since main requires a return value of type integer, and 0 is the status code for "success". 
 *    */ // This is where the issue arises, as this ends the initial paired comment prior to the inclusion of the iostream "library?". 
 *   float x = 0, y = 0; // The two variables to which I will be assigning client input. 
 *   // When declaring variables of type, you must instantatiate them with a value of the specified type. 
 *   std::cin >> x >> y; // assign new values
 *   std::cout << "The quotient of " << x << " by " << y << " is "
 *           << x/y << std::endl; // print quotient to console
 *   return 0; // end program. Learn to garbage collect? Or is the memory flushed after program termination? 
}*/