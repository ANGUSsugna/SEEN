
const int book(){

unsigned long startTime;     //defining startTime for millis()
unsigned long nowTime;

//int x1 = 80; // next four lines were to go with display.getTextBounds(....)
//int y1 = 8;

//unsigned int w = 80;
//unsigned int h = 50;

String string1= "What an odd book"; 
startTime = millis();

const unsigned char gImage_eye5[100] = { /* 0X00,0X01,0X28,0X00,0X14,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,0XFF,0XFC,0X7F,0X3F,0XFF,0XFF,
0XE3,0XC3,0XC7,0XFF,0XFF,0X9F,0X00,0XF9,0XFF,0XFF,0X7E,0X00,0X7E,0XFF,0XFC,0XFC,
0X00,0X3F,0X3F,0XF3,0XFC,0X00,0X3F,0XCF,0XEF,0XF8,0X00,0X1F,0XF7,0X9F,0XF8,0X00,
0X1F,0XF9,0X7F,0XF8,0X00,0X1F,0XFE,0XFF,0XF8,0X00,0X1F,0XFF,0X3F,0XF8,0X00,0X1F,
0XFE,0XCF,0XFC,0X00,0X3F,0XF9,0XF1,0XFC,0X00,0X3F,0XC7,0XFE,0X3E,0X00,0X7E,0X3F,
0XFF,0XCF,0X00,0XF9,0XFF,0XFF,0XF0,0XC3,0X87,0XFF,0XFF,0XFF,0X00,0X7F,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,};

display.clearDisplay(); 


display.drawRoundRect(10,8, 60, 55, 3, 1);          //Book left side
display.drawLine(16,8, 16,62, 1);                   //spine
display.drawBitmap(23,15, gImage_eye5, 40, 20, 1); //draw eye1

//display.getTextBounds(string1, 75,3, &x1,&y1, &w, &h); // not working there's a post on arduino forum about an issue with the NULLs, but I don't understand it yet.
display.setTextColor(WHITE);
display.setFont(&FreeSerif9pt7b);
display.setCursor(75,20);
display.print("What");
display.setCursor(75,33);
display.print("an");
display.setCursor(75,46);
display.print("odd");
display.setCursor(75,59);
display.print("book.");

display.display();

}
