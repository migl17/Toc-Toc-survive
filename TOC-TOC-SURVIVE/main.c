#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pontos = 0,dias=0;

int random_num() {
    return rand() % 9 + 1;
}

void pesoa() {
    system("color 0B");
    printf("    |     |            | |  __________        \n");
    printf("    |     |   /=====\\  | | |lembrar:  |         \n");
    printf("    |     |  ( 0   0 ) | | |ler manual|\n");
    printf("    |     |   \\__-__/  | | -----------          \n");
    printf("    |     |   __===__  | |             \n");   
    printf("    |     |  |       | | |             \n");
    printf("------------------------------------------\n");
    printf("   dias=%d    pontuacao=%d\n",dias,pontos);   
}

void logo() {
    printf("|                        |\n");
    printf("|                        |\n");
    printf("|      ~|~   _  ~|~   _  |\n");
    printf("|       | ()(_   | ()(_  |\n");
    printf("|                        |\n");
    printf("|       (`       .   _   |\n"); 
    printf("|       _)L||`\\/|\\/(/_   |\n");
    printf("|                        |\n");
    printf("   [1] iniciar\n   [2] sair\n\n"); 
    printf("  \nNAO DEIXE OS VAMPIROS ENTRAREM\n\n");                   
}

void humano(int n) {
    system("cls");
    switch(n) {
        case 1:
            printf("Pode me deixar entrar? Esqueci minha chave no apartamento.\n");
            pesoa();
            break;
        case 2: 
            printf("Pode me deixar entrar? O elevador ainda ta funcionando?\n");
            pesoa();
            break;
        case 3:  
            printf("Pode me deixar entrar? Eu moro no 8 andar.\n");
            pesoa();
            break;
    }
}

void suspeito(int n) {
    system("cls");
    switch(n) {
        case 4:
            printf("Pode me deixar entrar? Consigo ouvir todo mundo ai dentro.\n");
            pesoa();
            break;
        case 5: 
            printf("Pode me deixar entrar? Ta frio ficar esperando aqui fora…\n");
            pesoa();
            break;
        case 6:  
            printf("Pode me deixar entrar? Acho que voce ainda nao me viu por aqui.\n");
            pesoa();
            break;
    }
}

void vampiro(int n) {
    system("cls");
    switch(n) {
        case 7:
            printf("Pode me deixar entrar? Voltei mais cedo hoje\n");
            pesoa();
            break;
        case 8: 
            printf("Pode me deixar entrar? Seu cheiro chegou ate aqui\n");
            pesoa();
            break;
        case 9:  
            printf("Pode me deixar entrar? Eu vou entra a forca.\n");
            pesoa();
            break;
    }
}

void game() {
    system("cls");
    int i;
    int o;
    int continuar = 0;
    int temperatura = 0;
    int respiracao = 0;
    int hospede = random_num(); 
    
    switch (hospede) {
        case 1:
            humano(1);
            respiracao = 15;
            temperatura = 35;
            break;
        case 2:
            humano(2);
            respiracao = 16;
            temperatura = 36;
            break;
        case 3:
            humano(3);
            respiracao = 19;
            temperatura = 34;
            break;
        case 4:
            suspeito(4);
            respiracao = 20;
            temperatura = 35;
            break;
        case 5:
            suspeito(5);
            respiracao = 10;
            temperatura = 33;
            break;
        case 6:
            suspeito(6);
            respiracao = 15;
            temperatura = 30;
            break;
        case 7:
            vampiro(7);
            respiracao = 19;
            temperatura = 36;
            break;
        case 8:
            vampiro(8);
            respiracao = 3;
            temperatura = -3;
            break;
        case 9:
            vampiro(9);
            respiracao = 17;
            temperatura = 8;
            break;
        default:
            break;
    }

    do {
        printf("\n [1]pedir documentos     [2] checar respiracao\n [3] checar temperatura  [4]{deixar entrar}\n [5]{expulsar}           [6]manual do porteiro\n");
        scanf("%d", &i);
        system("cls");
        printf("\n\n");
        pesoa();
        switch(i) {
            case 1:
                if (hospede==1){
                 
                    printf("|nome: James\n");
                    printf("|idade:32\n");
                    printf("|05/06/1994\n");
                 

                }else if(hospede==2){
                    
                    printf("|nome: Alice\n");
                    printf("|idade:23\n");
                    printf("|01/04/2003\n");
                


                }else if(hospede==3){
                    
                    printf("|nome:Mikael\n");
                    printf("|idade:16\n");
                    printf("|18/05/2010\n\n");
                    


                }else if(hospede==4){
                    
                    printf("|nome:Gema\n");
                    printf("|idade:68\n");
                    printf("|05/04/1958\n\n");
                  

                }else if(hospede==5){
                  
                    printf("|nome:Laila\n");
                    printf("|idade:30\n");
                    printf("|21/08/1990\n\n");
                  

                }else if(hospede==6){
                    
                    printf("|nome:Antoni\n");
                    printf("|idade:45\n");
                    printf("|10/10/1981\n\n");
                   

                }else if(hospede==7){
                   
                    printf("|nome:Morticia\n");
                    printf("|idade:55\n");
                    printf("|30/09/1971\n\n");
                    

                }else if(hospede==8){
                   
                    printf("|nome:Alucard\n");
                    printf("|idade:24\n");
                    printf("|13/03/1889\n\n");
                   

                }else if(hospede==9){
                   
                    printf("|nome:Neftus\n");
                    printf("|idade:20\n");
                    printf("|31/02/2006\n\n");
                   

                }
                break;

            case 2:
                
                printf("\n%d respiracoes por minuto\n", respiracao);
               
                break;

            case 3:
               
                printf("\ntemperatura de %d graus\n", temperatura);
               
                break;

           case 4:
                if (hospede <= 6) {
                    system("color 0A");
                    printf("\nmorador seguro\n");
                    pontos = pontos + 2;
                    dias=dias+0.2;
                    
                    
                    int pausa;
                    printf("\nDigite 1 para continuar: ");
                    scanf("%d", &pausa);
                    
                    
                    game();
                    return;
                } else {
                    system("color 0C");
                    system("cls");
                    printf("\no vampiro entrou...\n\nGAME OVER\n");
                    
                    int pausa;
                    printf("\nDigite 1 para sair: ");
                    scanf("%d", &pausa);
                    
                    return;
                }
                break;

            case 5:
                if (hospede <= 6) {
                    system("cls");
                    system("color 0C");
                    printf("\nacusacao invalida\nGAME OVER\n");
                    
                    
                    int pausa;
                    printf("\nDigite 1 para sair: ");
                    scanf("%d", &pausa);
                   
                    
                    return;
                } else {
                    system("color 0C");
                    printf("\nvampiro contido, parabens\n");
                    pontos = pontos + 2;
                    dias=dias+0.2;
                    
                    int pausa;
                    printf("\nDigite 1 para continuar: ");
                    scanf("%d", &pausa);
                    
                    
                    game();
                    return;
                }
                break;

            case 6:
               
                printf("\n Manual do porteiro v1.6\n");
                printf("|1.Humanos respiram entre 15 a 20 vezes\n");
                printf("|2.Temperatura Humana fica entre 30 e 36 graus\n");
                printf("|3.Checar documentos eh importante\n");
            
                break;
            default:
                break;
        }
    } while(continuar == 0);

}

int main() {
    system("color 0C");
    srand(time(NULL));
    int menu;
    system("cls");
    logo();
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            game();
            break;
        case 2:
            system("cls");
            break;
        default:
            break;
    }      
    return 0;
}