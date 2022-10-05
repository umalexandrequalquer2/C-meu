#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

double d1,d2,d3,d4,d5;
////////////////////////////// daqui para cima tudo é global 

int main(){
    int n1;
    int n2;
    int n3;

    n1 = 100;
    n2= 100;
    cout <<""<<n1<<"\n";
    if(n1 != n2)
    {n1++; cout <<n1<< "\n";}
    else
    {cout<<"igual";}

    return 0;
}

