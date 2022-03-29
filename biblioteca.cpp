#include "biblioteca.hpp"
int FactRecur(int a) {
   if(a!= 0) 
   	return a*FactRecur(a-1); 
   else
   	return 1; 
}
