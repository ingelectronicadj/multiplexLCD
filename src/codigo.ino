/*
 ***********************************************************************
 *              LIBRERIAS y CONSTANTES
 ***********************************************************************
 */
#include <LiquidCrystal.h>

LiquidCrystal lcd1(12, 11, 10, 9, 8, 7); // LiquidCrystal(rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd2(12, 6, 10, 9, 8, 7);
LiquidCrystal lcd3(12, 5, 10, 9, 8, 7);
LiquidCrystal lcd4(12, 4, 10, 9, 8, 7);
/*
 ***********************************************************************
 *              SETUP CONFIGURACIÓN INICIAL
 ***********************************************************************
 */
void setup() {
  // configura el numero de columnas y filas de cada lcd
  //lcd1.begin(20, 4);
  //lcd1.begin(8, 2);
  lcd1.begin(16, 2);
  lcd2.begin(16, 2);
  lcd3.begin(16, 2);
  lcd4.begin(16, 2);

  // Imprime etiqueta en cada LCD
  lcd1.print("Disp1");
  lcd2.print("Disp2");
  lcd3.print("Disp3");
  lcd4.print("Disp4");
}
/*
 ***********************************************************************
 *              LOOP BUCLE PRINCIPAL
 ***********************************************************************
 */
void loop() {
  // configura el cursor de inicio para la escritura en cada LCD
  lcd1.setCursor(0, 1); // columna 0 fila 2
  lcd2.setCursor(0, 1);
  lcd3.setCursor(0, 1);
  lcd4.setCursor(0, 1);

 // imprime el tiempo desde que arranca el programa
  lcd1.print(millis()/1);
  lcd2.print(millis()/10);
  lcd3.print(millis()/100);
  lcd4.print(millis()/1000);
}
