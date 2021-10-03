
#include "sofaWall.h"
#include "twoDoors.h"
#include "library.h"
#include "fourthWall.h"

void Book(){


const unsigned char gImage_eye5[100] = { /* 0X00,0X01,0X28,0X00,0X14,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFC,0X7F,0X3F,0XFF,0XFF,
0XE3,0XC3,0XC7,0XFF,0XFF,0X9F,0X00,0XF9,0XFF,0XFF,0X7E,0X00,0X7E,0XFF,0XFC,0XFC,
0X00,0X3F,0X3F,0XF3,0XFC,0X00,0X3F,0XCF,0XEF,0XF8,0X00,0X1F,0XF7,0X9F,0XF8,0X00,
0X1F,0XF9,0X7F,0XF8,0X00,0X1F,0XFE,0XFF,0XF8,0X00,0X1F,0XFF,0X3F,0XF8,0X00,0X1F,
0XFE,0XCF,0XFC,0X00,0X3F,0XF9,0XF1,0XFC,0X00,0X3F,0XC7,0XFE,0X3E,0X00,0X7E,0X3F,
0XFF,0XCF,0X00,0XF9,0XFF,0XFF,0XF0,0XC3,0X87,0XFF,0XFF,0XFF,0X00,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,};


display.clearDisplay(); 
display.drawRect(4, 4, 120, 43, 1);        //Wall


display.drawLine(0,0, 4,4, 1);        //left ceiling line
display.drawLine(0,63, 4,47, 1);        // left floor line

display.drawLine(124,4, 127,0, 1);      //right ceiling line
display.drawLine(124,47, 127,63, 1);     //right floor line

display.drawRoundRect(10,8, 30, 40, 3, 1);          //Book
display.drawBitmap(20,15, gImage_eye5, 40, 20, 1); //draw eye1
display.display();
 
}
