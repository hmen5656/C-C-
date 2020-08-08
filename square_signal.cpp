#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;
int main( )
{
    
    ofstream outStream;
    outStream.open("outfile.txt");

    int first, second;
    char third;
    string dizi="";
    while(outStream)
    {

        for(int i=0;i<1000;i++){
            if((i/10)%2==1)
                outStream<<1<<endl;
            else
                outStream<<0<<endl;
        }
        outStream.close( );


    }
    
return 0;
}