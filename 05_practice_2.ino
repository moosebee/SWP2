#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

int toggle_state(int toggle) {
  return !toggle;
}

void loop(){
  digitalWrite(PIN_LED, toggle);
  delay(1000);
  toggle=toggle_state(toggle);
  for (int i =0; i <=10; i++){
    toggle= toggle_state(toggle);
    digitalWrite(PIN_LED,toggle);
    delay(100);
  }
  toggle=toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  while(1){
  }
}
