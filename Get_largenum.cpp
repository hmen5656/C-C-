#include <iostream>
using namespace std;

template <class tip> //olusturacagimiz class , verilen tip degerlerine gore islem yapacal
class largenum{ //class tanimlama
private:
    tip max; //tip turunde degisken 
public:
    tip get_largenum(tip x, tip y); //tip turunde parametre alan ve ayni tipte geri donus yapan func
};

template<class tip> //func class disinda tanimlarken yine ayni sekilde template olarak belirlememiz gerek
tip largenum<tip>::get_largenum(tip x, tip y){
    if(x>y)
         max = x;
    else
         max = y;
    return max;
}

int main(){

    largenum<int> largei; //tip prametresi int olacak sekilde class tanimladik
    largenum<float> largef;//tip prametresi float olacak sekilde class tanimladik
    

    int maxi=largei.get_largenum(5,6);
    float maxf= largef.get_largenum(5.4,6.8);

    cout <<"maxi : "<<maxi<<endl;
    cout<<"maxf : "<<maxf<<endl;


    return 0;
}
