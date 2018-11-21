

main(void)
{
 unsigned char bin[10] = 
 {0,19,841,-219,-197,33,-612,755,80,903} ;
 unsigned char seuilb=-100 ;
 unsigned char seuilh=200 ;
 unsigned char i=0 ; 
 {
 for (i=0;i<10;i=i+1)

  {
 
 if (bin[i]>seuilh)
	bin[i]=seuilh;
			
 else if (bin[i]<seuilb)		
         bin[i]=seuilb;
 
 else bin[i]=bin[i];        
  }
 }
 return 0;
}
	 
