int main()
{
    bool b = 42; // b is true
    int i = b; // i has a value of 1
    i = 3.14; // i has a value of 3
    double pi = i; // pi has a value of 3.0
    unsigned char c = -1; // assuming 8-bit chars, c has a value of 255
    signed char c2 = 256; // assuming 8-bit chars, the value of c2 is undefined
    return 0;
}
/*When a non-bool arithmetic type is assigned to a bool object, the result is false if the value is 0, but otherwise true. 
 *When we assign a bool to one of the other arithmetic types, the resulting value is 1 if the bool is true, and 0 if the bool is false. 
 *When we assign a floating-ooint value to an object of integral type, the value is truncated. 
    *The value that is stored is the part before the decimal point. (It is not rounded).
 *When we assign an integral value to an object of floating-point type, the fractional part is zero. Precision may be lost if the integer has more bits
    *than the floating-point object can accommodate. 
 *If we assign an out-of-range value to an object of unsigned type, the result is the remainder of the value modulo the number of values the target type can hold. 
    *E.g. An 8-bit unsigned char can hold values from 0 through 255, inclusive. 
    *If we assign a value outside this range the compiler assigns the remainder of that value modulo 256. 
    *Therefore, assigning -1 to an 8-bit unsigned char gives that object the value 255. 
        *-1 modulo 256 is 255. 
 *If we assign an out-of-range value to an object of signed type, the result is undefined. 
    *The program might appear to work, it might crash, or it might produce garbage values. 
*/