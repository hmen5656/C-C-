#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int gcm(int,int);
int lcm(int,int);
int main()
{
    int choice=0,x,y,new_calc;
    do{
    while(1){
        if (system("CLS")) system("clear");
            cout << "pllease choose an operation " << endl;
            cout.setf(ios::left);
            cout<<setw(8)<< "For gcm(x,y) press 1 " <<endl;
            cout<<setw(8)<< "For lcm(x,y) press 2 " <<endl;
            cout<<setw(8)<< "Choice : ";
            cin>>choice;
            if(choice == 1 || choice == 2)
                break;
        }
    cout<<setw(8)<< "x : ";
    cin>>x;
    cout<<setw(8)<< "y : ";
    cin>>y;
    if(choice==1){
        cout << "gcm function has been selected" << endl;
        cout<< "gcm("<<x<<","<<y<<") : "<<gcm(x,y)<<endl;
        }
    if(choice==2){
        cout << "lcm function has been selected" <<endl;
        cout<< "lcm("<<x<<","<<y<<") : "<<lcm(x,y)<<endl;
        }

    cout<< "Press \"5\" to continue "<<endl;
    cin>>new_calc;
    }while(new_calc==5);

        system("pause");
    return 0;
}
int gcm(int sayi_1,int sayi_2){
    int kucuk=0,buyuk=0;
    if(sayi_1<sayi_2){
            kucuk=sayi_1;
            buyuk=sayi_2;
            }
    else if(sayi_1>sayi_2){
            buyuk=sayi_1;
            kucuk=sayi_2;
        }
    else {
        cout << "numbers are equal" << endl;
        return 0;
        }
    int gcm;
    for(int i=1; i<=kucuk;i++)
        if(buyuk%i==0 && kucuk%i==0)
            gcm = i ;
    return gcm;
}

int lcm(int sayi_1,int sayi_2){
    int kucuk,buyuk;
    if(sayi_1<sayi_2){
            kucuk=sayi_1;
            buyuk=sayi_2;
            }
    else if(sayi_1>sayi_2){
            buyuk=sayi_1;
            kucuk=sayi_2;
            }
    else {
    cout << "numbers are equal" << endl;
        return 0;
        }
    int gcm;
    for(int i=1; i<=kucuk;i++)
        if(buyuk%i==0 && kucuk%i==0)
            gcm = i;
    return (kucuk*buyuk/gcm);
}
