//Automatic type conversions
int main()
{
    int i = 42;
    if (i) //condition will evaluate as true after converting 42 to true(1)
        i = 0; 
    return 0;
}