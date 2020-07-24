// DEFINE PARAMETERS

const int powerbutton = 7;
const int powerled = 8;
const int light = 9;

// INPUTS AND OUTPUTS
void setup() {
  Serial.begin(9600);
  pinMode(powerbutton, INPUT);
  pinMode(powerled, OUTPUT);
  pinMode(light, OUTPUT);
}

void loop() {
  // WHEN POWERED OFF
  if (digitalRead(powerbutton) == LOW) {
    digitalWrite(powerled, LOW);
    digitalWrite(light, LOW);
  }

  // WHEN POWERED ON
  if (digitalRead(powerbutton) == HIGH) {
    digitalWrite(powerled, HIGH);
    digitalWrite(light, HIGH);
  }

}
