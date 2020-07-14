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
    a->alt_kol=sonraki;
    sonraki=a;
}
void branch::sirali_ekle(int add){
    pre=sonraki;
    if(sonraki==NULL){   // yapi bos ise basa ekleme yapar
        cout<<"basa eklendi"<<endl;
        basa_ekle(add);    
        return;
    }
    if (sonraki->deger > add) // eklemek istedigim deger ilk degerden kucuk ise yine basa ekleme yapar
    {
        basa_ekle(add);
        return;
    }
    //eger eklemek itedigim deger kendinden buyuk ilk degerin onune eklenecek 
    while (pre->alt_kol->deger < add){
            
            pre=pre->alt_kol;
            if(pre->alt_kol ==NULL){
                sona_ekle(add);
                return;}
        }
        araya_ekle(add,pre->alt_kol->deger);
}
void branch::sona_ekle(int add){
    kol *a=new kol;
    a->deger=add;
    a->alt_kol=NULL;
    if(sonraki==NULL){
        basa_ekle(add);
        return;
        }
    else{
        pre=sonraki;
        while(pre->alt_kol != NULL){
            pre=pre->alt_kol;
        }
        pre->alt_kol=a;
}    
}
void branch::araya_ekle(int add,int ara){
    kol *a=new kol;
    a->deger=add;
    if(sonraki==NULL)
        cout<<"araya deger eklemeden once basa veya son a deger ekleyin";
    else{
        pre=sonraki;
        while(pre->alt_kol->deger != ara) {
            pre=pre->alt_kol;
        }
        kol *on=new kol;
        on=pre->alt_kol;
        pre->alt_kol=a;
        a->alt_kol=on;
    }
}
void branch::yazdir(){
    kol *a=new kol();
    a=sonraki;
    while(a->alt_kol!=NULL){
        cout<<a->deger<<endl;  
        a=a->alt_kol;
    }
    cout<<a->deger<<endl;
    //cout<<sonraki->deger<<endl;
}
void branch::sil(){
    pre=sonraki->alt_kol;
    delete sonraki;
    sonraki=pre;
}
void branch::veri_sil(int del){
    pre=sonraki;
    kol *temp=new kol;
    if(del==sonraki->deger){
        sil();
        return;
    }
    else {
        while(pre->alt_kol !=NULL && pre->alt_kol->deger != del ){
            pre=pre->alt_kol;
        }
        
        if(pre->alt_kol==NULL)
        {
            cout<<"31 i dugum icinde bulunamadim"<<endl;
            return;
        }
        temp=pre->alt_kol;
        pre->alt_kol=pre->alt_kol->alt_kol;
        delete temp;
        }
}
int main(){
    branch vektor;
    // vektor.sona_ekle(65);//sonrasina ekleyecegi herhangi bir degeri olmadigi icin basa ekleme yapti
    // vektor.sona_ekle(34);
    // vektor.sona_ekle(56);
    // vektor.sona_ekle(11);
    // vektor.yazdir();
    // cout<<"basa ekleme yapildiktan sonra"<<endl;
    // vektor.basa_ekle(345);
    // vektor.yazdir();
    // cout<<"araya ekleme yapildiktan sonra"<<endl;
    // vektor.araya_ekle(99,56);
    // vektor.yazdir();
    cout<<"siraya gore ekleme yapildiktan sonra"<<endl;
    vektor.sirali_ekle(34);
    vektor.sirali_ekle(30);
    vektor.sirali_ekle(22);
    vektor.sirali_ekle(35);
    vektor.sirali_ekle(79);
    vektor.sirali_ekle(33);
    vektor.sirali_ekle(56);
    vektor.yazdir();
    cout<<"belli degeri silme yapildiktan sonra"<<endl;
    vektor.veri_sil(35);
    vektor.yazdir();

    return 0;
}