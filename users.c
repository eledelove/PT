#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void login(){
    
    FILE *bitacora;
    char name[10];
    char password[5];
    char buffer[20];
    char *token;
    
    if((bitacora = fopen("users.txt", "r")) == NULL){
        
        printf("Error al abrir la bitacora de usuarios");
        exit(1);
    }
    else{
        
        printf("user: ");
        scanf("%s", name);
        while(getchar()!='\n');
        printf("password: ");
        scanf("%s", password);
        while(getchar()!='\n');
        
        fscanf(bitacora, "%s", buffer);
        
        if(strcmp(name, token = strtok(buffer, ",")) == 0 && strcmp(password, (token = strtok(NULL, ","))) == 0)
            printf("Bienvenido: %s\n", name);
        
        else printf("Error al Iniciar Sesion\n");
        
        fclose(bitacora);
        
    }
}


void registro(){
    
}

int main(){
    
    int option;
    
    printf("\n********BIENVENIDO A iDBA**********\n\n");
    printf("1. login\n");
    printf("2. Register\n");
    printf("3. Exit\n");
    scanf("%d", &option);
    
    switch (option){
        case 1 :
            login();
            break;
            
        case 2 :
            registro();
            break;
            
        case 3 :
            printf( "Adios\n" );
            break;
            
        default : printf( "ERROR: Opcion incorrecta." );
    }
    
    return 0;
}
