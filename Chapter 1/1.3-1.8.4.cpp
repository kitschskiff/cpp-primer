// invalid code
    // #include <iostream>
    // int main{
    //     std::cout << /* "*/" /* "/*" */;
    //     return 0;
    // }
// corrected code
#include <iostream>
int main(){
    std::cout << /* "*/ /* "/*" */ "hi";
    return 0;
}