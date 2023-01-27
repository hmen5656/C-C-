#pragma once
#include <iostream>
namespace template_project {
    class Point
    {
    private:
        /* data */
        int x;
        int y;
        int *p;
    public:
        Point(int _x=0 , int _y=0 , int _p = 0):x(_x),y(_y),p(new int(_p)){};
        Point(const Point&); // copy constructor
        ~Point();
        void print_datas();
        int getY() const;
        int getX() const;
        bool atOrigin();
        friend std::ostream & operator <<(std::ostream & , Point& );
        friend std::ostream & operator <<(std::ostream & , Point* );
    };
}  // namespace template_project

