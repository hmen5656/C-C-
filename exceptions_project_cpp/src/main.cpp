#include <iostream>
#include <exception>
using namespace std; 


class CExeption:public exception{
public:
    virtual const char* what()const throw()
    {
        return "Something bad happened";
    }
    CExeption()
    {

    }
};
class test{
public:
    void goesWrong()
    {
        throw CExeption();
    }
};

void goesWrong(){

    bool error1detected = true;
    bool error2detected = false;
    if(error1detected)
    {
        throw bad_alloc();
    }
    if(error1detected)
    {
        throw exception();
    }



}


int main(){
    test test;
    try
    {
        goesWrong();
    }
    catch(int error)
    {
        cout<<"INT Error occured : "<<error<<endl;
    }
    catch(exception &e)
    {
        cout<<"exception &e Error occured : "<<e.what()<<endl;
    }
    catch(bad_alloc &e)
    {
        cout<<"bad_alloc Error occured : "<<e.what()<<endl;
    }
    catch(char & ch)
    {
        
    }


    return 0;
}