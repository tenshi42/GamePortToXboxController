int X1_PIN = 0;
int X2_PIN = 1;
int X3_PIN = 2;
int X4_PIN = 3;
int B1_PIN = 22;
int B2_PIN = 24;
int B3_PIN = 26;
int B4_PIN = 28;

void setup() {
  // put your setup code here, to run once:
  pinMode(X1_PIN, INPUT);
  pinMode(X2_PIN, INPUT);
  pinMode(X3_PIN, INPUT);
  pinMode(X4_PIN, INPUT);
  pinMode(B1_PIN, INPUT_PULLUP);
  pinMode(B2_PIN, INPUT_PULLUP);
  pinMode(B3_PIN, INPUT_PULLUP);
  pinMode(B4_PIN, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int X1_val = analogRead(X1_PIN);
  int X2_val = analogRead(X2_PIN);
  int X3_val = analogRead(X3_PIN);
  int X4_val = analogRead(X4_PIN);

  int B1_val = digitalRead(B1_PIN);
  int B2_val = digitalRead(B2_PIN);
  int B3_val = digitalRead(B3_PIN);
  int B4_val = digitalRead(B4_PIN);
  
  Serial.print(X1_val);
  Serial.print(",");
  Serial.print(X2_val);
  Serial.print(",");
  Serial.print(X3_val);
  Serial.print(",");
  Serial.print(X4_val);
  Serial.print(",");
  Serial.print(B1_val);
  Serial.print(",");
  Serial.print(B2_val);
  Serial.print(",");
  Serial.print(B3_val);
  Serial.print(",");
  Serial.print(B4_val);
  Serial.println();
  //Serial.write("\n");
  delay(10);
}
