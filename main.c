#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(NULL));
int n=1 + rand()%100;
int v=0 , i=1;
puts("jai tere un numbre au hasard \t essaye de le trouve");
while (v!=n){
    i++;
    printf("entrer votre numbre\n");
      scanf("%d",&v);
    printf("tentative (%d)\n",i);
    if (v<n)
        printf("votre numbre (%d) est trop ptit \n essaye un numbre plus grand\n",v);
    else if (v>n)
        printf("votre numbre (%d)est trop grand \n essaye un numbre plus ptit\n",v);

        else {
            printf("bravo!!!! ces bien la valeur (%d) ",v);
            printf("votre score est (%d)\n",i);


}
}

    return 0;
}
