
#include<iostream>
using namespace std;

class Myclass{
private:
    int mynumber;
public:
    void set_num(int a){
        mynumber=a;
        }
    void print_num(void){
        cout<<"Number : "<<mynumber<<endl;
    }
    Myclass operator+(const Myclass &num){
        Myclass renum;
        renum.mynumber=this->mynumber+num.mynumber;
        return renum;
    }
    Myclass operator-(const Myclass &num){
        Myclass renum;
        renum.mynumber=this->mynumber-num.mynumber;
        return renum;
    }
    Myclass operator =(const Myclass &num){
        if(num.mynumber<0)
            this->mynumber=-num.mynumber;
        else
            this->mynumber=num.mynumber;
        return *this;
    }
};
int main(int argc , char* argv[]){
    Myclass my1,my2,my3,my4;
    my1.set_num(15);
    my2.set_num(21);
    my4.set_num(10);
    my3 = my1 = my2-my4;
    my3.print_num();
    my1.print_num();
    return 0;
}