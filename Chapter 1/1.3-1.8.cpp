#include <iostream>
int main(){
    std::cout << "/*"; // valid, paired comment beginning is in a string literal, not an open space, tab or newline. Therefore, not recognized as a command. 
    std::cout << "*/"; // Also valid, for the same aforementioned reason. 
    std::cout << /* "*/" */; // Due to the beginning of the paired comment, the "*/"" in quotation marks is recognized as its end.  
    // Therefore, everything after this is interpreted as source code. 
    std::cout << /* "*/" /* "/*" */; // Same issue as above. However, this time the beginning of the second paired comment isn't recognized due to the quotation mark
                                    // after the first throwing an error. 
    return 0;
}