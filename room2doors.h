
#include "sofaWall.h"
#include "twoDoors.h"
#include "library.h"
#include "fourthWall.h"
  #include "Book.h"
  
void room2doors(){

 display.clearDisplay();
display.drawRect(54, 30, 30, 20, 1);        //end hallway


display.drawLine(0 , 0 , 54, 30, 1);        //left ceiling line
display.drawLine(0 , 63 , 54, 50, 1);        // left floor line

display.drawLine(84, 30, 127, 0, 1);      //right ceiling line
display.drawLine(84, 50, 127, 63, 1);     //right floor line

display.fillRect(64, 35, 7, 15, 1);          // door
display.drawPixel(69, 42, 0); //doorknob
display.drawPixel(69, 41, 0); 
display.drawPixel(69, 43, 0); 

//display.fillRect(58, 35, 7, 15, 1);          // door
//display.drawPixel(63, 42, 0); //doorknob
//display.drawPixel(63, 41, 0); 
//display.drawPixel(63, 43, 0); 

display.display();

if (upButtonState == LOW){             
                          twoDoors();                                        
                           
                     } else if (downButtonState == LOW){            
                          sofaWall();                              
                          
                     } else if (leftButtonState == LOW){                   
                          library();
                         
                     } else if (rightButtonState == LOW){
                           fourthWall();
                     }   
 }
