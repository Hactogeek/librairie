//
//  tableau.c
//  Librairie_Tableau
//
//  Created by Tony Marteau on 04/11/2015.
//  Copyright (c) 2015 TonyM. All rights reserved.
//

void afficherTabChar(char tableau[N])
{
    int i;
    
    for (i=0; i<N; i++) {
        printf("%c ", tableau[i]);
    }
}

void lireTabChar(char tableau[N])
{
    int i;
    
    for (i=0; i<N; i++) {
        printf("Colone %i : ");
        scanf("%c", &tableau[i]);
        printf("\n");
    }
}

int presentTableauChar(char tableau[N], char c)
{
    int i, j;
    
    for (i=0; i<N; i++) {
        if(strcmp(tableau[i], c))
            return 1;
    }
    
    return 0;
}

void sauvegarderTableauCharFichier(char tableau[N], FILE * save)
{
    int i, j;
    
    fprintf(save, "%c", '\n');
    
    for(i=0; i<N; i++) {
        fprintf(save, "%c", tableau[i]);
    }
}

void afficherTabInt(int tableau[N])
{
    int i;
    
    for (i=0; i<N; i++) {
        printf("%i ", tableau[i]);
    }
}

void lireTabInt(int tableau[N])
{
    int i;
    
    for (i=0; i<N; i++) {
        printf("Colone %i : ");
        scanf("%i", &tableau[i]);
        printf("\n");
    }
}

int presentTableauInt(int tableau[N], int n)
{
    int i, j;
    
    for (i=0; i<N; i++) {
        if(tableau[i]==n)
            return 1;
    }
    
    return 0;
}

void sauvegarderTableauIntFichier(int tableau[N], FILE * save)
{
    int i, j;
    
    fprintf(save, "%c", '\n');
    
    for(i=0; i<N; i++) {
        fprintf(save, "%i", tableau[i]);
    }
}

int maxValeurTabInt(int tableau[N])
{
    int i;
    int max = tableau[0];
    
    for (i=0; i<N; i++)
    {
        if (max < tableau[i])
        {
            max = tableau[i];
        }
    }
    
    return max;
}

int minValeurTabInt(int tableau[N])
{
    int i;
    int min = tableau[0];
    
    for (i=0; i<N; i++) {
        if (min > tableau[i])
        {
            min = tableau[i];
        }
    }
    
    return min;
}
