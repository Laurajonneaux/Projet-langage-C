#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define FICHIER_SCORES "score.txt"
int addition();
int multiplication();
int soustraction();
int table_multiplication();
int division();
void SauvegarderScore(const char *nom, int score);
void AfficherScores();
int RecupererScore(const char *nom);
void AfficherDernierScore(const char *nom);
int score=0;
int main(){
int n,r;
char nom[50];
printf("Entrez votre prenom?\n");
scanf ("%s", nom);
AfficherScores();
score= RecupererScore(nom);
printf("Votre score est : %d ", score );
printf("\n|--------------------------------------------|\n");
printf("|1.Addition,                                 |\n");
printf("|2.Soustraction,                             |\n");
printf("|3.Multiplication,                           |\n");
printf("|4.Table de multiplication,                  |\n");
printf("|5.Division,                                 |\n");
printf("|0.Sortir du jeu.                            |\n");
printf("|Quel est votre choix?                       |\n");
printf("|--------------------------------------------|\n");
scanf("%d",&n);
while (n!=0){
    switch(n)
    {
    case 1 : printf("Addition:\n");
    addition(); break;
    case 2 : printf("Soustraction:\n");
    soustraction(); break;
    case 3 : printf("Multiplication:\n");
    multiplication(); break;
    case 4 :printf("Table de multiplication:\n");
    table_multiplication(); break;
    case 5 :printf("Division:\n");
    division(); break;
    default : printf("sortir du jeu.\n");
    }

printf("|1.Addition,                                 |\n");
printf("|2.Soustraction,                             |\n");
printf("|3.Multiplication,                           |\n");
printf("|4.Table de multiplication,                  |\n");
printf("|5.Division,                                 |\n");
printf("|0.Sortir du jeu.                            |\n");
printf("|Quel est votre choix?                       |\n");
scanf("%d",&n);
}
printf("Merci de votre visite!\n");
printf("Votre score est : %d\n",score);
SauvegarderScore(nom, score);
AfficherScores();
RecupererScore(nom);
AfficherDernierScore(nom);
return 0;
}



int addition(const char *nom){
    int v1,v2,r,s,score,essai=1, reponse;
    srand(time(NULL));
    printf("Nombre au hasard : %d\n", rand ());
    v1 = rand() %101;
    printf("nombre aleatoire entre 0 et 100 : %d\n", v1);
    v2=rand()%100+1;
    printf("nombre aleatoire entre 1 et 100 : %d\n", v2);
    r=v1+v2;
    printf("Entrez votre resultat \n");
    scanf("%d",&s);
    while (essai<4)
    {
        if (s==r && essai==1)
        {
            printf("Bravo +10 !\n");
            score=score+10;
            essai=5;
        }
        else
        {
            essai=essai+1;
            printf("Reessayez : Entrez votre reponse\n");
            scanf("%d",&s);
            if (s==r && essai==2)
            {
                printf("Bravo +5 !\n");
                score=score+5;
                essai=5;
            }
            else
            {
                essai=essai+1;
                printf("Reessayez : Entrez votre reponse\n");
                scanf ("%d",&s);
                if (s==r && essai==3)
                {
                    printf("Bravo +1 !\n");
                    score++;
                    essai=5;
                }
                else
                {
                    printf("Perdu...\n");
                    essai++;
                }
            }
        }
    }
return EXIT_SUCCESS;
}





int multiplication(){
    int v1,v2,r,s,essai=1;
    v1 = rand() %11;
    v2=rand()%10+1;
    printf("Combien fait %d x %d", v1, v2);
    r=v1*v2;
    printf("\nEntrez votre resultat \n");
    scanf("%d",&s);
    while (essai<4)
    {
        if (s==r && essai==1)
        {
            printf("Bravo +10 !\n");
            score=score+10;
            essai=5;
        }
        else
        {
            essai=essai+1;
            printf("Reessayez : Entrez votre reponse\n");
            scanf("%d",&s);
            if (s==r && essai==2)
            {
                printf("Bravo +5 !\n");
                score=score+5;
                essai=5;
            }
            else
            {
                essai=essai+1;
                printf("Reessayez : Entrez votre reponse\n");
                scanf ("%d",&s);
                if (s==r && essai==3)
                {
                    printf("Bravo +1 !\n");
                    score=score+1;
                    essai=5;
                }
                else
                {
                    printf("Perdu...\n");
                    essai=essai+1;
                }
            }
        }
    }
return EXIT_SUCCESS;
}


int soustraction(const char *nom){
    int v1,v2,v3,r,s,essai=1;
    srand(time(NULL));
    printf("Nombre au hasard : %d\n", rand ());
    v1 = rand() %101;
    printf("nombre aleatoire entre 0 et 100 : %d\n", v1);
    v2=rand()%100+1;
    printf("nombre aleatoire entre 1 et 100 : %d\n", v2);
    if (v1<v2)
    {
        v3=v1;
        v1=v2;
        v2=v3;
    }
    r=v1-v2;
    printf("Entrez votre resultat \n");
    scanf("%d",&s);
    while (essai<4)
    {
        if (s==r && essai==1)
        {
            printf("Bravo +10 !\n");
            score=score+10;
            essai=5;
        }
        else
        {
            essai=essai+1;
            printf("Reessayez : Entrez votre reponse\n");
            scanf("%d",&s);
            if (s==r && essai==2)
            {
                printf("Bravo +5 !\n");
                score=score+5;
                essai=5;
            }
            else
            {
                essai=essai+1;
                printf("Reessayez : Entrez votre reponse\n");
                scanf ("%d",&s);
                if (s==r && essai==3)
                {
                    printf("Bravo +1 !\n");
                    score=score+1;
                    essai=5;
                }
                else
                {
                    printf("Perdu...\n");
                    essai=essai+1;
                }
            }
        }
    }
return EXIT_SUCCESS;
}

int division(const char *nom){
    int d1,d2,d3,q1,q2,r2,r1,essai=1;
    srand(time(NULL));
    d1 = rand() %101;
    d2=rand()%100+1;
    if (d1<d2)
    {
        d3=d1;
        d1=d2;
        d2=d3;
    }
    printf("Combien fait %d/%d :\n", d1, d2);
    q1=d1/d2;
    r1=d1%d2;
    printf("Entrez le quotient : \n");
    scanf("%d",&q2);
    printf("Entrez le reste : \n");
    scanf("%d",&r2);
    while (essai<4)
    {
        if (q1==q2 && r1==r2 && essai==1)
        {
            printf("Bravo +10 !\n");
            score=score+10;
            essai=5;
        }
        else
        {
            essai=essai+1;
            printf("Reessayez : Entrez le quotient\n");
            scanf("%d",&q2);
            printf("Reessayez : Entrez le reste\n");
            scanf("%d",&r2);
            if (q1==q2 && r1==r2 && essai==2)
            {
                printf("Bravo +5 !\n");
                score=score+5;
                essai=5;
            }
            else
            {
                essai=essai+1;
                printf("Reessayez : Entrez le quotient\n");
                scanf("%d",&q2);
                printf("Reessayez : Entrez le reste\n");
                scanf("%d",&r2);
                if (q1==q2 && r1==r2 && essai==3)
                {
                    printf("Bravo +1 !\n");
                    score=score+1;
                    essai=5;
                }
                else
                {
                    printf("Perdu...\n");
                    essai=essai+1;
                }
            }
        }
    }
return EXIT_SUCCESS;
}


int table_multiplication(){
int i,j,n,m,r;
printf("Quelle table voulez vous afficher :\n");
scanf("%d",&n);
for (j=1;j<=10;j++)
{
    printf("%d",n);
    printf("*");
    printf("%d",j);
    printf("=\n");
}
printf("Entrez dans l'ordre crroissant votre resultat\n");
for (i=1;i<=10;i++)
{
    m=i*n;
    scanf("%d",&r);
    if (m==r)
    {
        printf("Bravo!\n");
        score=score+1;
    }
    else
    {
        printf("Perdu...\n");
    }

}
}


void SauvegarderScore(const char *nom, int score) {
    FILE *f = fopen("FICHIER_SCORES", "a");
    if (f == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return;
    }

    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    fprintf(f, "%s %02d/%02d/%04d %02d:%02d:%02d %d\n",
            nom, t->tm_mday, t->tm_mon + 1, t->tm_year + 1900,
            t->tm_hour, t->tm_min, t->tm_sec, score);

    fclose(f);
    printf("Score sauvegarder avec succes\n");
}

void AfficherScores() {
    FILE *f = fopen("FICHIER_SCORES", "r");
    if (f == NULL) {
        printf("Aucun score enregistre pour le moment.\n");
        return;
    }

    char ligne[100];
    printf("\n--- Scores enregistres ---\n");
    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        printf("%s", ligne);
    }
    fclose(f);
}

int RecupererScore(const char *nom) {
    FILE *f = fopen("FICHIER_SCORES", "r");
    if (f == NULL) {
        return 0;
    }

    char nomFichier[50];
    int score = 0, dernierScore = 0;
    char date[20], heure[20];

    while (fscanf(f, "%s %s %s %d", nomFichier, date, heure, &score) == 4) {
        if (strcmp(nomFichier, nom) == 0) {
            dernierScore = score;
        }
    }

    fclose(f);
    return dernierScore;
}

void AfficherDernierScore(const char *nom) {
    FILE *f = fopen("FICHIER_SCORES", "r");
    if (f == NULL) {
        printf("Aucun score enregistre pour le moment.\n");
        return;
    }

    char nomFichier[50];
    int score = 0, dernierScore = 0;
    char date[20], heure[20];
    while (fscanf(f, "%s %s %s %d", nomFichier, date, heure, &score) == 4) {
        if (strcmp(nomFichier, nom) == 0) {
            dernierScore = score;
        }
    }

    fclose(f);

    if (dernierScore == 0) {
        printf("Aucun score trouvé");
    } else {
        printf("\n--- Score de %s ---\n", nom);
        printf("Date : %s %s\n", date, heure);
        printf("Score : %d\n", dernierScore);
    }
}
