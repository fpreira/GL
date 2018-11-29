int main(void)
{

unsigned char combi_joueur[6] =
{30,47,11,29,16,7};
unsigned char combi_win[6] =
{45,47,24,11,17,3};
 unsigned char i=0;
 unsigned char n;	

 {
for(i=0;i<6;i=i+1)
  {
	if (combi_joueur[0]==combi_win[i])
	   n=n+1;
	else n=n+0 ;	 
 	if (combi_joueur[1]==combi_win[i])
	   n=n+1;
	else n=n+0 ;
 	if (combi_joueur[2]==combi_win[i])
	   n=n+1;
	else n=n+0 ;
 	if (combi_joueur[3]==combi_win[i])
	   n=n+1;
	else n=n+0 ;
 	if (combi_joueur[4]==combi_win[i])
	   n=n+1;
	else n=n+0 ;
 	if (combi_joueur[5]==combi_win[i])
	   n=n+1;
	else n=n+0 ;
	if (combi_joueur[6]==combi_win[i])
	   n=n+1;
	else n=n+0 ;
  }
  return 0;
 }
}
