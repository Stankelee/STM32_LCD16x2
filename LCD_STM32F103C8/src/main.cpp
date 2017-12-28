#include <lib.h>

#define E PB12
#define RS PB13
#define D4 PB14
#define D5 PB15
#define D6 PB3
#define D7 PB4


LCD_display lcd(E,RS,D4,D5,D6,D7);

void setup(){
    lcd.begin(16,2);
    lcd.print("Radim!!");
    delay(5000);
    lcd.clear();   
}
void loop(){
    lcd.setCursor(0,0);
    lcd.print("Zdravo");
    lcd.setCursor(0,2);
    lcd.print("Stankela!");
    delay(5000);
    lcd.clear();
}