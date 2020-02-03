#include <stdio.h>
#include <string.h>



struct lieu{
    char nomLieu[100]; 
    char info[100];
    int difficulte;
    char lieuNext [100];
};

typedef struct lieu lieu;
lieu camps = {"camps", "Endroit de repos ou les explorateurs peuvent se reposer",5,"palais && chateau"};
lieu village = {"village", "Petit village ou la pauvreté règne",4,"palais"};
lieu foret = {"foret", "Un endroit paisible ou vivent de nombreuses petites betes",3,"chateau"};
lieu palais = {"palais", "Un endroit ou seul les nobles et riches on acces",10,"cité perdu"};
lieu chateau = {"chateau", "Un endroit ou seul les grands guerriers et dompteurs de betes on acces",12,"cité perdu"};


int lieu1(){
    char lieu2 [50];
    char choisir [50];

        printf("Que souhaitez vous faire ? lieu1 -comprendre les problemes dans le village-      lieu2 -foret-  lieu3 -camp-       lieu4 -palais des reves-      lieu5 -chateau-\n");

                scanf("%s", choisir);
            if ( strcmp (choisir, "lieu4") == 0){
            printf("Vous avez atteint le palais des reves\n");
}
            if ( strcmp (choisir, "lieu1") == 0){
            printf("Vous avez comprit que la pauvrete regne sur ce pays et qu'il faut aller en parler au instance superieur\n");
            lieu1();
}

          if ( strcmp (choisir, "lieu5") == 0){
            printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
            lieu1();
}
          if ( strcmp (choisir, "lieu3") == 0){
            printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
            lieu1();
}
          if ( strcmp (choisir, "lieu2") == 0){
            printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
            lieu1();
}
}

int lieu2(){
    char choisir [50];
        printf("Que souhaitez vous faire ? lieu1 -le village-    lieu2 -tamer des bete-     lieu3 -camp-     lieu4 -palais-     lieu5 -chateau des dragons-\n");


    scanf("%s", choisir);

            if ( strcmp (choisir, "lieu1") == 0){
            printf("Vous avez atteint le village \n");
            lieu1();
}

            if ( strcmp (choisir, "lieu5") == 0){
            printf("Vous avez atteint le chateau des dragons\n");
}
            if ( strcmp (choisir, "lieu5") == 0){
            printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
            lieu2();
}

            if ( strcmp (choisir, "lieu2") == 0){
            printf("Vous avez tamer des betes mais vous comprenez que toutes vos betes ne seront pas suffisantes pour avoir une bonne place au chateau\n");
            lieu2();
}

            if ( strcmp (choisir, "lieu3") == 0){
            printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
            lieu2();
}
}
int lieu3(){
    char choisir [50];
        printf("Que souhaitez vous faire ? lieu1 -le village-   lieu2 -la foret-     lieu3 -recrutez des soldats-    lieu4 -palais-    lieu5 -chateau-\n"); 


        scanf("%s", choisir);

            if ( strcmp (choisir, "lieu1") == 0){
            printf("Vous avez atteint le village \n");
            lieu1();
}
            if ( strcmp (choisir, "lieu3") == 0){
            printf("Vous avez recruter une petite armee\n");
            lieu3();
}
            if ( strcmp (choisir, "lieu2") == 0){
            printf("Vous avez atteint la foret \n");

            lieu2();
}
              if ( strcmp (choisir, "lieu4") == 0){
            printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
            lieu3();
}
              if ( strcmp (choisir, "lieu5") == 0){
            printf("Vous n'avez pas acces a ce lieu depuis la ou vous etes\n");
            lieu3();

}
}


int main()
{ 

    char choisir [50];
    char chateau [50];
    char palais [50];
    char foret [50];
    char village [50];
    char camp [50];

    printf("Vous vous trouvez a la ville de Dars\n");

    printf("Ou souhaitez-vous allez ?\nlieu1 -Petit village pauvre-      lieu2 -Foret paisible-      lieu3 -camp de repos-\n");

    scanf("%s", choisir);

    if ( strcmp (choisir, "lieu1") == 0){
        printf("Vous avez atteint un petit village\n");
    lieu1();
}
    if ( strcmp (choisir, "lieu2") == 0){
    printf("Vous avez atteint une foret \n");
    lieu2();
}
    if ( strcmp (choisir, "lieu3") == 0){
    printf("Vous avez atteint un camp\n");
    lieu3();
}


return 0;
}