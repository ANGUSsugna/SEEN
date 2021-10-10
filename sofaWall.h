const int SofaWall(){


display.clearDisplay(); 
display.drawRect(4,4, 120, 43, 1);        //Wall


display.drawLine(0,0 , 4,4, 1);        //left ceiling line
display.drawLine(0,63 , 4,47, 1);        // left floor line

display.drawLine(124,4, 127,0, 1);      //right ceiling line
display.drawLine(124,47, 127,63, 1);     //right floor line

display.drawRoundRect(25,22, 50, 13, 5, 1);          //sofa back
display.drawRoundRect(25,35, 50, 5, 5, 1);          //sofa seat
display.drawRect(22,25, 3, 21, 1);               //left arm
display.drawRect(75,25, 4, 21, 1);                    //right arm


///mirror //////////

display.drawRoundRect(90,14, 22, 17, 8, 1); 
display.drawLine(99,20, 103, 24, 1);
display.drawLine(102,20, 106, 24, 1);

display.drawLine(90, 20, 90, 45, 1);
display.drawLine(111,20, 111,45, 1);
display.drawRect(90,31, 22, 16, 1);
display.drawLine(90,39, 111,39, 1);

//display.fillRect(85, 20, 15, 30, 1);          //  Left door
//display.drawRect(96, 32, 3, 5, 0);                 //doorknob

display.display();

}
