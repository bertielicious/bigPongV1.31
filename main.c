/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 13 November 2020, 18:52
 */


#include "config.h"
#include "configPorts.h"
#include "configOsc.h"
#include "configSPI.h"
#include "init1_max7219.h"
#include "init2Max7219.h"
#include "configUsart.h"
#include "sendSPIbyte.h"
#include "sendNoSPIbyte.h"
#include "clearScreen.h"
#include "splashScreen.h"
#include "arrays.h"
#include "gameState.h"
#include "pong.h"
#include "writeMatrix.h"
#include "configTMR1.h"
#include "paddleMove.h"
void main(void) 
{
    uchar i=0;
    configPorts();
    configOsc();
    configSPI();
    init1_max7219();
    init2Max7219();
    configUsart();
    configTMR1();
    printf("Hello Phil\n");
    uchar state = 0;
    uchar boardWidth = 16;
    uchar boardHeight = 8;
    paddleMove(3);
   /* uchar row, col;
    for(row = 0; row<8; row++)
    {
       for(col = 0; col<16; col++) 
       {
           printf("%d ", gameArray[row][col]);
       }
       printf("\n");
    }*/
    
while(1)
{
    state = gameState(state);
    //printf("state %d\n", state);
   
   
    
}    
}
   
