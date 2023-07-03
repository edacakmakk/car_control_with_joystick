const int x_eks = A2;
const int y_eks = A3;

int x_durum;
int y_durum;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  x_durum = analogRead(x_eks);
  y_durum = analogRead(y_eks);
  Serial.println("x_durum");
  Serial.println(x_durum);
  Serial.println("y_durum");
  Serial.println(y_durum);

  if (x_durum > 1020){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }

  else if(x_durum < 50){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }

  else if(y_durum > 1020){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }

  else if(y_durum < 50){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }

  else{
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    }
}
