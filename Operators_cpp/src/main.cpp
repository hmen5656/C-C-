// #include<iostream>
// using namespace std;

// class Myclass{
// private:
//     int mynumber;
// public :
//     Myclass():mynumber(100){};    
//     Myclass(const Myclass& t){
//         this->mynumber=t.mynumber;
//     }
//     void set_num(int a){
//         mynumber=a;
//     }
//     void print_num(void)const {
//         //operator[](index);
//         cout<<"Number : "<<mynumber<<endl;
//     }
//     int& operator [](int a){
//             return this->mynumber+=1;
//     }
//     Myclass& operator =(const Myclass &num){
//         this->mynumber=num.mynumber;
//         return *this;
//     }
//     Myclass& operator+=(Myclass a){
//         this->mynumber+=a.mynumber;
//         return *this;
//     }
//     Myclass& operator-=(Myclass a){
//         this->mynumber-=a.mynumber;
//         return *this;
//     }
//     Myclass& operator++(int){
//         this->mynumber++;
//         return *this;
//     }
//     Myclass& operator--(int){
//         this->mynumber--;
//         return *this;
//     }
//     Myclass operator+(const Myclass &num){
//         Myclass renum;
//         renum.mynumber=this->mynumber+num.mynumber;
//         return renum;
//     }
    
//     Myclass operator-(const Myclass &num){
//         Myclass renum;
//         renum.mynumber=this->mynumber-num.mynumber;
//         return renum;
//     }

//     Myclass operator+(void){
//         Myclass renum;
//         if(this->mynumber < 0)
//             renum.mynumber=-this->mynumber;
//         else 
//             renum.mynumber=this->mynumber;

//         return renum;
//     }

//     Myclass operator-(void){
//         Myclass renum;
//         renum.mynumber=-this->mynumber;

//         return renum;
//     }
// };
// int main(int argc , char* argv[]){
//     Myclass my1,my2;
//     Myclass *m3;
//     my1.set_num(15);
//     my2.set_num(21);
//     my1.print_num();
//     my2.print_num();
//     my1++;
//     my2--;
//     my1.print_num();
//     my2.print_num();

//     m3=&my1;
//     cout<<"m3 adress is "<<m3<<endl;
//     cout<<"my1 address is "<<&my1<<endl;
//     m3->print_num();
//     cout<<"<--------pointer class--------->"<<endl;
//     Myclass mx=my1;
//     cout<<"mx adress is "<<&mx<<endl;
//     cout<<"my1 address is "<<&my1<<endl;
//     mx.print_num();
//     (*m3)[5];
//     m3->print_num();
//     my1.print_num();
//     cout<<"<--------copy ve assignment operator--------->"<<endl;
//     Myclass m4=my1;
//     cout<<"m4  ";
//     m4.print_num();
//     cout<<"&m4 is = "<<&m4<<endl;
//     cout<<"&my1 is = "<<&my1<<endl;
//     m4=my1;
//     cout<<"m4  ";
//     m4.print_num();
//     cout<<"&m4 is = "<<&m4<<endl;
//     cout<<"&my1 is = "<<&my1<<endl;
//     cout<<"<---------cikarma-------->"<<endl;
//     mx=m4-my1;
//     cout<<"mx  ";
//     mx.print_num();
//     cout<<"m4  ";
//     m4.print_num();
//     cout<<"my1  ";
//     my1.print_num();
//     cout<<"<--------toplama--------->"<<endl;
//     mx=m4+my1;
//     cout<<"mx  ";
//     mx.print_num();
//     cout<<"m4  ";
//     m4.print_num();
//     cout<<"my1  ";
//     my1.print_num();
//     cout<<"<---------atama ve - operatoru-------->"<<endl;
//     mx=-my1;
//     cout<<"mx1  ";
//     mx.print_num();
//     cout<<"<--------atama ve + operatoru-------->"<<endl;
//     mx=+mx;
//     cout<<"mx1  ";
//     mx.print_num();
//     cout<<"<--------++ operatoru-------->"<<endl;
//     mx++;
//     cout<<"mx1  ";
//     mx.print_num();
//     cout<<"<-------- -- operatoru-------->"<<endl;
//     mx--;
//     cout<<"mx1  ";
//     mx.print_num();
//     cout<<"<--------assignment ve ++ operatoru-------->"<<endl;
//     mx=my1++;
//     cout<<"mx1  ";
//     mx.print_num();
//     cout<<"my1  ";
//     my1.print_num();
//     cout<<"<--------assignment ve -- operatoru-------->"<<endl;
//     mx=my1--;
//     cout<<"mx1  ";
//     mx.print_num();
//     cout<<"my1  ";
//     my1.print_num();




//     return 0;
// }


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