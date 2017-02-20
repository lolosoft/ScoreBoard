/*
 Name:		ScoreBoard.ino
 Created:	20.02.2017 17:19:25
 Author:	stoliarov.am2
*/

void setup() {
	Serial.begin(9600);
}

void loop() {
	Serial.write("1");
	delay(500);
}
