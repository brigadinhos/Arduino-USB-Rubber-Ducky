/*
 * Generated with <3 by Dckuino.js, an open source project !
 *
 * Title : Youtube Roller
 * Original USB Rubber Ducky Payload Author : Aprizm
 * Description : This scripts opens a youtube video in fullscreen and puts the browser in fullscreen
 * 
 * Option : if you change the link of the video follow this steps:
 *      1. Choose the video you want
 *      2. Copy what comes after watch?v=
 *          For example https://www.youtube.com/watch?v=lQlIhraqL7o
 *          Copy lQlIhraqL7o
 *      3. Replace what is between www.youtube.com/embed/ and ?rel=0&autoplay=1 with what you copied
 *          For example:
 *              Before: www.youtube.com/embed/znGiGN8Dnv4?rel=0&autoplay=1
 *              After: www.youtube.com/embed/lQlIhraqL7o?rel=0&autoplay=1
 *      4. Upload to your arduino and have fun
 *      5. If your arduino run the script and all you see is a black screen saying
 *          "Your reproduction has been restricted for certain sites or applications."
 *         then uncomment the commented part bellow.
 *      6. Your script is ready to deploy.
 *
 *    ======= USE IT WISELY. I DO NOT TAKE RESPONSABILITY FOR WHAT YOU DO =======
 *    
 *                       ONLY RUN ON WINDOWS
 *    YOUR KEYBOARD TYPE MUST BE ENGLISH FOR THIS SCRIPT TO WORK
 *                AND CAPS_LOCK MUST BE DEACTIVATED
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

  
  delay(5000);

  Keyboard.press(KEY_LEFT_GUI);
  delay(50);
  Keyboard.press('r');
  delay(50);
  Keyboard.releaseAll();

  delay(50);

  Keyboard.print("www.youtube.com/embed/znGiGN8Dnv4?rel=0&autoplay=1");
  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  typeKey(KEY_F11);
  
  /*
   * // STEP 5 UNCOMMENT IF YOU SEE A BLACK SCREEN SAYING
   * // "Your reproduction has been restricted for certain sites or applications."
   *
   * typeKey(KEY_TAB);
   * typeKey(KEY_TAB);
   * typeKey(KEY_TAB);
   * typeKey(KEY_TAB);
   * typeKey(KEY_RETURN);

   * delay(1500);
   * typeKey('f');
  */
  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
