#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct Agenda{
       char nome[50];
       int telefone;
       char email[50];
       }typedef agenda;
       
agenda contato[10];
int auxiliar[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};


void Ordenacao(int tamanho){
     int i, j,comp;
     char selecionado[20];
     for(i=1;i<tamanho;i++){
        if(auxiliar[i]==-1) break;
        strcpy(selecionado,contato[auxiliar[i]].nome); 
        j=i-1;
        
        while((j>=0)&& strcmp(selecionado,contato[auxiliar[j]].nome)<0){
             int troca=auxiliar[j+1];
             auxiliar[j+1]=auxiliar[j];
             auxiliar[j]=troca;             
             j--;
        }
     }
}
void MostrarTodosContatos(){
     system("cls");
     printf("Todos os Contatos:\n");
     int i;
     for(i=0;i<10;i++){
        printf(" %s %d  \n",contato[auxiliar[i]].nome,auxiliar[i]);
     }
     }
void MostrarContato(){
     int i;
     system("cls");
     char digitado[50];
     printf("Digite o nome do contato:\n");
     scanf(" %s",&digitado);
     for(i=0;i<10;i++){
         if(strcmp(contato[i].nome,digitado)==0){
             printf("Nome: %s     Numero de Registrio: %d\n",contato[i].nome,i);
             printf("Telefone: %i\n", contato[i].telefone);                   
             printf("E-mail: %s\n", contato[i].email);
             break;}
     }
     
}
void AdicionarContato(){
     int i;
     for(i=0;i<10;i++){
         printf("ENTROU");
         if(auxiliar[i]==-1){
             printf("Digite o nome do contato:\n");
             scanf(" %s", &contato[i].nome);
             fflush(stdin);
             printf("Digite o telefone do contato:\n");
             scanf("%d", &contato[i].telefone);
             fflush(stdin);
             printf("Digite o email do contato:\n");
             scanf(" %s", &contato[i].email);
             fflush(stdin);
             auxiliar[i]=i;
             Ordenacao(10);
             break;
             }
     }
     system("cls");
}
void AlterarContato(){
     int i;
     char alterar[50];
     printf("Digite o nome do contato que deseja alterar:\n");
     scanf(" %s",&alterar);
     for(i=0;i<10;i++){
         if(strcmp(alterar,contato[i].nome)==0){
             printf("Digite o novo número:\n");
             scanf("%d",&contato[i].telefone);
             printf("Digite o novo email:\n");
             scanf(" %s", &contato[i].email);                                       
         }
     }
     system("cls");
}

int main(){
    int op=0;
    system("color F9");
    do{
    printf("Aperte 1 para Adicionar um Contato\n");
    printf("Aperte 2 para Alterar um Contato\n");
    printf("Aperte 3 para Mostrar o Contato\n");
    printf("Aperte 4 para Mostrar todos os Contatos\n");
    printf("Aperte 5 para Sair\n");
    scanf("%d",&op);
    switch (op){
           case 1: AdicionarContato();break;
           case 2: AlterarContato();break;
           case 3: MostrarContato();break;
           case 4: MostrarTodosContatos();break;
           }
    }while(op!=5);
    system("PAUSE");
    }
