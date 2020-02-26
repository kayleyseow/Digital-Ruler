//code by Kayley Seow
const int TrigPin = 2;
const int EchoPin  = 3;
const int a = 8;
const int b = 12;
const int c = 13;
const int d = 4;
const int e = 5;
const int f = 6;
const int g = 7;
const int dp = 0;
const int d4 = 9;
const int d3 = 10;
const int d2 = 11;
const int d1 = 1;
//String numberstring;
int displaynumber;
float distance;
int cnt;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
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
  Serial.println("Ultrasonic Sensor: ");
}

void loop() {
  // put your main code here, to run repeatedly:
  //Generate a high pule of 10us to trigger the TrigPin
    digitalWrite(TrigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(TrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(TrigPin, LOW);
  //detecting the width of the pulse and calculating the distance
    distance = pulseIn (EchoPin, HIGH);
    distance = distance/57.2555; //Calibrated factor for cm display
    Serial.print(distance);
    Serial.print("cm\n");
    for(cnt = 0; cnt < 20; cnt++){
       display7Seg(distance); //Display to four bit digital tube
       //delay(5);
       //Clear();
    }
}
//Select the digit to display
void DisplayDigit(int n){
  switch(n){
    case 1:
      digitalWrite(d1,HIGH);
      digitalWrite(d2,LOW);
      digitalWrite(d3,LOW);
      digitalWrite(d4,LOW);
      break;
    case 2:
      digitalWrite(d1,LOW);
      digitalWrite(d2,HIGH);
      digitalWrite(d3,LOW);
      digitalWrite(d4,LOW);
      break;
    case 3:
      digitalWrite(d1,LOW);
      digitalWrite(d2,LOW);
      digitalWrite(d3,HIGH);
      digitalWrite(d4,LOW);
      break;
    case 4:
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

//Display number 0
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
//Display number 1
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
//Display number 2
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
//Display number 3
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
//Display number 4
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
//Display number 5
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
//Display number 6
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
//Display number 7
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
//Display number 8
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
//Display number 9
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
//Display number Decimal Point
void numberDP(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(dp,LOW);
}
//Turn OFF display
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
//Display number
void DisplayNumber(int n){
  switch(n){
    case 0:number0();
    break;
    case 1:number1();
    break;
    case 2:number2();
    break;
    case 3:number3();
    break;
    case 4:number4();
    break;
    case 5:number5();
    break;
    case 6:number6();
    break;
    case 7:number7();
    break;
    case 8:number8();
    break;
    case 9:number9();
    break;
    default:Clear();
    break;
  }
}


void display7Seg(float distance){
  //int digit1num = 0; // 100
  int digit2num = 0; // 10
  int digit3num = 0; // 1
  int digit4num = 0; // 1/10
  int intDist = int(distance); // Get Decimal
  int i;
   if(intDist > 999){ //Over range for display
    //digit1num = 9;
    digit2num = 9;
    digit3num = 9;
    digit4num = 9;
  } else{
    digit4num = intDist % 10;
    digit3num = (intDist / 10) % 10;
    digit2num = (intDist / 100) % 10;
    //digit1num = (intDist / 1000) % 10;
  }
  /*
  Serial.println(distance);
  Serial.println(intDist);
  Serial.println(digit2num);
  Serial.println(digit3num);
  Serial.println(digit4num);

  i = 1; 
  DisplayDigit(i);
  DisplayNumber(digit1num);
  delay(10);
 */ 
  i = 2; 
  DisplayDigit(i);
  if(digit2num == 0){
    Clear();
  } else {
    DisplayNumber(digit2num);
  }
  delay(1);
//Clear();

  i = 3; 
  DisplayDigit(i);
  if(digit2num == 0 && digit3num == 0){
    Clear();
  } else{
    DisplayNumber(digit3num);
  }
  delay(1);
//  Clear();
  i = 4; 
  DisplayDigit(i);
  DisplayNumber(digit4num);
  delay(1);
 // Clear();
// }
}
