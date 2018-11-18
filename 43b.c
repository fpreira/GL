#include "stdio.h"
#include "TP_lib.h" 
#include "math.h" 

 main(void)
{
unsigned char n=1;
unsigned long int s1=3*n;	

while(s1<9876-3*n)
     {
	 n=n+1;
	 s1=s1+3*n;  
	 }
	 return 0 ;
} 
