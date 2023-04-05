#include <iostream>

using namespace std;
class kol{
    public:
        int deger;
        kol *alt_kol;
        };
class branch{
    public:
        kol *sonraki=NULL;
        kol *pre=NULL;
        void basa_ekle(int add);
        void sona_ekle(int add);
        void araya_ekle(int add,int ara);
        void sirali_ekle(int add);
        void yazdir();
        void veri_sil(int del);
        void sil();
};
void branch::basa_ekle(int add){
    kol *a=new kol;
    a->deger=add;
    pre=sonraki;
    if(sonraki==NULL){
    a->alt_kol=a;
    sonraki=a;
    }
    else{
    pre=sonraki;
    while(pre->alt_kol != sonraki){
        pre=pre->alt_kol;
    }
    pre->alt_kol=a;
    a->alt_kol=sonraki;
    sonraki=a;
    }
}
void branch::sona_ekle(int add){
    if(sonraki==NULL)
        {
            basa_ekle(add);
            return;
        }
    kol *a=new kol;
    a->deger=add;
    a->alt_kol=sonraki;
    pre=sonraki;
    while(pre->alt_kol != sonraki){
        pre=pre->alt_kol;
    }
    pre->alt_kol=a;
} 
void branch::yazdir(){
    kol *a=new kol();
    a=sonraki;
    cout<<a->deger<<endl;  
    a=a->alt_kol;
    while(a !=sonraki){
        cout<<a->deger<<endl;  
        a=a->alt_kol;
    }
    cout<<endl;
}
void branch::veri_sil(int del){
    pre=sonraki;
    kol *temp=new kol;
    if(pre->deger==del){
        //cout<<"ilk elemani silmek istiyorsunuz"<<endl;
        temp=pre;
        while(pre->alt_kol !=sonraki   )
            pre=pre->alt_kol;
        temp=sonraki;
        pre->alt_kol=sonraki->alt_kol;
        sonraki=temp->alt_kol;
        delete temp;
    }
    else{
    while(pre->alt_kol->deger != del && pre->alt_kol->alt_kol !=sonraki   ){
        pre=pre->alt_kol;
    }
    if(pre->alt_kol->deger!= del && pre->alt_kol !=sonraki  )
    {
        //cout<<del<<"i dugum icinde bulunamadim"<<endl;
    }
    else{
        //cout<<del<<"i dugum icinde buldum"<<endl;
        temp=pre->alt_kol;
        pre->alt_kol=pre->alt_kol->alt_kol;
        delete temp;
    }
    }

}
void branch::sirali_ekle(int add){
    pre=sonraki;
    if(sonraki==NULL || sonraki->deger > add){   // yapi bos ise basa ekleme yapar
        basa_ekle(add);    
        return;
    }
    else{
    kol *temp=new kol;
    temp->deger=add;
    while(pre->alt_kol->deger < add){
        pre=pre->alt_kol;
    }
    temp->alt_kol=pre->alt_kol;
    pre->alt_kol=temp;

    }
}
int main(int argc, char *argv[]){
    branch vektor; 
    vektor.basa_ekle(34);
    vektor.basa_ekle(45);
    vektor.basa_ekle(47);
    vektor.basa_ekle(33);
    vektor.sona_ekle(67);
    vektor.basa_ekle(99);
    vektor.sona_ekle(34);
    vektor.yazdir();
    vektor.veri_sil(47);
    cout<<"after delete"<<endl;
    vektor.yazdir();
    vektor.veri_sil(65);
    cout<<"after delete"<<endl;
    vektor.yazdir();
    vektor.veri_sil(34);
    cout<<"after delete"<<endl;
    vektor.yazdir();
    vektor.veri_sil(99);
    cout<<"after delete"<<endl;
    vektor.yazdir();
    vektor.veri_sil(33);
    cout<<"after delete"<<endl;
    vektor.yazdir();
    vektor.sirali_ekle(11);
    cout<<"after sirali ekle"<<endl;
    vektor.yazdir();
    vektor.sirali_ekle(5);
    cout<<"after sirali ekle"<<endl;
    vektor.yazdir();
    vektor.sirali_ekle(50);
    cout<<"after sirali ekle"<<endl;
    vektor.yazdir();
    vektor.sirali_ekle(51);
    cout<<"after sirali ekle"<<endl;
    vektor.yazdir();

    return 0;
}