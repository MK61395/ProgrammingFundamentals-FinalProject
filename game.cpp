//                    Muhammad Kashif
//                       I21-0851
//                      Section Y
//                      PF Project
//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Rush Hour...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

                                                                                                                                                                                 int b=0,score = 0;
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

int xI = 20, yI = 650;
//int x1I = 560 , y1I =

void drawCar() {

       // DrawRectangle(300,750,30,10,colors[NAVY]);
        DrawRoundRect(xI,yI,25,35,colors[YELLOW],0);
	//DrawSquare(xI, yI, 20, colors[YELLOW]);
	DrawCircle((xI+20),(yI+6),4,colors[BLACK]);    //headlights
	DrawCircle((xI+4),(yI+6),4,colors[BLACK]);     //headlights
	DrawRectangle((xI+4),(yI+12),16,5,colors[BLACK]); //windscreen of taxi
	DrawRectangle((xI+4),(yI+16),5,16,colors[BLACK]); //left windscreen of taxi
	DrawRectangle((xI+15),(yI+16),5,16,colors[BLACK]); //right windscreen of taxi
	DrawRectangle((xI+4),(yI+28),16,5,colors[BLACK]); //rear windscreen of taxi
	//DrawCircle((xI),(yI),2,colors[WHITE]);    //tires
	//DrawCircle((xI+25),(yI),2,colors[WHITE]);     //tires
	//DrawCircle((xI),(yI+35),2,colors[WHITE]);    //tires
	//DrawCircle((xI+25),(yI+35),2,colors[WHITE]);     //tires
	//DrawCircle(float 18, float 670, float 5, float*BLACK);
	//DrawCircle(float 22, float 670, float 5, float*BLACK);
	//void DrawCircle(float sx, float sy, float radius, float*color);
	
	if(xI >= 10 && xI <= 162 )    //avoiding collision with building 1
	{
	   if(yI <= 510 && yI >= 480)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
        if(xI >= 90 && xI <= 310 )   //avoiding collision with building 2
	{
	   if(yI >= 640)
	   {
	   yI = yI - 10;
	   score = score - 4;
	   }
       }
       
         if(xI >= 270 && xI <= 320 )   //avoiding collision with building 3
	{
	   if(yI >= 550 && yI <= 700)
	   {
	   xI = xI - 10;
	   score = score - 4;
	   }
       }
       
         if(xI >= 100 && xI <= 290 )   //avoiding collision with building 4
	{
	   if(yI >= 350 && yI <= 380)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
        }
       
         if(xI >= 80 && xI <= 130 )   //avoiding collision with building 5
	{
	   if(yI >= 180 && yI <= 350)
	   {
	   xI = xI - 10;
	   score = score - 4;
	   }
       }
       //DrawRectangle(450,240,30,280,colors[NAVY]);  //long Vertical rectangle in middle
         if(xI >= 430 && xI <= 500 )   //avoiding collision with building 6
	{
	   if(yI >= 240 && yI <= 520)
	   {
	   xI = xI - 10;
	   score = score - 4;
	   }
       }
       
        if(xI >= 10 && xI <= 162 )   //avoiding collision with building 7
	{
	   if(yI >= 50 && yI <= 90)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 400 && xI <= 480 )   //avoiding collision with building 8
	{
	   if(yI >= 190 && yI <= 230)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 450 && xI <= 530 )   //avoiding collision with building 9
	{
	   if(yI >= 220 && yI <= 260)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 380 && xI <= 530 )   //avoiding collision with building 10
	{
	   if(yI >= 600 && yI <= 640)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 680 && xI <= 950 )   //avoiding collision with building 11
	{
	   if(yI >= 530 && yI <= 570)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 880 && xI <= 1050 )   //avoiding collision with building 12
	{
	   if(yI >= 50 && yI <= 90)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 700 && xI <= 880 )   //avoiding collision with building 13
	{
	   if(yI >= 400 && yI <= 440)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 670 && xI <= 880 )   //avoiding collision with building 14
	{
	   if(yI >= 150 && yI <= 190)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 250 && xI <= 320 )   //avoiding collision with building 15
	{
	   if(yI >= 100 && yI <= 140)
	   {
	   xI = xI - 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 670 && xI <= 720 )   //avoiding collision with building 16
	{
	   if(yI >= 170 && yI <= 270)
	   {
	   xI = xI - 10;
	   score = score - 4;
	   }
       }
       
       if(xI >= 830 && xI <= 880 )   //avoiding collision with building 17
	{
	   if(yI >= 180 && yI <= 450)
	   {
	   xI = xI - 10;
	   score = score - 4;
	   }
       }
       
      // if(xI >= 155 && xI <= 230 )   //avoiding collision with upper tree line
	//{
	  // if(yI <= 420)
	   //{
	   //yI = yI + 10;
	   //score = score - 4;
	   //}
       //}
       
       if(xI >= 355 && xI <= 470 )   //avoiding collision with lower tree line
	{
	   if(yI <= 53)
	   {
	   yI = yI + 10;
	   score = score - 4;
	   }
       }
       
       
       
       
       
       
	glutPostRedisplay();
}
/*void drawCarRed() {
       // DrawRectangle(300,750,30,10,colors[NAVY]);
	DrawSquare(xI, yI, 20, colors[RED]);
	DrawCircle((xI-2),yI,4,colors[WHITE]);
	DrawCircle((xI+2),yI,4,colors[WHITE]);
	//DrawCircle(float 18, float 670, float 5, float*BLACK);
	//DrawCircle(float 22, float 670, float 5, float*BLACK);
	//void DrawCircle(float sx, float sy, float radius, float*color);
	glutPostRedisplay();
}*/
//bool flag = true;
void moveCar() {
int xI = 560, yI = 650;
        DrawSquare(xI, yI, 20, colors[WHITE]);
	
	//if (xI > 10 && flag) {
	//	xI -= 10;
	//	cout << "going left";
	//	if(xI < 100)
			
	//		flag = false;

	//}
	//else if (xI < 1010 && !flag) {
	//	cout << "go right";
	//	xI += 10;
	//	if (xI > 900)
	//		flag = true;
	//}
}



/*
 * Main Canvas drawing function.
 * */

void GameDisplay()/**/
{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.
        //Setting my background color to be black
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Red Square
	//DrawSquare(400, 20, 40, colors[RED]);
	
	//Green Square
	
	DrawSquare( 250 , 250 ,20,colors[CYAN]); 
	DrawSquare( 1020 , 670 ,20,colors[CYAN]); 
	DrawSquare( 330 , 670 ,20,colors[CYAN]); 
	DrawSquare(20, 30 , 20 ,colors[CYAN]);
	
	
	if(b == 1)
	{
	DrawSquare( 250 , 250 ,20,colors[BLACK]); 
	DrawSquare( 960 , 500 ,20,colors[GREEN]);
	}
	//DrawSquare( 960 , 500 ,20,colors[GREEN]);
	
	if(b == 2)
	{
	DrawSquare( 960 , 500 ,20,colors[BLACK]);
	score = score + 10; 
	b = 3;
	}
	
	if(b == 4)
	{
	DrawSquare( 1020 , 670 ,20,colors[BLACK]); 
	DrawSquare( 570 , 200 ,20,colors[GREEN]);
	}
	//DrawSquare( 960 , 500 ,20,colors[GREEN]);
	
	if(b == 5)
	{
	DrawSquare( 570 , 200 ,20,colors[BLACK]);
	score = score + 10; 
	b = 6;
	}
	
	if(b == 7)
	{
	DrawSquare( 330 , 670 ,20,colors[BLACK]); 
	DrawSquare( 70 , 350 ,20,colors[GREEN]);
	}
	//DrawSquare( 960 , 500 ,20,colors[GREEN]);
	
	if(b == 8)
	{
	DrawSquare( 70 , 350 ,20,colors[BLACK]);
	score = score + 10; 
	b = 9;
	}
	
	if(b == 10)
	{
	DrawSquare( 20 , 30 ,20,colors[BLACK]); 
	DrawSquare( 720 , 650 ,20,colors[GREEN]);
	}
	//DrawSquare( 960 , 500 ,20,colors[GREEN]);
	
	if(b == 11)
	{
	DrawSquare( 720 , 650 ,20,colors[BLACK]);
	score = score + 10; 
	b = 12;
	}
	
	
	//DrawSquare( 1020 , 670 ,20,colors[CYAN]); 
	
	//DrawSquare( 1020 , 670 ,20,colors[CYAN]); 
	
	//DrawSquare( 330 , 670 ,20,colors[CYAN]); 

	
	//DrawSquare( 20 , 30 ,20,colors[CYAN]); 
	
	//DrawSquare( 20 , 670 ,20,colors[GREEN]);
	//DrawSquare( 320 , 670 ,20,colors[GREEN]);  
	
	//Drawig customers on board
	
	//DrawCircle(1020, 680, 3, colors[WHITE]);   //customer top right
        //DrawLine(1020, 680,1020, 662,2, colors[WHITE]);
        //DrawLine(1010, 675,1030, 665,2, colors[WHITE]);
        //DrawLine(1010, 665,1030, 675,2, colors[WHITE]);
        
        
        //DrawCircle(250, 260, 3, colors[WHITE]);   //customer 250,250 coordinates
        //DrawLine(250, 260,250, 242,2, colors[WHITE]);
        //DrawLine(240, 255,260, 245,2, colors[WHITE]);
        //DrawLine(240, 245,260, 255,2, colors[WHITE]);
        
        //DrawCircle(330, 680, 3, colors[WHITE]);   //customer 3
        //DrawLine(330, 680,330, 662,2, colors[WHITE]);
        //DrawLine(320, 675,340, 665,2, colors[WHITE]);
        //DrawLine(320, 665,340, 675,2, colors[WHITE]);
        
        //DrawCircle(20, 40, 3, colors[WHITE]);   //customer 4
        //DrawLine(20, 40,20, 22,2, colors[WHITE]);
        //DrawLine(10, 35,30, 25,2, colors[WHITE]);
        //DrawLine(10, 25,30, 35,2, colors[WHITE]);
        
        //DrawRoundRect(980,650,25,35,colors[CYAN],0);   //pickup position customer 1
        //DrawRoundRect(210,230,25,35,colors[CYAN],0);   //pickup position customer 2
        //DrawRoundRect(350,650,25,35,colors[CYAN],0);   //pickup position customer 3
        //DrawRoundRect(50,20,25,35,colors[CYAN],0);   //pickup position customer 4
        
        
	
	//Display Score
	DrawString (50, 800, "Your Score: "+to_string(score), colors[MISTY_ROSE]);
	DrawString (400,800, "WELCOME TO RUSH HOUR", colors[MISTY_ROSE]);
	//building legend
	DrawRectangle(300,750,30,10,colors[NAVY]);
	DrawString( 325, 750, "   : Buildings", colors[MISTY_ROSE]);
	
	//taxi legend
	DrawSquare(100,750,20,colors[YELLOW]);
	DrawSquare(50,750,20,colors[RED]);
	DrawString( 125, 750, " : Taxi", colors[MISTY_ROSE]);
	DrawString( 75, 750, " / ", colors[MISTY_ROSE]);
	
	//passengers legend
	DrawSquare(550,750,20,colors[CYAN]);
	DrawString( 575, 750, " : Passengers", colors[MISTY_ROSE]);
	
	//tree legend
	DrawTriangle( 745, 780 , 755, 790 , 765 , 780, colors[GREEN] ); 
	DrawRectangle(750,750,10,30,colors[BROWN]);
	DrawString( 765, 750, " : Trees", colors[MISTY_ROSE]);
	
	//pickup legend
	 //DrawRoundRect(900,750,25,20,colors[GREEN],0); 
	 DrawSquare( 900 , 750 ,20,colors[GREEN]);
	 DrawString( 940, 750, " : Drop-Off", colors[MISTY_ROSE]);
	
	///  //DrawTriangle( 495, 340 , 505, 350 , 515 , 340, colors[GREEN] ); 
	///  //DrawRectangle(500,310,10,30,colors[BROWN]);  //Vertical rectangle

	
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawLine(int x1, int y1, int x2, int y2, int lwidth = 3, float *color = NULL);
	DrawLine( 10 , 10 , 10 , 700 , 5 , colors[MISTY_ROSE] );  //Left Border
	DrawLine( 10 , 700 ,  1050 , 700 , 5 , colors[MISTY_ROSE] );  //Top Border
	DrawLine( 10 , 10 ,  1050 , 10 , 5 , colors[MISTY_ROSE] );  //Bottom Border
	DrawLine( 1050 , 10 , 1050 , 700 , 5 , colors[MISTY_ROSE] );//Right Border
	
	//Dimensions of arena: 
	//X_Min: 10   X_Max: 1050   Y_Min: 10    y_Max: 700    
	
	DrawLine( 50 , 10 ,  50 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 100 , 10 ,  100 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 150 , 10 ,  150 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 200 , 10 ,  200 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 250 , 10 ,  250 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 300 , 10 ,  300 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 350 , 10 ,  350 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 400 , 10 ,  400 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 450 , 10 ,  450 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 500 , 10 ,  500 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 550 , 10 ,  550 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 600 , 10 ,  600 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 650 , 10 ,  650 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 700 , 10 ,  700 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 750 , 10 ,  750 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 800 , 10 ,  800 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 850 , 10 ,  850 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 900 , 10 ,  900 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 950 , 10 ,  950 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 1000 , 10 , 1000 , 700 , 1 , colors[MISTY_ROSE] );
	DrawLine( 1050 , 10 , 1050 , 700 , 1 , colors[MISTY_ROSE] );
	
	//DrawCircle(50,670,10,colors[RED]);
	//DrawCircle(70,670,10,colors[RED]);
	//DrawCircle(90,670,10,colors[RED]);
	DrawRectangle(110,670,200,30,colors[NAVY]);  //horizontal rectangle
	DrawRectangle(290,550,30,150,colors[NAVY]);  //Vertical rectangle
	DrawRectangle(700,550,250,30,colors[NAVY]);  //horizontal rectangle
	DrawRectangle(850,200,30,250,colors[NAVY]);  //Vertical rectangle
	DrawRectangle(720,420,160,30,colors[NAVY]);  //horizontal rectangle
	DrawRectangle(690,170,190,30,colors[NAVY]);  //horizontal rectangle
	DrawRectangle(690,190,30,120,colors[NAVY]);  //Vertical rectangle
	DrawRectangle(100,180,30,170,colors[NAVY]);  //Vertical rectangle
	DrawRectangle(100,350,190,30,colors[NAVY]);  //horizontal rectangle
	DrawRectangle(450,240,30,280,colors[NAVY]);  //long Vertical rectangle in middle
	DrawRectangle(400,210,80,30,colors[NAVY]);  //small left horizontal rectangle
	DrawRectangle(450,520,80,30,colors[NAVY]);  //small right horizontal rectangle
	DrawRectangle(400,620,130,30,colors[NAVY]);  //small right horizontal rectangle
	DrawRectangle(600,648,30,50,colors[NAVY]);  //small Vertical rectangle on top mid
	DrawRectangle(600,12,30,50,colors[NAVY]);  //small Vertical rectangle on bottom mid
	DrawRectangle(600,330,30,100,colors[NAVY]);  //small Vertical rectangle on middle mid
	DrawRectangle(12,480,150,30,colors[NAVY]);  //small right horizontal extreme right rectangle
	DrawRectangle(12,70,150,30,colors[NAVY]);  //small right horizontal extreme right rectangle near bottom
	DrawRectangle(270,120,30,150,colors[NAVY]);  //small right horizontal extreme right rectangle near bottom
	DrawRectangle(998,620,50,30,colors[NAVY]);  //small Vertical rectangle on top mid
	DrawRectangle(898,70,150,30,colors[NAVY]);  //small Vertical rectangle on top mid
	DrawRectangle(998,400,50,30,colors[NAVY]);  //small Vertical rectangle on top mid
	
	
	//tree 1
	DrawTriangle( 480, 340 , 490, 350 , 500 , 340, colors[GREEN] ); 
	DrawRectangle(485,310,10,30,colors[BROWN]);  //Vertical rectangle
	
	//tree2
	DrawTriangle( 765, 330 , 775, 340 , 785 , 330, colors[GREEN] );   //tree
	DrawRectangle(770,300,10,30,colors[BROWN]); 
	
	//tree3
	DrawTriangle( 815, 615 , 825, 625 , 835 , 615, colors[GREEN] );   //tree
	DrawRectangle(820,585,10,30,colors[BROWN]); 
	
	//upper tree line(tree 1)
	DrawTriangle( 165, 410 , 175, 420 , 185 , 410, colors[GREEN] );   //tree
	DrawRectangle(170,380,10,30,colors[BROWN]); 
	//upper tree line(tree 2)
	DrawTriangle( 185, 410 , 195, 420 , 205 , 410, colors[GREEN] );   //tree
	DrawRectangle(190,380,10,30,colors[BROWN]); 
	//upper tree line(tree 2)
	DrawTriangle( 205, 410 , 215, 420 , 225 , 410, colors[GREEN] );   //tree
	DrawRectangle(210,380,10,30,colors[BROWN]); 
	
	
	
	//treeline(tree 1)
	DrawTriangle( 365, 43 , 375, 53, 385 , 43, colors[GREEN] );   //tree
	DrawRectangle(370,13,10,30,colors[BROWN]); 
	
	//tree line(tree 2)
	DrawTriangle( 385, 43 , 395, 53 , 405 , 43, colors[GREEN] );   //tree
	DrawRectangle(390,13,10,30,colors[BROWN]); 
	
	//tree line(tree 3)
	DrawTriangle( 405, 43 , 415, 53 , 425 , 43, colors[GREEN] );   //tree
	DrawRectangle(410,13,10,30,colors[BROWN]); 
	
	//tree line(tree 4)
	DrawTriangle( 425, 43 , 435, 53 , 445 , 43, colors[GREEN] );   //tree
	DrawRectangle(430,13,10,30,colors[BROWN]); 
	
	//tree line(tree 5)
	DrawTriangle( 445, 43 , 455, 53 , 465 , 43, colors[GREEN] );   //tree
	DrawRectangle(450,13,10,30,colors[BROWN]); 
	
	//tree line(tree 6)
	DrawTriangle( 465, 43 , 475, 53 , 485 , 43, colors[GREEN] );   //tree
	DrawRectangle(470,13,10,30,colors[BROWN]); 
	
	
	//passenger
	//DrawCircle(400,300,20,colors[PEACH_PUFF]);
	//DrawRoundRect(400,300,10,30,colors[SILVER],20);
	
	//DrawRectangle(int sx, int sy, int width, int height, float *color);
	//DrawRoundRect(500,200,50,100,colors[NAVY],70);
	//DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	//DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	//DrawRoundRect(200,100,100,50,colors[LIME_GREEN],40);
	//DrawRoundRect(250,100,100,50,colors[PURPLE],20);
	
	drawCar();
	glutSwapBuffers(); // do not modify this line..

}



/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;
		if(xI < 10)
		{
		xI = 1030;
		}

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
		if(xI > 1030)
		{
		xI = 10;
		}
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
		if(yI > 670)
		{
		yI = 20;
		}
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
		if(yI < 0)
		{
		yI = 670;
		}
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}
	//if (key == 32) //Key for picking passenger
	   //{
	       if(xI == 250  && yI == 250)
	         {
	          if (key == 32) 
	            {
	            b = 1;
	            }
	         }
	        if(xI == 960 && yI == 500)
	         {
	           if (key == 32) 
	            {
	            b = 2;
	            }
	         }
	         
	         if(xI == 1020  && yI == 670)
	         {
	          if (key == 32) 
	            {
	            b = 4;
	            }
	         }
	        if(xI == 570 && yI == 200)
	         {
	           if (key == 32) 
	            {
	            b = 5;
	            }
	         }
	         
	         if(xI == 330  && yI == 670)
	         {
	          if (key == 32) 
	            {
	            b = 7;
	            }
	         }
	        if(xI == 70 && yI == 350)
	         {
	           if (key == 32) 
	            {
	            b = 8;
	            }
	         }
	         
	         if(xI == 20  && yI == 30)
	         {
	          if (key == 32) 
	            {
	            b = 10;
	            }
	         }
	        if(xI == 720 && yI == 650)
	         {
	           if (key == 32) 
	            {
	            b = 11;
	            }
	         }
	         
	         
	glutPostRedisplay();
}

          //DrawRoundRect(980,650,25,35,colors[CYAN],0);   //pickup position customer 1
        //DrawRoundRect(210,230,25,35,colors[CYAN],0);   //pickup position customer 2
        //DrawRoundRect(350,650,25,35,colors[CYAN],0);   //pickup position customer 3
        //DrawRoundRect(50,20,25,35,colors[CYAN],0);   //pickup position customer 4

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {
	moveCar();	
	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " , " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
 
//void userInput()
int main(int argc, char*argv[]) 
{
        int choice1, choice2, choice3, name;
        cout << "Press 1 to view leaderboard" << endl;
        cin >> choice1; 
          switch(choice1)
             {
             case 1: cout << "Leaderboard is empty. Play game to register scores" << endl;
                     cout << "Press 1 to choose your taxi color" << endl;
                     cout << "Press 2 to randomly assign taxi color" << endl;
                     cin >> choice2;
                        switch(choice2)
                        {
                        case 1: cout << "Choose taxi color" << endl;
                                cout << "Press 1 for yellow color" << endl;
                                cout << "Press 2 for red color" << endl;
                                cin >> choice3;
                                  switch(choice3)
                                  {
                                     case 1: cout << "ok\n";//drawCar();
                                           break; 
                                     case 2: cout << "ok\n";//drawCarRed();
                                  }
                                  cout << "Enter your name: ";
                                  cin >> name;
                        break;
                        case 2: cout << "Enter your name: ";
                                  cin >> name;
                      
                        }
                      
             
                     break;
             default: cout << "Press 1 to choose your taxi color" << endl;
                      cout << "Press 2 to randomly assign taxi color" << endl;
                      
                      cin >> choice2;
                        switch(choice2)
                        {
                        case 1: cout << "Choose taxi color" << endl;
                                cout << "Press 1 for yellow color" << endl;
                                cout << "Press 2 for red color" << endl;
                                cin >> choice3;
                                  switch(choice3)
                                  {
                                     case 1: cout << "ok\n";//drawCar();
                                           break; 
                                     case 2: cout << "ok\n";//drawCarRed();
                                  }
                                  cout << "Enter your name: ";
                                  cin >> name;
                        break;
                        case 2: drawCar();
                        cout << "Enter your name: ";
                                  cin >> name;
                      
                        }
             } 


	int width = 1070, height = 840; // I have set my window size to be 1070 x 840
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Rush Hour by Muhammad Kashif(I21-0851 Section-Y)"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse
	
	
	
	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */
