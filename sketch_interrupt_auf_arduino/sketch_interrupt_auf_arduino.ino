void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
  attachInterrupt(0,callback, FALLING);
  Serial.begin(9600); 
  Serial.println("I HAVE BEEN INITIALIZED!");
}

bool ledState = false;

void callback()
{
  Serial.println("I HAVE BEEN PUSHED!");

  digitalWrite(8, ledState ? HIGH : LOW);
  ledState = !ledState;
}

void loop() {
}
