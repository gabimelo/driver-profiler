int i = 0;
int speed = [3,12,24,14,15,21,19,5,0,0,0,0,7,27,44,36,41,32,25,22,22,26,28,36,39,41,35,41,37,30,38,38,25,10,10,0,0,0,0,0,8,23,33,40,42,31,34,30,40,40,34,22,6,0,0,0,4,5,0,3,8,0,0,3,10,25,27,15,4,0];

void setup() {
  Serial.begin(9600);
  while (!Serial) {;}
}

void loop() { // run over and over
  if (Serial) {
    Serial.write(speed[i]);
    i++;
    delay(1000);
  }
}