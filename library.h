

#include "sofaWall.h"
#include "twoDoors.h"
#include "fourthWall.h"
  #include "Book.h"


void library(){


display.clearDisplay(); 
display.drawRect(4, 4, 120, 43, 1);        //Wall


display.drawLine(0 , 0 , 4, 4, 1);        //left ceiling line
display.drawLine(0 , 63 , 4, 47, 1);        // left floor line

display.drawLine(124, 4, 127, 0, 1);      //right ceiling line
display.drawLine(124, 47, 127, 63, 1);     //right floor line

display.drawRect(12, 10, 25, 37, 1);    //bookcase 1

  display.drawLine(12, 18, 35, 18, 1);   //Shelf 1
    display.drawRect(13, 12, 3, 6, 1);     //book
    display.drawRect(16, 12, 3, 6, 1); 
    display.drawRect(19, 12, 3, 6, 1); 
    display.drawRect(21, 12, 3, 6, 1); 



     
  display.drawLine(12, 28, 35, 28, 1);   //Shelf 2 
    display.drawRect(13, 20, 4, 9, 1);     //book
    display.drawRect(17, 20, 3, 9, 1); //book
    display.drawRect(20, 20, 4, 9, 1); //book
    display.drawRect(24, 22, 3, 7, 1); //book

 
  display.drawLine(12, 38, 35, 38, 1);   //Shelf 3 
    display.drawRect(13, 30, 3, 8, 1); //book
    display.drawRect(16, 30, 3, 8, 1); //book
    display.drawRect(19, 30, 3, 8, 1); //book
    display.drawRect(22, 30, 3, 8, 1); // book
    display.drawRect(25, 32, 3, 6, 1);
    display.drawRect(28, 32, 3, 6, 1);
    display.drawRect(31, 32, 3, 6, 1);
    display.drawRect(34, 32, 3, 6, 1);
 
display.drawRect(40, 10, 25, 37, 1);                    //bookcase 2
    display.drawRect(41, 32, 3, 6, 1);
    display.drawRect(44, 32, 3, 6, 1);
    display.drawRect(47, 32, 3, 6, 1);
    display.drawRect(50, 32, 3, 6, 1);
    display.drawRect(53, 30, 3, 8, 1); //book
    display.drawRect(56, 30, 3, 8, 1); //book
    display.drawRect(59, 32, 3, 6, 1);
    display.drawRect(62, 32, 3, 6, 1);

display.drawLine(40, 18, 63, 18, 1);   //Shelf 1
    display.drawRect(41, 12, 3, 6, 1);     //book
    
  display.drawLine(40, 28, 63, 28, 1);   //Shelf 2 
    display.drawRect(41, 22, 3, 7, 1); //book
    display.drawRect(44, 22, 3, 7, 1); //book
    display.drawRect(47, 22, 3, 7, 1); //book
    display.drawTriangle(52,28, 55,21, 58,28, 1); //triangle

  
    
  display.drawLine(40, 38, 63, 38, 1);   //Shelf 3
  
/////Lamp

display.drawLine (75,10, 90,10, 1);  //topbar
display.drawLine (75,10, 75,46, 1);  //Stand
display.drawLine (90,10, 95,15, 1); //angle down
display.drawLine (93,17, 97,13, 1); //shade top opening
display.drawLine (97,13, 102,13, 1); 
display.drawLine (93,17, 93,22, 1);
display.drawLine (93,22, 102,13, 1);
display.drawRect (70,43, 10, 3, 1); //base 


//// Lounger

display.drawRoundRect(90, 25, 20, 13, 5, 1);          //sofa back
display.drawRoundRect(90, 35, 20, 5, 5, 1);          //sofa seat
display.drawRect(86, 28, 3, 18, 1);               //left arm
display.drawRect(110, 28, 3, 18, 1);                    //right arm


//display.fillRect(85, 20, 15, 30, 1);          //  Left door
//display.drawRect(96, 32, 3, 5, 0);                 //doorknob

display.display();

if (upButtonState == LOW){             
                     Book();                                          
                           
                     } else if (downButtonState == LOW){             
                          sofaWall();                             
                          
                     } else if (leftButtonState == LOW){                 
                          library();
                         
                     } else if (rightButtonState == LOW){
                           fourthWall();
                     }   







}
