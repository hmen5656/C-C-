
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<string>
#include <iomanip>
using namespace std;
int bos_kart[3]={0};
int check[3] = {0};
struct batak{
char * isim;
char* kartlar[13];
int kart_indisi;
}oyuncular[4];

bool kontrolet( int kartlar[][13],int boyut ){
    int indis=13;
    cout<<endl;
      for(int j=0;j<boyut;j++){
            for(int i=0;i<indis;i++){
                cout<< kartlar[j][i];
      }
      cout<<endl;
      }
    for(int j=0;j<4;j++){
            for(int i=0;i<13;i++){
                if(kartlar[j][i] == 0){
                    bos_kart[0]=1;
                    bos_kart[1]=j;
                    bos_kart[2]=i;
                    return true;}
      }
    }
      bos_kart[0]=0;
      bos_kart[1]=0;
      bos_kart[2]=0;
      return false;
}
int main(){

srand(time(0));
char *players[]={"huseyin","mehmet","halil","halil"};
char *kart_isimler[4][13]={  {"KUPA 2'li","KUPA 3'lu","KUPA 4'lu","KUPA 5li","KUPA 6li","KUPA 7li","KUPA 8li","KUPA 9lu","KUPA 10lu","KUPA JOKER","KUPA KIZ","KUPA PAPAZ","KUPA AS"},
                             {"MACA 2'li","MACA 3'lu","MACA 4'lu","MACA 5li","MACA 6li","MACA 7li","MACA 8li","MACA 9lu","MACA 10lu","MACA JOKER","MACA KIZ","MACA PAPAZ","MACA AS"},
                             {"KARO 2'li","KARO 3'lu","KARO 4'lu","KARO 5li","KARO 6li","KARO 7li","KARO 8li","KARO 9lu","KARO 10lu","KARO JOKER","KARO KIZ","KARO PAPAZ","KARO AS"},
                             {"SINEK 2'li","SINEK 3'lu","SINEK 4'lu","SINEK 5li","SINEK 6li","SINEK 7li","SINEK 8li","SINEK 9lu","SINEK 10lu","SINEK JOKER","SINEK KIZ","SINEK PAPAZ","SINEK AS"}};
int kart[4][13]={0};

char *secilen_kart;

int kart_indis1=0,oyuncu,kart_indis2=0;
for(int j=0;j<4;j++){
            oyuncular[j].isim=players[j];
            oyuncular[j].kart_indisi=0;
  }
   for(int j=0;j<4;j++){
        cout<<j+1<<"'inci oyuncu  " <<oyuncular[j].isim<<endl;}
int deneme=0,dolu_kart=0,indis;

while(kontrolet(kart,4)){
        oyuncu=rand()%4;
        kart_indis1=bos_kart[1];
        kart_indis2=bos_kart[2];
        deneme++;
        indis=oyuncular[oyuncu].kart_indisi;
        while(kart[kart_indis1][kart_indis2]==0){
            if(indis>=13)
                break;
            oyuncular[oyuncu].kartlar[indis]=kart_isimler[kart_indis1][kart_indis2];
            oyuncular[oyuncu].kart_indisi++;
            kart[kart_indis1][kart_indis2]=1;
            dolu_kart++;

            }
   }

   cout<<deneme<<"defa deneme yapildi"<<endl;
   cout<<dolu_kart<<"tane kart atandi"<<endl;
cout<<endl<<endl<<endl<<endl<<endl;

  for(int j=0;j<4;j++){
        for(int i=0;i<13;i++){
            cout<< kart[j][i];
  }
  cout<<endl;
  }

    cout<<endl<<"-------------------------------"<<endl;
    cout<<endl<<"-------Kartlar Dagitildi-------"<<endl;
    cout<<endl<<"-------------------------------"<<endl;

   for(int j=0;j<4;j++){
        cout.setf(ios::left);
        cout<<setw(8)<<oyuncular[j].isim<<setw(20)<<"'in kartlari " ;}

cout<<endl;
        for(int i=0;i<13;i++){
            //cout<< oyuncular[j].kart_indisi<<endl;
            for(int j=0;j<4;j++){
           cout.setf(ios::left);
            cout<<setw(2)<<i+1<<".kart "<< setw(20)<<oyuncular[j].kartlar[i] ;
            }

  cout<<endl;
  }

}
