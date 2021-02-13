//Exemplo de Odernação de strings utilizando InsertionSort

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char nomes[5][20]={"paulo","roberto","ana","pablo","flavia"};

void insertionSort(int tamanho){
    int i,j;
    char selecionado[20];
    for(i=1;i<tamanho;i++){
    
        strcpy(selecionado,nomes[i]);
        j=i-1;
        
        while((j>=0) &&  strcmp(selecionado,nomes[j])>0){
            strcpy(nomes[j+1],nomes[j]);
            j--;
        }
        
        strcpy(nomes[j+1],selecionado);
    }                      
}

void apresenta(){
    int i;
    for(i=0;i<5;i++)
        printf("%s ",nomes[i]);               
}

main(){
    insertionSort(5);
    apresenta();
    system("pause");       
}
