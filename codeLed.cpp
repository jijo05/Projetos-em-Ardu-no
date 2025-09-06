#define x0 10
#define x1 11
#define x2 12
#define x3 13
#define pb 2
bool BS;
bool LBS = LOW;
bool leds[4] = {LOW, LOW, LOW, LOW};


void setup() {
  pinMode(x0, OUTPUT);
  pinMode(x1, OUTPUT);
  pinMode(x2, OUTPUT);
  pinMode(x3, OUTPUT);
  pinMode(pb, INPUT);
}

void updateLeds() {
  digitalWrite(x0, leds[0]);
  digitalWrite(x1, leds[1]);
  digitalWrite(x2, leds[2]);
  digitalWrite(x3, leds[3]);
}

void binaryAddition(){
  for (int i=3; 1>=0; i--){
    if(leds[i]==false){
        leds[i] = true;
        break;
    } else {
      leds[i] = false;
    }
  }
}

void loop() {
  BS = digitalRead(pb);
  delay(100);
  if (BS != LBS) {                
    if (BS == HIGH) {
      binaryAddition();           
    }
  }
  LBS = BS;
  updateLeds();             
}
