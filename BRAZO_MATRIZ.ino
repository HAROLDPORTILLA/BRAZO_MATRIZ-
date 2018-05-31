//PROGRAMADORES
//MAURICIO CORONEL FLOREZ
//HAROLD PORTILLA
/// brazo == 25
#include <Servo.h>

Servo servoGarra;  
Servo servoBrazo;
Servo servoCodo;
Servo servoBase;


int matriz [4][30]={{10,12,15,17,20,22,25,27,30,32,35,37,40,42,45},{150,145,140,135,130,125,120,115,110,105,100},{100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180},{40,45,50,55,60,65,70,75,80,85,90,95,100,115} };

void setup() {
servoGarra.attach(12);
servoGarra.write(45);
servoCodo.attach(11);
servoBrazo.attach(9);
servoBrazo.write(25);
servoBase.attach(6);
servoBase.write(95);
servoCodo.write(150);


  ////////////////////////// PRIMER MOVIIENTO DEL BRAZO

  
  

  servoBrazo.write(matriz[0][0]);
  delay(100);
  servoBrazo.write(matriz[0][1]);
  delay(100);
  servoBrazo.write(matriz[0][2]);
  delay(100);
  servoBrazo.write(matriz[0][3]);
  delay(100);
  servoBrazo.write(matriz[0][5]);
  delay (100);
  servoBrazo.write(matriz[0][4]);
  delay(100);
  servoBrazo.write(matriz[0][5]);
  delay(100);
  servoBrazo.write(matriz[0][6]);
  delay(100);
  servoBrazo.write(matriz[0][7]);
  delay(100);
  servoBrazo.write(matriz[0][8]);
  delay (100);
  servoBrazo.write(matriz[0][9]);
  delay(100);
  servoBrazo.write(matriz[0][10]);
  delay(100);
  servoBrazo.write(matriz[0][11]);
  delay (100);
  servoBrazo.write(matriz[0][12]);
  delay(100);
  servoBrazo.write(matriz[0][13]);
  delay(100);
  servoBrazo.write(matriz[0][14]);
  delay(100);
  
 
 
  servoCodo.write(matriz[1][0]);
  delay(100);
  servoCodo.write(matriz[1][1]);
  delay(100);
  servoCodo.write(matriz[1][2]);
  delay(100);
  servoCodo.write(matriz[1][3]);
  delay(100);
  servoCodo.write(matriz[1][4]);
  delay(100);
  servoCodo.write(matriz[1][5]);
  delay(100);
  servoCodo.write(matriz[1][6]);
  delay(100);
  servoCodo.write(matriz[1][7]);
  delay(100);
  servoCodo.write(matriz[1][8]);
  delay(100);
  servoCodo.write(matriz[1][9]);
  delay(100);
  servoCodo.write(matriz[1][10]);
  delay(100);
 

  
  servoGarra.write(170);
  servoGarra.write(matriz[3][0]);
  delay(100);
  servoGarra.write(matriz[3][1]);
  delay(100);
  servoGarra.write(matriz[3][2]);
  delay(100);
  servoGarra.write(matriz[3][3]);
  delay(100);
  servoGarra.write(matriz[3][4]);
  delay(100);
  servoGarra.write(matriz[3][5]);
  delay(100);
  servoGarra.write(matriz[3][6]);
  delay(100);
  servoGarra.write(matriz[3][7]);
  delay(100);
  servoGarra.write(matriz[3][8]);
  delay(100);
  servoGarra.write(matriz[3][9]);
  delay(100);
  servoGarra.write(matriz[3][10]);
  delay(100);
  servoGarra.write(matriz[3][11]);
  delay(100);
  servoGarra.write(matriz[3][12]);
  delay(100);
  servoGarra.write(matriz[3][13]);
  delay(100);

  servoBase.write(matriz[2][0]);
  delay(100);
  servoBase.write(matriz[2][1]);
  delay(100);
  servoBase.write(matriz[2][2]);
  delay(100);
  servoBase.write(matriz[2][3]);
  delay(100);
  servoBase.write(matriz[2][4]);
  delay(100);
  servoBase.write(matriz[2][5]);
  delay(100);
  servoBase.write(matriz[2][6]);
  delay(100);
  servoBase.write(matriz[2][7]);
  delay(100);
  servoBase.write(matriz[2][8]);
  delay(100);
  servoBase.write(matriz[2][9]);
  delay(100);
  servoBase.write(matriz[2][10]);
  delay(100);
  servoBase.write(matriz[2][11]);
  delay(100);
  servoBase.write(matriz[2][12]);
  delay(100);
  servoBase.write(matriz[2][13]);
  delay(100);
  servoBase.write(matriz[2][14]);
  delay(100);
  servoBase.write(matriz[2][15]);
  delay(100);
  servoBase.write(matriz[2][16]);
  delay(100);

  servoGarra.write(170);
  servoGarra.write(matriz[3][0]);
  delay(100);
  servoGarra.write(matriz[3][1]);
  delay(100);
  servoGarra.write(matriz[3][2]);
  delay(100);
  servoGarra.write(matriz[3][3]);
  delay(100);
  servoGarra.write(matriz[3][4]);
  delay(100);
  servoGarra.write(matriz[3][5]);
  delay(100);
  servoGarra.write(matriz[3][6]);
  delay(100);
  servoGarra.write(matriz[3][7]);
  delay(100);
  servoGarra.write(matriz[3][8]);
  delay(100);
  servoGarra.write(matriz[3][9]);
  delay(100);
  servoGarra.write(matriz[3][10]);
  delay(100);
  servoGarra.write(matriz[3][11]);
  delay(100);
  servoGarra.write(matriz[3][12]);
  delay(100);
  servoGarra.write(matriz[3][13]);
  delay(100);

}

void loop() {
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
}





