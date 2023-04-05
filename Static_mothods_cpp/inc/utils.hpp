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
        static int counter;
    public:
        Point(int _x=0 , int _y=0 , int _p = 0):x(_x),y(_y),p(new int(_p)){counter++;};
        Point(const Point&); // copy constructor
        ~Point();
        void print_datas();
        int getX() const;
        int getY() const;
        int getP() const;
        bool atOrigin();
        static int get_object_counter(void){return Point::counter;};
        Point Add(const Point&)const;
        Point operator+(const Point& );
        Point operator+(const Point* );
        Point& operator=(const Point& );
        Point& operator=(const Point* );
        // Point& operator=(const Point& );
        friend std::ostream & operator <<(std::ostream & , Point& );
        friend std::ostream & operator <<(std::ostream & , Point* );
    };
}  // namespace template_project

