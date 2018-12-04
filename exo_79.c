#include <ansi_c.h>


int main(void)

{
	char chaine[100] ;
	char phrase[100] ;
	char nom[100] ;  
	char prenom[100] ;  
	long int annee_de_naissance;
	
	scanf("%s",chaine);
	sscanf(chaine,"%s %s %lu",nom, prenom, &annee_de_naissance);
	sprintf(phrase,"nom, prenom, 2018-annee_de_naissance,");
	printf("%s",phrase);
	
	return 0;


	
}	
	
