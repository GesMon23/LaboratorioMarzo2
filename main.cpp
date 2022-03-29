#include<iostream>
#include "biblioteca.hpp"
using namespace std;
int main(int argc, char**argv){
   int Num, ResulFact;
   printf("FACTORIAL DE UN NUMERO \n");
   printf("INGRESE EL NUMERO AL QUE LE QUIERE SACAR FACTORIAL: "); 
   scanf("%d", &Num);
   ResulFact=FactRecur(Num);
   printf("EL FACTORIAL DEL NUMERO %d ES: %d \n", Num, ResulFact);
   printf("%d! = %d \n", Num, ResulFact);
   system("pause");
}

