#include<iostream>
using namespace std;

class Myclass{
private:
    int mynumber;
public :
    Myclass(){};    
    Myclass(const Myclass& t):mynumber(100){}
    void set_num(int a){
        mynumber=a;
        }
    void print_num(void)const {
        //operator[](index);
        cout<<"Number : "<<mynumber<<endl;
    }
    int& operator [](int a){
            return this->mynumber+=1;
    }
        Myclass& operator =(const Myclass &num){
        // if(num.mynumber<0)
        //     this->mynumber=-num.mynumber;
        // else
            this->mynumber=num.mynumber;
        return *this;
    }
    Myclass& operator+=(Myclass a){
        this->mynumber+=a.mynumber;
        return *this;
    }
    Myclass& operator-=(Myclass a){
        this->mynumber-=a.mynumber;
        return *this;
        }
    Myclass& operator++(int){
        this->mynumber++;
        return *this;
    }
    Myclass& operator--(int){
        this->mynumber--;
        return *this;
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
    Myclass operator+(void){
         Myclass renum;
        if(this->mynumber < 0)
            renum.mynumber=-this->mynumber;
        else 
            renum.mynumber=this->mynumber;

        return renum;
    }
    Myclass operator-(void){
        Myclass renum;
        renum.mynumber=-this->mynumber;

        return renum;
    }
};
int main(int argc , char* argv[]){
    Myclass my1,my2;
    Myclass *m3;
    my1.set_num(15);
    my2.set_num(21);
    my1.print_num();
    my2.print_num();
    my1++;
    my2--;
    my1.print_num();
    my2.print_num();

    m3=&my1;
    cout<<"m3 adress is "<<m3<<endl;
    cout<<"my1 address is "<<&my1<<endl;
    m3->print_num();
    cout<<"<--------pointer class--------->"<<endl;
    Myclass mx=my1;
    cout<<"mx adress is "<<&mx<<endl;
    cout<<"my1 address is "<<&my1<<endl;
    mx.print_num();
    (*m3)[5];
    m3->print_num();
    my1.print_num();
    cout<<"<--------copy ve assignment operator--------->"<<endl;
    Myclass m4=my1;
    cout<<"m4  ";
    m4.print_num();
    cout<<"&m4 is = "<<&m4<<endl;
    cout<<"&my1 is = "<<&my1<<endl;
    m4=my1;
    cout<<"m4  ";
    m4.print_num();
    cout<<"&m4 is = "<<&m4<<endl;
    cout<<"&my1 is = "<<&my1<<endl;
    cout<<"<---------cikarma-------->"<<endl;
    mx=m4-my1;
    cout<<"mx  ";
    mx.print_num();
    cout<<"m4  ";
    m4.print_num();
    cout<<"my1  ";
    my1.print_num();
    cout<<"<--------toplama--------->"<<endl;
    mx=m4+my1;
    cout<<"mx  ";
    mx.print_num();
    cout<<"m4  ";
    m4.print_num();
    cout<<"my1  ";
    my1.print_num();
    cout<<"<---------atama ve - operatoru-------->"<<endl;
    mx=-my1;
    cout<<"mx1  ";
    mx.print_num();
    cout<<"<--------atama ve + operatoru-------->"<<endl;
    mx=+mx;
    cout<<"mx1  ";
    mx.print_num();
    cout<<"<--------++ operatoru-------->"<<endl;
    mx++;
    cout<<"mx1  ";
    mx.print_num();
    cout<<"<-------- -- operatoru-------->"<<endl;
    mx--;
    cout<<"mx1  ";
    mx.print_num();
    cout<<"<--------assignment ve ++ operatoru-------->"<<endl;
    mx=my1++;
    cout<<"mx1  ";
    mx.print_num();
    cout<<"my1  ";
    my1.print_num();
    cout<<"<--------assignment ve -- operatoru-------->"<<endl;
    mx=my1--;
    cout<<"mx1  ";
    mx.print_num();
    cout<<"my1  ";
    my1.print_num();




    return 0;
}

