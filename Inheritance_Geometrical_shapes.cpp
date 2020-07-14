#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

class sekil{
public:
    int alan,birim;
    string sekilturu;
    sekil(){
    cout<<"sekil cagirildi"<<endl;
    }
    ~sekil(){
    cout<<"sekil sonlandirildi"<<endl;}

    void alanyazdir(){
    cout<<sekilturu<<"  "
    <<alan<<"cm2 dir"<<endl;
    }
};

class ucgen:public sekil{
public:
    int taban,yukseklik;
ucgen(){
    cout<<"ucgen cagirildi"<<endl;
    sekilturu="ucgen";
}
~ucgen(){
    cout<<"ucgen sonlandirildi"<<endl;
    sekilturu="ucgen";
}
};
class eskenarucgen: public ucgen{
public:
    eskenarucgen(){
    cout<<"eskenarucgen cagirildi"<<endl;
    sekilturu="eskenarucgen";
    }
    ~eskenarucgen(){
    cout<<"eskenarucgen sonlandirildi"<<endl;
    sekilturu="eskenarucgen";
    }
};
class dortgen:public sekil{
public:
int en,boy;
dortgen(){
    cout<<"dortgen cagirildi"<<endl;
    sekilturu="dortgen";
}
~dortgen(){
    cout<<"dortgen sonlandirildi"<<endl;
    sekilturu="dortgen";
}
};

class daire:public sekil{
public:
int yaricap;
daire(){

    sekilturu="daire";
}
daire(int yaricap):yaricap(yaricap){
    sekilturu="daire with radius ";
    alan=this->yaricap*10;
    alanyazdir();
}
~daire(){
    cout<<"daire sonlandirildi";
    sekilturu="daire";
}
};

class atama:public daire{
    public:
        int atanacak;
        atama(int atanacak):atanacak(atanacak*10)
        {
            daire(this->atanacak);
            cout<<this->atanacak<<endl<<"<---------------------->"<<endl;
        }
};
int main()
{
    int a;
    cin>>a;
    atama b(a);
//    int p;
//    eskenarucgen d1;
//    cout<<"<---------------------->"<<endl;
//    atama d1(&p);
//    cout<< p <<endl
//    <<"<---------------------->"<<endl;
    system("pause");
	return 0;

}
