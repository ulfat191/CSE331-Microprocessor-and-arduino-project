int in_0 = 8;
int in_1 = 9;
int in_2 = 10;
int in_3 = 11;
int out_0 = 5;
int out_1 = 4;
int out_2 = 3;
int out_3 = 2;
int A = 0;
int B = 0;
int C = 0;
int D = 0;

void setup() {
pinMode(in_0, INPUT);
pinMode(in_1, INPUT);
pinMode(in_2, INPUT);
pinMode(in_3, INPUT);
pinMode(out_0, OUTPUT);
pinMode(out_1, OUTPUT);
pinMode(out_2, OUTPUT);
pinMode(out_3, OUTPUT);
}

void loop() {
A = digitalRead(in_0);
B = digitalRead(in_1);
C = digitalRead(in_2);
D = digitalRead(in_3);

if ((!D && !C && !A) || (!C && !B) || (!D && !B && A) || (D && !C && A)){
digitalWrite(out_0, HIGH);
} else {
digitalWrite(out_0, LOW);
}

if ((!D && B) || (B && A) || (!D && C) || (D && !C && !B) || (D && !B && !A)){
digitalWrite(out_1, HIGH);
} else {
digitalWrite(out_1, LOW);
}

if ((!D && !C && !B && !A) || (C && B && !A) || (D && B) || (D && C)){
digitalWrite(out_2, HIGH);
} else {
digitalWrite(out_2, LOW);
}

if ((!D && !C && B) || (!D && C && !B) || (D && B && ~A) || (D && C && A)){
digitalWrite(out_3, HIGH);
} else {
digitalWrite(out_3, LOW);
}

}