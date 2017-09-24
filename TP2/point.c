#include <stdio.h>

typedef struct {int abscisse;int ordonee;} Point;

int main() 
{
    Point A,B,C;
    

    char aligne;
    char ortho;
    aligne=1;/*vrai*/
    ortho=1;/*vrai*/

    printf("entrer ordonnée et abscisses du point A\n");
    scanf("%d%d",&(A.abscisse),&(A.ordonee));
    printf("A.abscisse=%d; A.ordonee=%d\n", A.abscisse, A.ordonee);
    printf("entrer ordonnée et abscisses du point B\n");
    scanf("%d%d",&(B.abscisse),&(B.ordonee));
    printf("B.abscisse=%d; B.ordonee=%d\n", B.abscisse, B.ordonee);
    printf("entrer ordonnée et abscisses du point C\n");
    scanf("%d%d",&(C.abscisse),&(C.ordonee));
    printf("C.abscisse=%d; C.ordonee=%d\n", C.abscisse, C.ordonee);

    /*attention que xa != xb et xa != xc */
    float m;
    float m1;
    int p;


    if ((A.abscisse != B.abscisse) && (A.abscisse != C.abscisse)) 
    {
        m=(float)(B.ordonee-A.ordonee)/(B.abscisse-A.abscisse);
        m1=(float)(C.ordonee-A.ordonee)/(C.abscisse-A.abscisse);
        printf("valeur de m %f\nvaleur de m1 %f\n", m,m1);
    }
    else
    {
    }
    
    
    if (m==m1) 
    {
        aligne = 1;
        printf("les points A B C sont alignes %d\n",aligne);
    }
    else 
    {
        aligne = 0;
        printf("les points A B C ne sont pas alignes%d\n",aligne);
    }
    if ((A.abscisse != B.abscisse) && (A.abscisse != C.abscisse) )
    
        {
        p=(B.abscisse-A.abscisse)*(C.abscisse-A.abscisse)+(B.ordonee-A.ordonee)*(C.ordonee-A.ordonee);
        }
        if (p=0) 
        {
        ortho=1;
        printf("les points A B C sont orthogonaux %d",ortho);
        }
        else 
        {
        ortho=0;
        printf("les points A B C ne sont pas orthogonaux %d",ortho);
        }
    return 0;
}
