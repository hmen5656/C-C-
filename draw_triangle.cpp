/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: H�seyin
 *
 * Created on September 24, 2016, 12:31 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   int i,j,z,boyut;
   boyut=10;
   for(i=1 ;i<=boyut;i++){
        for(j=boyut;j>i;j--)
             cout<<" ";

        for(z=1;z<=i;z++)
            cout<<z<<" ";
    cout<<endl;
   }
   system("pause");
    return 0;
}

