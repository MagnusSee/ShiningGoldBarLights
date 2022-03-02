void setup() {
  // put your setup code here, to run once:
  
  // Led 1 is digital pin 3
  pinMode(3, OUTPUT);

  // Led 2 is digital pin 5
  pinMode(5, OUTPUT);

  // Led 3 is digital pin 6
  pinMode(6, OUTPUT);

  // Led 4 is digital pin 9
  pinMode(9, OUTPUT);

  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  led(3);
  led(5);
  led(6);
  led(9);
}



void led(int pin) {

 int rand = random(0,4);
 //int rand = 3;
  Serial.println(rand);

  if (rand == 1) {

  int rand2 = random(50, 255);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
  delay(500);
  analogWrite(pin, rand2);
  Serial.println(rand2);
  }
  else if (rand == 2) {
  int i = 265;
  while (i > 50) {
    i = i - 10;
    analogWrite(pin, i);
    delay(100);
  }
  }

  else if (rand == 3 or rand == 0){
    int i = 265;
   
    while (i > 50) {
      i = i - 10;
      analogWrite(pin, i);
      delay(30);
    }

    int j = 265;
    while (j > 50) {
      j = j - 10;
      analogWrite(pin, j);
      delay(30);
    }

     int k = 265;
    while (j > 50) {
      k = k - 10;
      analogWrite(pin, k);
      delay(30);
    }

     int l = 265;
    while (l > 50) {
      l = l - 10;
      analogWrite(pin, l);
      delay(30);
    }

     int m = 265;
    while (m > 50) {
      m = m - 10;
      analogWrite(pin, m);
      delay(30);
    }
    }
  }
