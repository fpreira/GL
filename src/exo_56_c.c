
main(void)
{
 unsigned char dist[10] = 
 {-612,-219,-197,0,19,33,80,755,841,903} ;
 unsigned char i=1 ; 
 {
 for (i=1;i<10;i=i+1)
 dist[i]=dist[i]-dist[i-1] ;
 }
 return 0;
}
	 
