#include <stdio.h>
#define n 20
#define m 6 
#include <time.h>

int forcabruta(char T[n], char P[m]){
    for(int i=0; i<n-m; i++){
        int j=0;
    while(j<m && T[i+j]==P[j])
        j++;
    if(j==m)
        return i;
    }
    return -1;
}



void main(){
    char t[n]= "abacaabaccabacabaabb";
    char p[m]= "abacab";

    clock_t start, end;
    start = clock();

    

    int aux= forcabruta(t, p);
    getchar();
    if(aux==-1)
        printf("Não foi encontrado essa substring na cadeia de caracteres T\n");
    else
        printf("A substring P foi encontrada na posição %d\n", aux);


    end = clock();
    printf("\n\n  %f seg.\n", ((double) (end - start)) / CLOCKS_PER_SEC);
}
