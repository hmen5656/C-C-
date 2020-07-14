#include <iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

class ogrenci{
	public :
		string  Ad;
		string Soyad;
		string Numara;
		int Sinif;
		void BilgiGir();
		void BilgiYazdir();
};
void ogrenci::BilgiGir(){
	cout.setf(ios::right);
	cout<<setw(30)<<"Ogrencinin Adi : ";
	cin>>Ad;
	cout<<setw(30)<<"Ogrencinin Soyadi : ";
	cin>>Soyad;
	cout<<setw(30)<<"Ogrencinin Numarasi : ";
	cin>>Numara;
	cout<<setw(30)<<"Ogrencinin Sinifi : ";
	cin>>Sinif;
}
void ogrenci::BilgiYazdir(){
	cout.setf(ios::right);
	cout<<setw(30)<<"Ogrencinin Adi : "<<Ad;
	cout<<setw(30)<<"Ogrencinin Soyadi : "<<Soyad;
	cout<<setw(30)<<"Ogrencinin Numarasi : "<<Numara;
	cout<<setw(30)<<"Ogrencinin Sinifi : "<<Sinif;
}
class okul{
	public:
	ogrenci ogrenciler;
	int ogrencisayisi;
	fstream dosya;
	okul(){
		dosya.open("yazdir.txt",ios::out|ios::in|ios::app);
		dosya.setf(ios::left);
		ogrencisayisi=0;
	}
	void ogrenciekle();
};
void okul::ogrenciekle(){
		ogrenci o=ogrenciler;
		o.BilgiGir();
		dosya<<setw(20)<<o.Ad
		<<setw(20)<<o.Soyad
		<<setw(20)<<o.Numara
		<<setw(20)<<o.Sinif<<endl;
};
int main() {
	int x;
	okul sau;
	cout<<"Kac ogrencinin kayit olacagini giriniz : ";
	cin>>x;
	for(int a=0;a<x;a++){
	sau.ogrenciekle();
}
}
