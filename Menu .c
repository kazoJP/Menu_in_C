#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"
#include "portableUnix.h" 

#define MAX 5
#define MIN 1

void menu();

void arrow();

void menu(){

    CLEARMYSCREEN;    

    int position = 1;
    int keypressed = 0;
    
    while (keypressed != 10){

    CLEARMYSCREEN;

    arrow(1,position); printf("Opção 1\n");
    arrow(2,position); printf("Opção 2\n");
    arrow(3,position); printf("Opção 3\n");
    arrow(4,position); printf("Opção 4\n");
    arrow(5,position); printf("Opção 5\n");

    keypressed = getch();

    if(keypressed == 66 && position != MAX){
        position++;}
    else if(keypressed == 65 && position != MIN){
        position--;}
    else position = position;

    if(keypressed == 10 && position == 1)
    //colocar o que faz a função da opção 1
    if(keypressed == 10 && position == 2)
    //colocar o que faz a função da opção 2
    if(keypressed == 10 && position == 3)
    //colocar o que faz a função da opção 3
    if(keypressed == 10 && position == 4)
    //colocar o que faz a função da opção 4
    if(keypressed == 10 && position == 5)
    //colocar o que faz a função da opção 5
    }
}

void arrow(int realposition, int position){
    if(realposition == position)
        printf("---->");
    else 
        printf("     ");
}
    
void main(){
    menu();
}

