//
//  matrice.c
//  Librairie_Matrice
//
//  Created by Tony Marteau on 04/11/2015.
//  Copyright (c) 2015 TonyM. All rights reserved.
//

void afficherMatriceChar(char matrice[N][M])
{
    int i, j;
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}

void lireMatriceChar(char matrice[N][M])
{
    int i, j;
    
    for (i=0; i<N; i++) {
        printf("Ligne %i :\n");
        for (j=0; j<M; j++) {
            printf("Colone %i : ");
            scanf("%c", &matrice[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}

int presentMatriceChar(char matrice[N][M], char c)
{
    int i, j;
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            if(strcmp(matrice[i][j], c))
                return 1;
        }
    }
    
    return 0;
}

void sauvegarderMatriceCharFichier(char matrice[N][M], FILE * save)
{
    int i, j;
    
    fprintf(save, "%c", '\n');
    
    for(i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            fprintf(save, "%c", mat[i][j]);
        }
        fprintf(save, "%c", '\n');
    }
}

void afficherMatInt(int matrice[N][M])
{
    int i, j;
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            printf("%i ", matrice[i][j]);
        }
        printf("\n");
    }
}

void lireMatriceInt(int matrice[N][M])
{
    int i, j;
    
    for (i=0; i<N; i++) {
        printf("Ligne %i :\n");
        for (j=0; j<M; j++) {
            printf("Colone %i : ");
            scanf("%i", &matrice[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}

int presentMatriceInt(int matrice[N][M], int n)
{
    int i, j;
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            if(matrice[i][j]==n)
                return 1;
        }
    }
    
    return 0;
}

void sauvegarderMatriceIntFichier(int matrice[N][M], FILE * save)
{
    int i, j;
    
    fprintf(save, "%c", '\n');
    
    for(i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            fprintf(save, "%i", mat[i][j]);
        }
        fprintf(save, "%c", '\n');
    }
}

void sommeMatriceInt(int matrice1[N][M], int matrice2[N][M], int matriceR[N][M])
{
    int i, j;
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            matriceR[i][j]=matrice1[i][j]+matrice2[i][j];
        }
    }
}

int maxValeurMatriceInt(int matrice[N][M])
{
    int i, j;
    int max = matrice[0][0];
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            if (max < matrice[i][j])
            {
                max = matrice[i][j];
            }
        }
    }
    
    return max;
}

int minValeurMatriceInt(int matrice[N][M])
{
    int i, j;
    int min = matrice[0][0];
    
    for (i=0; i<N; i++) {
        for (j=0; j<M; j++) {
            if (min > matrice[i][j])
            {
                min = matrice[i][j];
            }
        }
    }
    
    return min;
}

