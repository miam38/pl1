#include <stdio.h>

/*programme qui affiche le resultat "1h 35m 20s" pour 1h35,25*/

typedef unsigned int Seconde;
typedef unsigned int Minute;
typedef unsigned int Heure ; 

 typedef struct {
	Seconde seconde ;
	Minute minute; 
	Heure heure; } Horaire ;





/*h=[0 23] ;m=[0 59]; s=[0,59]]*/

/*fonction qui retourne des secondes*/
Seconde getSecondeFromUser()
{
    Seconde s;

    printf("Entrer un entier seconde entre 0 et infini \n");
    printf("seconde? ");  scanf("%u",&(s));
    
    
    return s;
}

Horaire convertSecondetoHoraire(Seconde s)

{
    Seconde sec = s;
    Horaire h;
    
    /*conv seconde en heure*/
    h.heure=sec/3600;
    sec=s%3600;
    
    h.minute=sec/60;
    sec=sec%60;
    
    h.seconde=sec;
    
    return h;
}

void afficheHoraire (Horaire h) 
{
   printf("%uh%umn%us\n", h.heure, h.minute, h.seconde) ;
}

int main()
{
    Horaire h;
    
    Seconde sc = getSecondeFromUser();
    h = convertSecondetoHoraire(sc);
    afficheHoraire (h); 
    




    return 0;
}
