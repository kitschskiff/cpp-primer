/* Exercise 1.15: Write programs that contain the common errors discussed in the box on page 16. 
 * Familiarize yourself with the messages the compiler generates. 
 */
// syntax errors
// #include <iostream>
// int main(){
//     // error: used colon, not a semicolon, after endl
// //    std::cout << "Hello World!" << std::endl:
//     // error: missing quotation marks around string literal
// // std::cout << Hey! Nice to meet you! << std::endl;
//     // error: second output operator is missing
// // std::cout << "Here is your ice-cream sandwhich, sir!" std::endl; 
//     // error: missing ; on return statement
// //  return 0
// }
// Type errors
// E.g. Passing a string literal into a function that expects an int argument. 
// Declaration errors
// E.g. The two most common declaration errors are forgetting to use std:: for a name from the library and misspelling the name of an identifier:
// #include <iostream>
// int main(){
//     int v1 = 0, v2 = 0;
//     std::cin >> v >> v2; // error uses 'v' not 'v1'
//     // error: cout not defined; should be std::cout
//     cout << v1 + v2 << std::endl;
//     return 0;
// }
// It is a good idea to recompile the code after each fix - or after making at most a small number of obvious fixes. 
// This cycle is known as edit-compile-debug. 
