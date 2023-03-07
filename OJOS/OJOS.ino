/*Conecciones
Pines: 14 = DIN  16 =CLK  10 = CS 
5V - GND 

LED Matrix Sprite Generator:https://embed.plnkr.co/3VUsekP3jC5xwSIQDVHx/preview 
*/


#include "LedControl.h" // Libreria

LedControl lc=LedControl(14, 16, 10, 2); //Pines + 2 Matriz "max 8"

#define demora 1000  //1Sg 

byte Ojo_centro[8] = {
B00000000,
B01111110,
B11111111,
B11100111,
B11100111,
B11111111,
B01111110,
B00000000
};
 
byte Inferior_derecho[8] = {
B00000000,
B01111110,
B11111001,
B11111001,
B11111111,
B11111111,
B01111110,
B00000000
};

byte Inferior_izquierdo[8] = {
B00000000,
B01111110,
B11111111,
B11111111,
B11110011,
B11110011,
B01111110,
B00000000
};

byte Cento_derecho[8] = {
B00000000,
B01111110,
B11100111,
B11100111,
B11111111,
B11111111,
B01111110,
B00000000
};

byte Cento_izquierdo[8] = {
B00000000,
B01111110,
B11111111,
B11111111,
B11100111,
B11100111,
B01111110,
B00000000
};

byte Inferior_centro[8] = {
B00000000,
B01111110,
B11111111,
B11111001,
B11111001,
B11111111,
B01111110,
B00000000
};

byte superior_derecho[8] = {
B00000000,
B01111110,
B11001111,
B11001111,
B11111111,
B11111111,
B01111110,
B00000000
};

byte superior_izquierdo[8] = {
B00000000,
B01111110,
B11111111,
B11111111,
B11001111,
B11001111,
B01111110,
B00000000
};

byte superior_centro[8] = {
B00000000,
B01111110,
B11111111,
B10011111,
B10011111,
B11111111,
B01111110,
B00000000
};


void setup() {

//Matriz 1  
  lc.shutdown(0,false);       // enciende la matriz
  lc.setIntensity(0,4);       // establece brillo
  lc.clearDisplay(0);         // Se limpia la matriz

//Matriz 2 
  lc.shutdown(1,false);       // enciende la matriz
  lc.setIntensity(1,4);       // establece brillo
  lc.clearDisplay(1);         // Se limpia la matriz
  
}

void loop() {
  mostrar_ojo_centro ();                 //Movimiento 1
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_Inferior_derecho();            //Movimiento 2
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_Inferior_izquierdo();          //Movimiento 3
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_Inferior_centro();             //Movimiento 4
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_superior_derecho();            //Movimiento 5
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_superior_izquierdo();          //Movimiento 6
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_superior_centro();             //Movimiento 7
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_Cento_izquierdo();             //Movimiento 8
  delay(demora);               //Tiempo 1000 Milisendos
  mostrar_Cento_derecho();               //Movimiento 9
  delay(demora);               //Tiempo 1000 Milisendos
}



////////////////////////////////////////////////////////////////


 //Orden de mostrar en matriz 8x8

void mostrar_ojo_centro() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,Ojo_centro[i]);//Matriz 1 
    lc.setRow(1,i,Ojo_centro[i]);//Matriz 2
  }
}

  void mostrar_Inferior_derecho() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,Inferior_derecho[i]);//Matriz 1
    lc.setRow(1,i,Inferior_derecho[i]);//Matriz 2
  }
}
  void mostrar_Inferior_izquierdo() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,Inferior_izquierdo[i]);//Matriz 1
    lc.setRow(1,i,Inferior_izquierdo[i]);//Matriz 2
  }
}
  void mostrar_Inferior_centro() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,Inferior_centro[i]);//Matriz 1
    lc.setRow(1,i,Inferior_centro[i]);//Matriz 2
  }
}
void mostrar_superior_derecho() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,superior_derecho[i]);//Matriz 1
    lc.setRow(1,i,superior_derecho[i]);//Matriz 2
  }
}
void mostrar_superior_izquierdo() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,superior_izquierdo[i]);//Matriz 1
    lc.setRow(1,i,superior_izquierdo[i]);//Matriz 2
  }
}
void mostrar_superior_centro() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,superior_centro[i]);//Matriz 1
    lc.setRow(1,i,superior_centro[i]);//Matriz 2
  }
}
void mostrar_Cento_izquierdo() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,Cento_izquierdo[i]);//Matriz 1
    lc.setRow(1,i,Cento_izquierdo[i]);//Matriz 2
  }
}
void mostrar_Cento_derecho() {
  for (int i = 0; i < 8; i++) {
    lc.setRow(0,i,Cento_derecho[i]);//Matriz 1
    lc.setRow(1,i,Cento_derecho[i]);//Matriz 2
  }
}
