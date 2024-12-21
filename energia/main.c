#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    system("chcp 65001>null");
    int u1,u2;
    float v1,v2,cv=735.4987;
    char unidade[3][2]={"W","kW","cv"};

    printf("Conversor de Unidade de Energia\n");
    printf("\nSelecione a unidade inicial: \n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-Vapor (cv)\n");
    scanf("%d", &u1);
    printf("Digite o valor inicial: ");
    scanf("%f", &v1);

    printf("\nSelecione a unidade para a qual deseja converter: \n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-Vapor (cv)\n");
    scanf("%d", &u2);

    printf("Convertendo...\n");

    if(u1>3||u1<1||u2>3||u2<1){
        printf("Seleção inválida.\n");
    }else if(u1==u2){
        printf("Você selecionou a mesma unidade!\n");
        v2=v1;
    }else if((u1==1||u1==2)&&(u2==1||u2==2)){
        if(u1==1) v2=v1/1000;
        else v2=v1*1000;
    }else{
        if(u1==2) v2=v1*1000;
        else v2=v1;
        
        if(u1==3) v2=v2*cv;
        else if(u2==3) v2=v2/cv;

        if(u2==2) v2=v2/1000;
    }

    printf("%f %s equivalem a %f %s",v1,unidade[u1-1],v2,unidade[u2-1]);

    getch();
}