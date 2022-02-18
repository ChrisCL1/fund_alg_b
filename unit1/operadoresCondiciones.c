#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//temperatura con condiciones//
//frio: 16
//caliente : 29
int frio = 16;
int caliente = 29;
int sofa = 7000;


int mainI(int agc, char** argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi(argv[2]);
    char* inputName = argv[3][0];    //--> "Female"--> {'F', 'e', 'm', 'a', 'l', 'e', '\0'}
    bool temp_condition = (inputTemp == frio);
    bool temp_condition2 = (inputTemp == caliente);
    bool temp_condition3 = (inputTemp >= caliente);
    bool canRobotMove = (inputTemp <= caliente);
    bool hasUserMoney = (inputMoney >= sofa);
    bool isTheUserMale = (inputName != 'F');

    if(canRobotMove){
        //robot.move(x_coord, y_coord);
    }else{
        //robot.stop(x_coord, y_coord);
    }

    if(hasUserMoney){
        //allows to buy
    }else{
        //rejected product
    }

    if(inputTemp <= 29){
        //robot.move(x_axix, y_axis);
    }else{
        //robot.stop(x_coord, y_coord);
    }


    //e.g.
    int priceProduct = 500;
    int userMoney = argv[1];
    bool hasUserMoney = (userMoney >= priceProduct);

    if (hasUserMoney){
        printf("The product was sended!");
    }else{
        printf("The product was rejected");
    }

    return 0;
}