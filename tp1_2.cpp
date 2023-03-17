#include <stdio.h>
#include <stdlib.h>
int potencia(int num);
void PotenciaV(int *num);
void muestra(int *num);
void invertir(int *a, int *b);
void mayor(int *a, int *b);

int main(){
    int num=3,pot,a=1,b=2;
    int *pnum=&num,*pa=&a,*pb=&b;
    pot=potencia(num);
    printf("%d\n",pot);
    PotenciaV(pnum);
    muestra(pnum);
    invertir(pa,pb);
    mayor(pa,pb);

    return 0;
}

int potencia(int num){
    return(num*num);
}

void PotenciaV(int *num){
    *num=(*num )* ( *num);
    printf("%d\n",*num);
}

void muestra(int *num){
    printf("%d\n",*num);
    printf("%p\n",num);
}

void invertir(int *a, int *b){
    printf("%d %d",*a ,*b);
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    printf("%d %d",*a ,*b);

}

void mayor(int *a, int *b){
    if(*a<*b){
        printf("%d\n",*b);
        printf("%d\n",*a);
    } else {
        printf("%d\n",*a); 
        printf("%d\n",*b);
    }

}