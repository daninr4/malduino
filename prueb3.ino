#include <Keyboard.h>
 
void setup() {
   
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(1000);

  //tecla windows
  Keyboard.press(KEY_LEFT_GUI);
  delay(1000);
  //windows+r
  Keyboard.press('r');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);

  //escribir notepad
  Keyboard.print("notepad");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(1000);

  Keyboard.print("creemos que esto merece un algo no_");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.print("algo es igual a MATRICULA");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.print("esperamos que lo siguiente te convenza mas <(");
  delay(5000);

  //altF4
  Keyboard.press(KEY_LEFT_ALT);
  delay(100);
  Keyboard.press(KEY_F4);
  delay(100);
  Keyboard.releaseAll();
  //tab
  Keyboard.press(KEY_TAB);
  delay(100);
  //enter
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(1000);

  
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(10);
  Keyboard.releaseAll();
  delay(200);
 
  Keyboard.print("chrome https>&&www.youtube.com&watch_v)JYRn/j5OArQ");
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.releaseAll();
  delay(12000);

  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  Keyboard.press('m');
  delay(100);
  Keyboard.releaseAll();
  Keyboard.press(KEY_UP_ARROW);
  delay(1500);
  Keyboard.releaseAll();
  
  //pantalla completa
  Keyboard.press('f');
  Keyboard.releaseAll();
  delay(10000);  
  Keyboard.press(KEY_LEFT_ALT);
  delay(10);
  Keyboard.press(KEY_F4);
  delay(10);
  Keyboard.releaseAll();
  Keyboard.end();
 
}
 
void loop() {
  // put your main code here, to run repeatedly:
 
}
