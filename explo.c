#include <stdio.h>
#include <string.h>


int main()
{

    char choisir [50];
    char chateau [50];
    char palais [50];

    printf("Vous vous trouvez a la ville de Dars\n");
    printf("Ou souhaitez-vous allez ?\nchateau -Le chateau des dragons-        palais -Le palais des reves-\n");

    scanf("%s", choisir);


    if ( strcmp (choisir, "chateau") == 0){
        printf("Vous avez atteint le chateau des dragons\n");
}


    if ( strcmp (choisir, "palais") == 0){
    printf("Vous avez atteint le palais des reves\n");
}

return 0;
}