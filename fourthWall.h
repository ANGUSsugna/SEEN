
const int fourthwall(){

unsigned long startTime;     //defining startTime for millis()
unsigned long nowTime;
  
startTime = millis();

const unsigned char gImage_eye1[100] = { /* 0X00,0X01,0X28,0X00,0X14,0X00, */
0XFF,0XC0,0X7F,0XFF,0XFF,0XFF,0X3F,0X8F,0XFF,0XFF,0XFC,0XE0,0X71,0XFF,0XFF,0XFB,
0XC0,0X3E,0X7F,0XFF,0XF7,0X00,0X0F,0X8F,0XFF,0XF7,0X00,0X0F,0XF3,0XFF,0XEE,0X00,
0X07,0XFC,0XFF,0XDC,0X00,0X07,0XFF,0X3F,0XBC,0X00,0X03,0XFF,0XCF,0XBC,0X00,0X03,
0XFF,0XF3,0X7C,0X00,0X03,0XFF,0XFC,0XFC,0X00,0X03,0XFF,0XFF,0X7C,0X00,0X07,0XFF,
0XFC,0XBE,0X00,0X07,0XFF,0XC3,0XDF,0X00,0X0F,0XFE,0X3F,0XEF,0X00,0X0F,0XF1,0XFF,
0XF7,0XC0,0X3F,0X0F,0XFF,0XFB,0XF0,0XF8,0XFF,0XFF,0XFC,0XFF,0X07,0XFF,0XFF,0XFF,
0X00,0XFF,0XFF,0XFF,};  

const unsigned char gImage_eye5[100] = { /* 0X00,0X01,0X28,0X00,0X14,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFC,0X7F,0X3F,0XFF,0XFF,
0XE3,0XC3,0XC7,0XFF,0XFF,0X9F,0X00,0XF9,0XFF,0XFF,0X7E,0X00,0X7E,0XFF,0XFC,0XFC,
0X00,0X3F,0X3F,0XF3,0XFC,0X00,0X3F,0XCF,0XEF,0XF8,0X00,0X1F,0XF7,0X9F,0XF8,0X00,
0X1F,0XF9,0X7F,0XF8,0X00,0X1F,0XFE,0XFF,0XF8,0X00,0X1F,0XFF,0X3F,0XF8,0X00,0X1F,
0XFE,0XCF,0XFC,0X00,0X3F,0XF9,0XF1,0XFC,0X00,0X3F,0XC7,0XFE,0X3E,0X00,0X7E,0X3F,
0XFF,0XCF,0X00,0XF9,0XFF,0XFF,0XF0,0XC3,0X87,0XFF,0XFF,0XFF,0X00,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,};


const unsigned char gImage_eye9[100] = { /* 0X00,0X01,0X28,0X00,0X14,0X00, */
0XFF,0XFF,0XFE,0X03,0XFF,0XFF,0XFF,0XF0,0XFC,0XFF,0XFF,0XFF,0X8E,0X07,0X3F,0XFF,
0XFE,0X7C,0X03,0XDF,0XFF,0XF1,0XF0,0X00,0XEF,0XFF,0XCF,0XF0,0X00,0XEF,0XFF,0X3F,
0XE0,0X00,0X77,0XFC,0XFF,0XE0,0X00,0X3B,0XF3,0XFF,0XC0,0X00,0X3D,0XCF,0XFF,0XC0,
0X00,0X3D,0X3F,0XFF,0XC0,0X00,0X3E,0XFF,0XFF,0XC0,0X00,0X3F,0X3F,0XFF,0XE0,0X00,
0X3E,0XC3,0XFF,0XE0,0X00,0X7D,0XFC,0X7F,0XF0,0X00,0XFB,0XFF,0X8F,0XF0,0X00,0XF7,
0XFF,0XF0,0XFC,0X03,0XEF,0XFF,0XFF,0X1F,0X0F,0XDF,0XFF,0XFF,0XE0,0XFF,0X3F,0XFF,
0XFF,0XFF,0X00,0XFF,};


display.clearDisplay(); 
display.drawRect(4, 4, 120, 43, 1);        //Wall


display.drawLine(0 , 0 , 4, 4, 1);        //left ceiling line
display.drawLine(0 , 63 , 4, 47, 1);        // left floor line

display.drawLine(124, 4, 127, 0, 1);      //right ceiling line
display.drawLine(124, 47, 127, 63, 1);     //right floor line

display.drawRoundRect(10, 22, 50, 13, 5, 1);          //sofa back
display.drawRoundRect(10, 35, 50, 5, 5, 1);          //sofa seat
display.drawRect(7, 25, 3, 20, 1);               //left arm
display.drawRect(60, 25, 4, 20, 1);                    //right arm

display.drawRect(72,12, 46, 26, 1); //picture frame outer
display.drawRect(75,15, 40, 20, 1);  //picture frame inner

display.display();startTime = millis();

nowTime = millis();  

if((nowTime - startTime)  <= 6000) 
  {display.drawBitmap(75,15, gImage_eye1, 40, 20, 1); //draw eye1
  display.display();   
  
  }
nowTime = millis();  

if((nowTime - startTime)  >= 6000) 
  {
    display.drawBitmap(75,15, gImage_eye1, 40, 20, 0); //erase eye1
    display.drawBitmap(75,15, gImage_eye9, 40, 20, 1); //draw eye9
    display.display();
  }
nowTime = millis();  

if ((nowTime - startTime) >= 10000)
  {
    display.drawBitmap(75,15, gImage_eye9, 40, 20, 0); //erase eye9
    display.drawBitmap(75,15, gImage_eye1, 40, 20, 1); //draw eye1
    display.display();
   }


}
