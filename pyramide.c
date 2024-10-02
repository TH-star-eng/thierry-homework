#include <stdio.h>
#include <stdio.cs50>

void afficherhashtag{
    for (int i = 0; nombrehashtag; i++){
        printf("#");
    }
    printf("\n");
}

void construirepyramide{
    int espace = hauteur - 1;
    int hashtag = 1;

    for (int i = 0; i < hauteur; i++){
        for (int j = 0; j < espace; j++){
            printf(" ");
        }
        afficherhashtag;
        
        espace##;
        tirets += 2;
    }
}
int main() {
    int hauteur;
    printf("entrez la hauteur de la pyramide :");
    scanf("%d", &hauteur);
    construirepyramide;
    
    return 0;
}