int a = 1;
int b = 0;
int c = 13;
int d = 4;
int e = 5;
int f = 6;
int g = 7;
int dp = 8;
int d4 = 9;
int d3 = 10;
int d2 = 11;
int d1 = 12;
long n = 1230;
int x = 100;
int del = 55;

void setup() {
  // put your setup code here, to run once:
  pinMode( d1 , OUTPUT);
  pinMode( d2 , OUTPUT);
  pinMode( d3 , OUTPUT);
  pinMode( d4 , OUTPUT);
  pinMode( a , OUTPUT);
  pinMode( b , OUTPUT);
  pinMode( c , OUTPUT);
  pinMode( d , OUTPUT);
  pinMode( e , OUTPUT);
  pinMode( f , OUTPUT);
  pinMode( g , OUTPUT);
  pinMode( dp , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(d1,HIGH);
  delay(100);
  number1();
  delay(100);
  number2();
  delay(100);
  number3();
  delay(100);
  number4();
  delay(100);
  number5();
  delay(100);
  number6();
  delay(100);
  number7();
  delay(100);
  number8();
  delay(100);
  number9();
  delay(100);
  number0();
  delay(100);
  Clear();
  digitalWrite(d1,LOW);
  delay(100);
  digitalWrite(d2,HIGH);
  delay(100);
  delay(100);
  number1();
  delay(100);
  number2();
  delay(100);
  number3();
  delay(100);
  number4();
  delay(100);
  number5();
  delay(100);
  number6();
  delay(100);
  number7();
  delay(100);
  number8();
  delay(100);
  number9();
  delay(100);
  number0();
  delay(100);
  Clear();
  digitalWrite(d2,LOW);
  delay(100);
  digitalWrite(d3,HIGH);
  delay(100);
  delay(100);
  number1();
  delay(100);
  number2();
  delay(100);
  number3();
  delay(100);
  number4();
  delay(100);
  number5();
  delay(100);
  number6();
  delay(100);
  number7();
  delay(100);
  number8();
  delay(100);
  number9();
  delay(100);
  number0();
  delay(100);
  Clear();
  digitalWrite(d3,LOW);
  delay(100);
  digitalWrite(d4,HIGH);
  delay(100);
  delay(100);
  number1();
  delay(100);
  number2();
  delay(100);
  number3();
  delay(100);
  number4();
  delay(100);
  number5();
  delay(100);
  number6();
  delay(100);
  number7();
  delay(100);
  number8();
  delay(100);
  number9();
  delay(100);
  number0();
  delay(100);
  Clear();
  digitalWrite(d4,LOW);
  delay(100);
}
void actualgoodcodestuff(unsigned char n){
  switch(n){
    case '1':
      digitalWrite(d1,HIGH);
      digitalWrite(d2,LOW);
      digitalWrite(d3,LOW);
      digitalWrite(d4,LOW);
      break;
    case '2':
      digitalWrite(d1,LOW);
      digitalWrite(d2,HIGH);
      digitalWrite(d3,LOW);
      digitalWrite(d4,LOW);
      break;
    case '3':
      digitalWrite(d1,LOW);
      digitalWrite(d2,LOW);
      digitalWrite(d3,HIGH);
      digitalWrite(d4,LOW);
      break;
    case '4':
      digitalWrite(d1,LOW);
      digitalWrite(d2,LOW);
      digitalWrite(d3,LOW);
      digitalWrite(d4,HIGH);
      break;
    default:
      digitalWrite(d1,LOW);
      digitalWrite(d2,LOW);
      digitalWrite(d3,LOW);
      digitalWrite(d4,LOW);
      break;
  }
}

void number0(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  digitalWrite(dp,HIGH);
}
void number1(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,HIGH);
}
void number2(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,HIGH);
}
void number3(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  digitalWrite(dp,HIGH);
}
void number4(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,HIGH);
}
void number5(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,HIGH);
}
void number6(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,HIGH);
}
void number7(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,HIGH);
}
void number8(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,HIGH);
}
void number9(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(dp,HIGH);
}
void Clear(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,HIGH);
}
void pickNumber(unsigned char n){
  switch(n){
    case '0':number0();
    break;
    case '1':number1();
    break;
    case '2':number2();
    break;
    case '3':number3();
    break;
    case '4':number4();
    break;
    case '5':number5();
    break;
    case '6':number6();
    break;
    case '7':number7();
    break;
    case '8':number8();
    break;
    case '9':number9();
    break;
    default:Clear();
    break;
  }
}
void Display(unsigned char x, unsigned char Number){
  actualgoodcodestuff(x);
  pickNumber(Number);
  delay(1);
  Clear();
}
