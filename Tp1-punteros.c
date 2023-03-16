#include <stdio.h>
#include <stdlib.h>

int main (){
    int num=1,tamano;
    int *pnum=&num;
    printf("%p\n",pnum);
    printf("%p\n",&num);
    printf("%p\n",&pnum);
    tamano=sizeof(num);
    printf("%d\n",tamano);
    printf("%d\n",*pnum);

}
