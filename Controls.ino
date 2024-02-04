int R_count,L_count,R,L;
char x;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(A1, INPUT);
pinMode(A2, INPUT);
R_count=0;
L_count=0;
}

void loop() {
  // put your main code here, to run repeatedly:

x=Serial.read();

if(x=='R')
{R_count=R_count+1;
digitalWrite(2,HIGH);
digitalWrite(3,LOW);
x='n';

Serial.println("Right");

}
else if(x=='L')
{L_count=L_count+1;
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
x='n';


Serial.println("Left");

}
else{
  
digitalWrite(2,LOW);
digitalWrite(3,LOW);


Serial.println(R_count);
Serial.println(L_count);

  }

}
