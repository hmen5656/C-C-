/**
 * @file main.cpp
 * @author Huseyin MEN
 * @brief Function Pointer Array Example
 * @version 0.1
 * @date 2023-03-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

#define MAX_CONFIG_CMDS 8

/**
 * @brief Function Pointer Type Definition
 * 
 */
typedef void (*gsmFunctionPtr_t)(int a);

/**
 * @brief Prints out given integer as well as function name 
 * 
 * @param a 
 */
static void gsmEchoOff(int a)
{
    std::cout<<"gsmEchoOff("<< a<<")"<<std::endl;
};

/**
 * @brief Prints out given integer as well as function name 
 * 
 * @param a 
 */
static void gsmPid(int a)
{
    std::cout<<"gsmPid("<< a<<")"<<std::endl;
};
/**
 * @brief Assignes given funtions pointer to function pointer array
 * 
 * @param gsmConfigurationFunctions 
 * @param func1 
 * @param func2 
 */
void assign_function_pointers(gsmFunctionPtr_t *gsmConfigurationFunctions,void (*func1)(int),void (*func2)(int) )
{
    gsmConfigurationFunctions[0]=func1;
	gsmConfigurationFunctions[1]=func2;  
}
/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char *argv[])
{
    gsmFunctionPtr_t gsmConfigurationFunctions[MAX_CONFIG_CMDS];
    assign_function_pointers(&gsmConfigurationFunctions[0],&gsmEchoOff,&gsmPid);
    gsmConfigurationFunctions[0](5);
    gsmConfigurationFunctions[1](19);
    std::cout << "Hello World" << std::endl;
    return 0;
}