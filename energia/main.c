/*Script para converter entre unidade de energia.
Por: Heli Neres Silva*/

#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>

#define CV 735.4987

int main(){
    //system("chcp 65001>null");
    //inicializando variáveis
    int u1,u2;
    float v1,v2;
    char unidade[3][2]={"W","kW","cv"};

    //Seleção da unidade base e o valor a ser convertido
    printf("Conversor de Unidade de Energia\n");
    printf("\nSelecione a unidade inicial: \n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-Vapor (cv)\n");
    scanf("%d", &u1);
    printf("Digite o valor inicial: ");
    scanf("%f", &v1);

    //Seleção da unidade para conversão
    printf("\nSelecione a unidade para a qual deseja converter: \n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-Vapor (cv)\n");
    scanf("%d", &u2);

    printf("Convertendo...\n");

    //verificando se os valores são válidos
    if(u1>3||u1<1||u2>3||u2<1){
        printf("Seleção inválida.\n");
        return 0;
    //verificando se a mesma unidade foi selecionada duas vezes
    }else if(u1==u2){
        printf("Você selecionou a mesma unidade!\n");
        v2=v1;
    //convertendo entre W e kW
    }else if((u1==1||u1==2)&&(u2==1||u2==2)){
        if(u1==1) v2=v1/1000;
        else v2=v1*1000;
    //convertendo entre W/kW e cv
    }else{
        if(u1==2) v2=v1*1000;
        else v2=v1;
        
        if(u1==3) v2=v2*CV;
        else if(u2==3) v2=v2/CV;

        if(u2==2) v2=v2/1000;
    }

    //exibe resultado
    printf("%f %s equivalem a %f %s",v1,unidade[u1-1],v2,unidade[u2-1]);

    //aguarda alguma tecla ser pressionada antes de encerrar o programa
    getch();
}