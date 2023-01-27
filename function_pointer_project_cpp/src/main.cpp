#include <iostream>


typedef void (*gsmFunctionPtr_t)(int a);

static void gsmEchoOff(int a)
{
    std::cout<<"gsmEchoOff()"<< a<<std::endl;
};
static void gsmPid(int a)
{
    std::cout<<"gsmPid()" << a<<std::endl;
};
#define MAX_CONFIG_CMDS 8

void assign_function_pointers(gsmFunctionPtr_t *gsmConfigurationFunctions,void (*func1)(int),void (*func2)(int) )
{
    gsmConfigurationFunctions[0]=gsmEchoOff;
	gsmConfigurationFunctions[1]=gsmPid;  
}
int main(int argc, char *argv[])
{
    gsmFunctionPtr_t gsmConfigurationFunctions[MAX_CONFIG_CMDS];
    assign_function_pointers(&gsmConfigurationFunctions[0],&gsmEchoOff,&gsmPid);
    gsmConfigurationFunctions[0](5);
    gsmConfigurationFunctions[1](19);
    std::cout << "Hello World" << std::endl;
    return 0;
}