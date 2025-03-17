// Define the pins for each segment (D0 to D6)
const int segmentA = 3; // D0
const int segmentB = 2; // D1
const int segmentC = 8; // D2
const int segmentD = 7; // D3
const int segmentE = 6; // D4
const int segmentF = 4; // D5
const int segmentG = 10; // D6
int i = 0; //as counter

void setup() {
  // Initialize the digital pins as OUTPUTs
  pinMode(segmentA, OUTPUT);
  pinMode(segmentB, OUTPUT);
  pinMode(segmentC, OUTPUT);
  pinMode(segmentD, OUTPUT);
  pinMode(segmentE, OUTPUT);
  pinMode(segmentF, OUTPUT);
  pinMode(segmentG, OUTPUT);
  pinMode(12, INPUT); //BUTTON
  Serial.begin(9600);
}
/*
 0 = A,B,C,D,E,F
 1 = B,C
 2 = A,B,G,E,D
 3 = A,B,C,D,G
 4 = F,G,B,C
 5 = A,F,G,C,D
 6 = A,F,G,E,D,C
 7 = A,B,C
 8 = A,B,C,D,E,F,G
 9 = A,B,C,D,F,G 
 */
void loop() {
   if(i==0){ 
// turn on the display according to the counter 
 //0
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentD,  LOW);
  digitalWrite(segmentE,  LOW);
  digitalWrite(segmentF,  LOW);
  digitalWrite(segmentG,  HIGH);

 }
 else if(i==1){
  //1
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentA,  HIGH);
  digitalWrite(segmentD,  HIGH);
  digitalWrite(segmentE,  HIGH);
  digitalWrite(segmentF,  HIGH);
  digitalWrite(segmentG,  HIGH);
 
 
 }
 else if(i==2){
  //2
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentG,  LOW);
  digitalWrite(segmentE,  LOW);
  digitalWrite(segmentD,  LOW);
  digitalWrite(segmentF,  HIGH);        
  digitalWrite(segmentC,  HIGH);
  
 }
 else if(i==3){
  //3
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentD,  LOW);
  digitalWrite(segmentG,  LOW);
  digitalWrite(segmentE,  HIGH);
  digitalWrite(segmentF,  HIGH);
 
 }
 else if(i==4){
  //4
  digitalWrite(segmentF,  LOW);
  digitalWrite(segmentG,  LOW);
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentA,  HIGH);
  digitalWrite(segmentE,  HIGH);
  digitalWrite(segmentD,  HIGH);
 
 }
 else if(i==5){
  //5
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentF,  LOW);
  digitalWrite(segmentG,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentD,  LOW);
  digitalWrite(segmentB,  HIGH);
  digitalWrite(segmentE,  HIGH);
  
 }
 else if(i==6){
  // 6 
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentF,  LOW);
  digitalWrite(segmentG,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentD,  LOW);
  digitalWrite(segmentE,  LOW);
  digitalWrite(segmentB,  HIGH);
  
 }
 else if(i==7){
  // 7 
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentD,  HIGH);
  digitalWrite(segmentE,  HIGH);
  digitalWrite(segmentF,  HIGH);
  digitalWrite(segmentG,  HIGH);
  
 }
 else if(i==8){
  // 8 
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentD,  LOW);
  digitalWrite(segmentE,  LOW);
  digitalWrite(segmentF,  LOW);
  digitalWrite(segmentG,  LOW);
 
 }
 else if(i==9){
  // 9 
  digitalWrite(segmentA,  LOW);
  digitalWrite(segmentB,  LOW);
  digitalWrite(segmentC,  LOW);
  digitalWrite(segmentD,  LOW);
  digitalWrite(segmentF,  LOW);
  digitalWrite(segmentG,  LOW);
  digitalWrite(segmentE,  HIGH);
  
 }

  if(digitalRead(12)==1)
  {
    while(digitalRead(12)==1)
    {
     Serial.println(i); 
    }
    i++; //increase counter with each push button
  }
    //start count back to 0
  if(i == 10)
  {
    i = 0;
  }
  delay(1000); 
}
