
#include "sofaWall.h"

#include "library.h"
#include "fourthWall.h"
  #include "Book.h"

void twoDoors(){

const unsigned char gImage_DOWNarrowwhite[108] = { /* 0X00,0X01,0X18,0X00,0X24,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,
0XFF,0XC0,0X07,0XFF,0XC0,0X07,0XFF,0XC0,0X07,0XFF,0XC0,0X07,0XFF,0XC0,0X07,0XFF,
0XC0,0X07,0XFF,0XC0,0X07,0XFF,0XC0,0X07,0XFF,0XC0,0X07,0XFF,0XC0,0X07,0XFF,0XC0,
0X07,0XFF,0XC0,0XFF,0XFF,0XFE,0XFF,0XFF,0XFE,0X7F,0XFF,0XFC,0X3F,0XFF,0XF8,0X1F,
0XFF,0XF0,0X0F,0XFF,0XE0,0X07,0XFF,0XC0,0X03,0XFF,0X80,0X01,0XFF,0X00,0X00,0XFE,
0X00,0X00,0X7C,0X00,0X00,0X38,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,};



  
 display.clearDisplay();
display.drawRect(34, 10, 70, 40, 1);        //end hallway


display.drawLine(0 , 0 , 34, 10, 1);        //left ceiling line
display.drawLine(0 , 63 , 34, 50, 1);        // left floor line

display.drawLine(104, 10, 127, 0, 1);      //right ceiling line
display.drawLine(104, 50, 127, 63, 1);     //right floor line


display.fillRect(60, 20, 15, 30, 1);          //Right door
display.drawRect(70, 32, 3, 5, 0);               //doorknob

display.drawBitmap(5,15, gImage_DOWNarrowwhite, 24, 36, 1);



//display.fillRect(85, 20, 15, 30, 1);          //  Left door
//display.drawRect(96, 32, 3, 5, 0);                 //doorknob

display.display();



}
