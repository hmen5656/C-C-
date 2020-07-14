#include<iostream>
using namespace std;
int* kucult(int* eskialan,int yeni){
int *k = new int[yeni];
for (int i=0;i<yeni;i++){
    k[i]=eskialan[i];
}
delete []eskialan;
return k;
}
int *arttir(int*eskialan,int boyut,int yeni){
int *c = new int[yeni];
for (int i=0;i<boyut;i++){
    c[i]=eskialan[i];
}
delete []eskialan;
return c;
}
char *strings(char *eskialan){
	int size=1;
	char *temp=eskialan;
	while(*eskialan++!=0){
		size++;
	}
	cout<<"size is"<<size<<endl;
	cout<<"eskialan"<<temp<<endl;
	char* newstr=new char[size+7];
	for(int i=0;i<size;i++){
		newstr[i]=temp[i];
	}
	
	char hsyn[]="hsynmen";
	for(int i=size-1;i<size+7;i++){
		newstr[i]=hsyn[i-(size-1)];
	}
	for(int i=0;i<size+7;i++){
		cout<<newstr[i]<<endl;
	}
	newstr[size+7]='\0';
	cout<<"newstr"<<newstr<<endl;
	return newstr;
}
int main(){

char mystr[]="15156019";
const char *str="String";
char *mystr2 = strings("15-156-019");
cout<<mystr2<<endl;

// int *p = new int[10];
// int z=10;
// for(int a=0;a<10;a++){
// 	p[a]=a;
// cout<<&p[a]<<"     ";
// cout<<p[a]<<endl;}
// cout<<"p[10]==="<<endl;
// p[11]=z;
// cout<<&p[11]<<"     ";
// cout<<p[11]<<endl;


// p=new int[15];
// cout<<&p[18]<<"     ";
// cout<<p[18]<<endl;

// p=kucult(p,4);

// for(int a=0;a<4;a++)
// cout<<*(p+a)<<endl;
// p[2]=z;
// cout<<p[1]<<endl;

// p=arttir(p,10,20);
// for(int i=10;i<20;i++)
// p[i]=i;
// for(int i=0;i<20;i++){
// cout<<&p[i]<<"     ";
// cout<<p[i]<<endl;}
// //for(int i=20;i<30;i++)
// p[30]=1;
// cout<<&p[30]<<"     ";
// cout<<p[30]<<endl;

}

