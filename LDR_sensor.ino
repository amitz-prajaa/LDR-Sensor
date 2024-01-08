int ldr = A0 ;
int led = 13 ;
int led2 = 12 ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldr,INPUT);
  pinMode(led , OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(ldr);
  if(val<180){
    digitalWrite(led , 1);
    digitalWrite(led2 , 0);
  }
  else {
    digitalWrite(led , 0);
    digitalWrite(led2 , 1);
    
  }
  Serial.print("LDR value = ");
  Serial.println(val);
  delay(1000);
}
