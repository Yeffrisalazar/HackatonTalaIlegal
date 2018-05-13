#include <SoftwareSerial.h>
SoftwareSerial wemos(0, 1); //rx.tx

void setup() {
  // put your setup code here, to run once:
  wemos.begin(9600);
  wemos.println("Hola mundo ");
}

void loop() {
  // put your main code here, to run repeatedly:

  wemos.print(analogRead(A3));
  wemos.print(',');
  wemos.println(analogRead(A2));
  delay(1000);

}
