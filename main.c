#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int Menu;
printf("hello\n==Menu==\n");
printf("1: Ajouter un contact.\n");
printf("2:Modifier contact.\n");
printf("3:Rechercher un contact.\n");
printf("4:Supprimer un contact.\n");
printf("5:Sauvegarder et charger les contacts\n");
printf("veuillez entrer l'operation a effetue\n");
scanf("%d",&Menu);

while (Menu < 1 || Menu > 5)
{
    printf("Erreur\n");
    printf("veuillez entrer l'operation a effectue\n");
    scanf("%d",&Menu);
}
switch (Menu)
{
case 1:
    printf("Ajouter un contact.\n");
    break;
case 2:
    printf("Modifier contact.\n");
    break;
case 3:
    printf("Rechercher un contact.\n");
    break;
case 4:
    printf("Supprimer un contact.\n");
    break;
case 5:
    printf("Sauvegarder et charger les contacts\n");
    break;
default:printf("Erreur \n veuillez entrer l'operation\n");
    break;
}
printf("Hello world");
    return 0;
}
