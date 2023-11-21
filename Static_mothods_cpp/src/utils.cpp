

#include <utils.hpp>

namespace template_project {

    namespace common_utils {


    } // namespace common_utils
    
    int Point::counter = 0;
    Point::Point(const Point& c)
    {
        std::cout<<"Copy Constructor been called "<<std::endl;
        this->x = c.x;
        this->y = c.y; 
        this->p = new int(*c.p);
        this->counter++;
    };
    Point::~Point()
    {
        std::cout<<"Deconstructor been called "<<std::endl;
        this->counter--;
        std::cout<<"Object Number : "<<this->counter<<std::endl; 
        delete p;

    }

    void Point::print_datas()
    {
        std::cout<<"X : "<<this->x<<"\tY : "<<this->y<<"\tP : "<<*this->p<<std::endl;
    };

    int Point::getX() const
    {
        return this->x;
    };

    int Point::getY() const
    {
        return this->y;
    };
    int Point::getP() const
    {
        return *(this->p);
    };

    bool Point::atOrigin()
    {
        return !this->x && !this->y ;
    };

    Point Point::Add(const Point& _point)const
    {
        Point _rpoint = Point(this->getX() + _point.getX() , this->getY() + _point.getY(),this->getP() + _point.getP());
        return _rpoint;
    };  
    Point Point::operator+(const Point& _point){
        std::cout<<"+ RHD is REFERANCE"<<std::endl;
        Point _rpoint = Point(this->getX() + _point.getX() , this->getY() + _point.getY(),this->getP() + _point.getP());
        return _rpoint;
    }
    
    Point Point::operator+(const Point* _point){
        std::cout<<"+ RHD is POINTER"<<std::endl;
        Point _rpoint = Point(this->getX() + _point->getX() , this->getY() + _point->getY(),this->getP() + _point->getP());
        return _rpoint;
    }
    
    Point& Point::operator=(const Point& _point){
        std::cout<<"- RHD is REFERANCE"<<std::endl;
        delete this->p;
        this->p = new int(_point.getP());
        this->x = _point.getX();
        this->y = _point.getY();
        return *this;
    }
    Point& Point::operator=(const Point* _point){
        std::cout<<"- RHD is POINTER"<<std::endl;
        delete this->p;
        this->p = new int(_point->getP());
        this->x = _point->getX();
        this->y = _point->getY();
        return *this;
    }

    std::ostream& operator<<(std::ostream & _out, Point* _point)
    {
        _out<<"X : "<<_point->x<<"\tY : "<<_point->y<<"\tP : "<<*_point->p<<"\n";
        return _out; 
    };
    std::ostream& operator<<(std::ostream & _out, Point& _point)
    {
        _out<<"X : "<<_point.x<<"\tY : "<<_point.y<<"\tP : "<<*_point.p<<"\n";
        return _out; 
    };




}  // namespace template_project
