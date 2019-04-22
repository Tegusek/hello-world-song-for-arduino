/*
 * Made by Matthew "Gruby" Tęgi.
 * This code is open source so you can change it all you want!
 * This is the song "Hello World" made by Louie Zong arranged for an Arduino.
 * I used the MIDI file by Lyric Wulf to get the correct notes.
 * I translated the midi notes to frequencies by hand thanks the the website: 
 * http://glassarmonica.com/science/frequency_midi.php.
 * To make this work, connect the piezo buzzer to the 9th digital pin on the Adruino (you can change which pin the Arduino 
 * has to use by changing the "piezoPin" value).
 */
int piezoPin = 9;
 
void setup() {
 //There is nothing to set up
}
 
void loop() {
 //These are the frequency values that the Arduino will play
  delay(400);
  tone(piezoPin, 698, 500);
  delay(400);
  tone(piezoPin, 523, 500);
  delay(400);
  tone(piezoPin, 784, 1500);
  delay(800);
  tone(piezoPin, 880, 500);
  delay(400);
  tone(piezoPin, 1046, 500);
  delay(400);
  tone(piezoPin, 880, 500);
  delay(400);
  tone(piezoPin, 698, 500);
  delay(400);
  tone(piezoPin, 587, 500);
  delay(400);
  tone(piezoPin, 523, 500);
  delay(400);
  tone(piezoPin, 587, 500);
  delay(400);
  tone(piezoPin, 880, 500);
  delay(200);
  tone(piezoPin, 784, 500);
  delay(200);
  tone(piezoPin, 880, 400);
  delay(500);
  tone(piezoPin, 698, 500);
  delay(400);
  tone(piezoPin, 880, 500);
  delay(400);
  tone(piezoPin, 784, 500);
  delay(400);
  tone(piezoPin, 698, 500);
  delay(400);
  tone(piezoPin, 659, 500);
  delay(400);
  tone(piezoPin, 587, 500);
  delay(400);
  tone(piezoPin, 440, 500);
  delay(400);
  tone(piezoPin, 523, 500);
  delay(400);
  tone(piezoPin, 659, 500);
  delay(200);
  tone(piezoPin, 698, 500);
  delay(200);
  tone(piezoPin, 659, 500);
  delay(600);
}
