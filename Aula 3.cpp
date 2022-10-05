#include <iostream>         // tudo aqui é global pode ser usando por todas as funçoes 
#include <stdio.h>                            // n1 = n1 + 1; |  n1 = n1 - 1;
#include <stdlib.h>                          // n1 += 1;      |  n1 -= 1;  
#include <string>                           // n1++; pós      |  n1--;
#define pi 3.14159265358979323846          // ++n1; pré       |  --n1;
int n1,n2,n3,n4;                          //  
using namespace std;
                             // Pré e pos fixado(pre ele acrecenta ou tira e depois mostra e o pos mostra depois acrecenta ou tira.)
int main (){                // (pré) {++n1} | (pós) {n1++}
n1 = 1;                    //
cout << n1<<"\n";         //
n1 = n1 + 1;             //   
cout << n1<<"\n";       // encremento  forma completa
n1+=1;                 // encremento ou decremento resumido
n1++;                 // encremento ou decremento resumido de 1 ou -- para menos 1

cout << n1<<"\n";



return 0;
}