#include <stdio.h>

int main(){
    int anno; 
    printf("Inserire l'anno: ");
    scanf("%d", &anno);

    if(anno % 4 == 0 && anno % 100 != 0)
    {
        printf("L'anno è bisestile\n");
    }
    else if(anno % 400 == 0)
    {
        printf("L'anno è bisestile\n");
    }
    else
    {
        printf("L'anno non è bisestile\n");
    }
}