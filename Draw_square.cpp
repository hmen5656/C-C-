
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
int i,j,kose,kenar;
cin>>kose;
cin>>kenar;
for(j=1;j<=kose;j++){
    if(j==1||j==kose){
        for(i=1;i<=kenar;i++)
        cout<<"* ";
        cout<<endl;
        continue;
    }

    for(i=1;i<=kenar;i++){
        if(i==1||i==kenar)
            cout<<"* ";
        else
            cout<<"  ";
  }
cout<<"hmen";
    cout<<endl;
}
 system("pause");
return 0;}


