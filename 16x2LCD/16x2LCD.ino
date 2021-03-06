
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello!");
}

void loop() {
  int i=0;
  char msg[] ="Welcome to JISCE";
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  for(i=0;i<16;i++)
  {
     lcd.setCursor(15-i, 1);
    // print the number of seconds since reset:
    lcd.println(msg);
    delay(300);
    lcd.clear();
  }
  
}
 