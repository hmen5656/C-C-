#include <iostream>
#include <stdbool.h>
#include <utils.hpp>
using namespace template_project;
int main(int argc, char *argv[])
{
    Point *origin = new Point(6,6,7);
    Point *origin2 = new Point();
    Point origin3 = Point(3,5,7) ;
    Point origin4(origin3);

    origin->print_datas();
    origin2->print_datas();
    origin3.print_datas();
    origin4.print_datas();
    std::cout<<origin;
    std::cout<<origin2;
    std::cout<<origin3;
    std::cout<<origin4;
    std::cout<<"Is object at origin : "<<origin->atOrigin()<<std::endl; 
    std::cout<<"Is object at origin2 : "<<origin2->atOrigin()<<std::endl; 
    std::cout<<"Is object at origin3 : "<<origin3.atOrigin()<<std::endl; 
    std::cout<<"Is object at origin4 : "<<origin4.atOrigin()<<std::endl; 
    delete origin;
    delete origin2;
    return 0;
}
