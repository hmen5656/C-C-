#include <utils.hpp>

namespace template_project {

    namespace common_utils {

    } // namespace common_utils
    Point::Point(const Point& c)
    {
        std::cout<<"Copy Constructor been called "<<std::endl;
        this->x = c.x;
        this->y = c.y; 
        this->p = new int(*c.p);
    };

    Point::~Point()
    {
        std::cout<<"Deconstructor been called "<<std::endl;

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

    bool Point::atOrigin()
    {
        return !this->x && !this->y ;
    };

    std::ostream& operator <<(std::ostream & _out, Point* _point)
    {
        _out<<"X : "<<_point->x<<"\tY : "<<_point->y<<"\n";
        return _out; 
    }

    std::ostream& operator <<(std::ostream & _out, Point& _point)
    {
        _out<<"X : "<<_point.x<<"\tY : "<<_point.y<<"\n";
        return _out; 
    }




}  // namespace template_project