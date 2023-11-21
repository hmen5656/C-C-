#include <iostream>
#include <stdbool.h>
#include <utils.hpp>
using namespace template_project;
int main(int argc, char *argv[])
{
    std::cout<<"Object Number : "<<Point::get_object_counter()<<std::endl; 
    Point *origin = new Point();
    std::cout<<"Object Number : "<<Point::get_object_counter()<<std::endl; 
    Point *originx = new Point[10];
    std::cout<<"Object Number : "<<Point::get_object_counter()<<std::endl; 
    Point *origin2 = new Point(6,6,7);
    std::cout<<"Object Number : "<<Point::get_object_counter()<<std::endl; 
    Point origin3 = Point(3,5,7) ;
    std::cout<<"Object Number : "<<Point::get_object_counter()<<std::endl; 
    Point origin4 = (  origin3 + origin2);
    Point origin5 = (  *origin2 + origin3);
    std::cout<<"Object Number : "<<Point::get_object_counter()<<std::endl; 

    origin->print_datas();
    origin2->print_datas();
    origin3.print_datas();
    origin4.print_datas();
    origin5.print_datas();
    std::cout<<"origin  "<<origin;
    std::cout<<"origin2  "<<origin2;
    std::cout<<"origin3  "<<origin3;
    origin3 = origin2;
    *origin2 = origin4;
    std::cout<<"origin2  "<<origin2;
    std::cout<<"origin3  "<<origin3;
    std::cout<<"origin4  "<<origin4;
    std::cout<<"origin5  "<<origin5;
    origin5+=origin2;
    std::cout<<"origin5  "<<origin5;
    origin5+=origin3;
    std::cout<<"origin5  "<<origin5;
    origin5-=origin2;
    std::cout<<"origin5  "<<origin5;
    origin5-=origin3;
    std::cout<<"origin5  "<<origin5;
    std::cout<<"Is object at origin : "<<origin->atOrigin()<<std::endl; 
    std::cout<<"Is object at origin2 : "<<origin2->atOrigin()<<std::endl; 
    std::cout<<"Is object at origin3 : "<<origin3.atOrigin()<<std::endl; 
    std::cout<<"Is object at origin4 : "<<origin4.atOrigin()<<std::endl; 
    originx[1]=origin;
    originx[3]=origin2;
    originx[5]=origin3;
    originx[7]=origin4;
    originx[9]=origin5;

    // Point origin4 = Point(3,5,7) ;
    for(int i =0;i<10;i++)
    {
        std::cout<<"originx["<<i<<"]"<<originx[i];
    }

    delete origin;
    delete origin2;
    return 0;
}