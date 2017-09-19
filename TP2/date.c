#include <stdio.h>


*/def type pr representer date*/
typedef unsigned int Jour;

typedef enum{jan,fev,mar,avr,mai,jun,jui,aou,sep,oct,nov,dec} Mois;
/*attention jan =0, fev =1...*/

typedef unsigned int Annee;

typedef struct {
    Jour jour;
    Mois mois;
    Annee annee; } Date;
    
/* affichage date ecran*/

void afficheDate(date d) {
    printf(%u/%u/%u\n,d.jour,d.mois,);
