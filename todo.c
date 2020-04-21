#include <stdio.h>
#include <conio.h>

int main(){

    FILE *arq;
    char getId[124], opcao[124], showTodoItems[2000], deleteItem[124], delete[200],  info[100], palavra[1000];
    

    while (1){
        
        printf("Para iniciar digite o comando que deseja, ou caso nao saiba os comandos de cor digite help: ");
        scanf("%s", &opcao);

        if (stricmp( opcao, "help" ) == 0){
            system("cls"); 
            printf("---Para adionar uma nova tarefa digite new depois insira o nome da tarefa, \n");
            printf("---Para remover uma tarefa digite remove em seguida digite o nome da tarefa que deseja remover, \n");
            printf("---Para ver suas tarefas digite show, \n");
            printf("---Para finalizar uma tarefa digite finish e em seguida o nome da tarefa, \n");
            printf("---Para salvar suas tarefas digite save, \n");
            printf("---E para finalizar este programa digite exit, \n");
            printf("---Nao use espacos, por favor!!!; \n"); 
        }if (stricmp( opcao, "new" ) == 0){
            system("cls"); 
            arq = fopen("tasks.txt", "a");
            printf("Digite o nome de sua nova Tarefa: ");
            scanf("%s", &getId);
            fprintf (arq,"%s \n",getId);
            fclose(arq);
        }if (stricmp( opcao, "show" ) == 0){
            system("cls");
            arq = fopen("tasks.txt", "r");
            printf("As tarefas que voce tem para fazer sao: \n");

            if(arq == NULL)
                printf("Erro, nao foi possivel abrir o arquivo\n");
            else
                while( (fgets(info, sizeof(info), arq))!=NULL )
                    printf("%s", info);
            fclose(arq);
        }if (stricmp( opcao, "remove" ) == 0){
            arq = fopen("tasks.txt", "a+");

            printf("Digite o nome da tarefa: \n");
            scanf("%s", &palavra);

            

           
           
        }
    }
}
