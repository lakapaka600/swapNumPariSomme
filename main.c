#include <stdio.h>
int SommaPariInUnIntervallo(int a,int b) {
    int risultato=0;
    if(a>=b) {
        int swapCavia=a;
        a=b;
        b=swapCavia;

    }
        for(int i=a;i<=b;i++) {
            if(i%2==0) {
                risultato+=i;



}
}
    return risultato;
    }

int main(void) {
    int a;
    int b;
    printf("Inserisci un numero intero: ");
    scanf("%d",&a);
    printf("Inserisci un numero intero: ");
    scanf("%d",&b);
    printf("il risultato è %d",SommaPariInUnIntervallo(a,b));



    return 0;
}
