#include <stdio.h>


/*def type pr representer date*/
typedef unsigned int Jour;

typedef enum{jan,fev,mar,av,mai,jun,jul,aou,sep,oct,nov,dec} Mois;
/*attention jan =0, fev =1...*/

typedef unsigned int Annee ; 


 typedef struct {
	Jour jour ;
	Mois mois ; 
	Annee annee ; } Date ;

/* affichage d'une date a l'ecran */

void afficheDate (Date d) {
   printf("%u/%u/%u\n", d.jour, d.mois+1, d.annee) ;
   
}

int bisextil(int annee) 
{
    if ((annee%4==0) || (annee%400==0))
    {
        return 1 ;
    }
    else 
    { 
        return 0 ;
    }
}

int isDateValid(Date d)
{

    int nbrJour = 0;
    switch (d.mois)
    {
    case jan:
    case mar:
    case mai:
    case jul:
    case aou:
    case oct:
    case dec:
        nbrJour = 31;
        break;
        
    case fev:
        if( bisextil( d.annee ) == 1 )
        {
            nbrJour = 29;
        }
        else
        {
            nbrJour = 28;
        }
        break;  
    
    case av:
    case jun:
    case sep:
    case nov:
        nbrJour =30;
        break;
    
    default:
        return 0;
        break;
    
    }
    
    if ((d.jour>=1) && (d.jour<=nbrJour))   
    {
        return 1;
       
    }
    else 
    {
        return 0;
    }   
}

Date entrerDate()
{
    Date d;

    printf("Entrer une date valide\n");
    printf("Jour? ");  scanf("%u",&(d.jour));
    int m;
    printf("Mois entre 1 et 12? ");  scanf("%u",&(m));
    d.mois = m -1;
    printf("Annee? "); scanf("%u",&(d.annee));
    
    if( bisextil(d.annee) == 1 )
    {
        printf("annee est bisextile\n") ;
    }
    else
    {
        printf("annee non bisextile\n");
    }
        
    if (isDateValid(d)==1)
    {
        printf("format date valide\n");
    }
    else
    {
        printf("format date incorrect\n");
    }
    afficheDate(d);
    
    return d;
}

/*fonction retourne 1 si d1 < d2; sinon 0*/
int isolder(Date d1, Date d2)
{   
    if (d1.annee < d2.annee)
    {
        return 1;
    }
    else if (d1.annee > d2.annee)
    {
        return 0;
    }
    else /* Si l'année est egale */
    {
        if (d1.mois < d2.mois)
        {
            return 1;
        }
        else if (d1.mois > d2.mois)
        {
            return 0;
        }
        else 
        {
            if(d1.jour < d2.jour)
            {
                return 1;
            }
            else
            {
                return 0;
            }
                      
        }
        
    }
    
}

int main() 
{
    Date d1, d2;
    d1= entrerDate();
   
    d2= entrerDate();
    
    printf("date 1:\n");
    afficheDate(d1);
    printf("date 2:\n");
    afficheDate(d2);
    
    /* Affiche les dates dans l'ordre chronologique */
    if( isDateValid(d1)==1 && isDateValid(d2)==1)
    {
        if( isolder(d1,d2) == 1 )
        {
            printf("annee d1<d2\n") ;
            afficheDate(d1);
            afficheDate(d2);
        }
        else
        {
            printf("annee d2<d1\n");
            afficheDate(d2);
            afficheDate(d1);
        }  
    }
    
    



 return 0 ;
}

