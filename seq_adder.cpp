#include <iostream>

using namespace std;
class kol
{
public:
    int deger;
    kol *alt_kol;
};
class branch
{
public:
    kol *my_data = NULL;
    kol *iter = NULL;
    void basa_ekle(int add);
    void sona_ekle(int add);
    void araya_ekle(int add, int ara);
    void sirali_ekle(int add);
    void yazdir();
    void veri_sil(int del);
    void sil();
};
void branch::basa_ekle(int add)
{
    kol *a = new kol;
    a->deger = add;
    a->alt_kol = my_data;
    my_data = a;
}
void branch::sirali_ekle(int add)
{
    iter = my_data;
    if (my_data == NULL || my_data->deger > add)
    { // yapi bos ise basa ekleme yapar
        cout << "basa eklendi" << endl;
        basa_ekle(add);
        return;
    }

    while (iter->alt_kol->deger < add)
    {

        iter = iter->alt_kol;
        if (iter->alt_kol == NULL)
        {
            sona_ekle(add);
            return;
        }
    }
    araya_ekle(add, iter->alt_kol->deger);
}
void branch::sona_ekle(int add)
{
    kol *a = new kol;
    a->deger = add;
    a->alt_kol = NULL;
    if (my_data == NULL)
    {
        basa_ekle(add);
        return;
    }
    else
    {
        iter = my_data;
        while (iter->alt_kol != NULL)
        {
            iter = iter->alt_kol;
        }
        iter->alt_kol = a;
    }
}
void branch::araya_ekle(int add, int ara)
{
    kol *a = new kol;
    a->deger = add;
    if (my_data == NULL)
        basa_ekle(add);
    else
    {
        iter = my_data;
        while (iter->alt_kol->deger != ara)
        {
            iter = iter->alt_kol;
        }
        kol *on = new kol;
        on = iter->alt_kol;
        iter->alt_kol = a;
        a->alt_kol = on;
    }
}
void branch::yazdir()
{
    kol *a = new kol();
    a = my_data;
    while (a->alt_kol != NULL)
    {
        cout << a->deger << endl;
        a = a->alt_kol;
    }
    cout << a->deger << endl;
    // cout<<my_data->deger<<endl;
}
void branch::sil()
{
    iter = my_data->alt_kol;
    delete my_data;
    my_data = iter;
}
void branch::veri_sil(int del)
{
    iter = my_data;
    kol *temp = new kol;
    if (del == my_data->deger)
    {
        sil();
        return;
    }
    else
    {
        while (iter->alt_kol != NULL && iter->alt_kol->deger != del)
        {
            iter = iter->alt_kol;
        }

        if (iter->alt_kol == NULL)
        {
            cout << "31 i dugum icinde bulunamadim" << endl;
            return;
        }
        temp = iter->alt_kol;
        iter->alt_kol = iter->alt_kol->alt_kol;
        delete temp;
    }
}
int main()
{
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
    cout << "siraya gore ekleme yapildiktan sonra" << endl;
    vektor.sirali_ekle(34);
    vektor.sirali_ekle(30);
    vektor.sirali_ekle(22);
    vektor.sirali_ekle(35);
    vektor.sirali_ekle(79);
    vektor.sirali_ekle(33);
    vektor.sirali_ekle(56);
    vektor.yazdir();
    cout << "belli degeri silme yapildiktan sonra" << endl;
    vektor.veri_sil(35);
    vektor.yazdir();

    return 0;
}