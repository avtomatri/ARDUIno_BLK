int btn1 = 3;
int btn2 = 4;
int led1 = 5;
int led2 = 6;
int led3 = 7;
int led4 = 8;
int led5 = 9;
int led6 = 10;
int led7 = 11;
//int menitDelay = 2000;
//int test;
int a;
bool btnActive;
bool btnNonActive;

void setup() {
  // put your setup code here, to run once:
  pinMode(btn1, INPUT);

  // 7 Segment  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

  Serial.begin(9600);
}

// fungsi angka 0
uint8_t Angka0() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !HIGH);
  digitalWrite(led7, !LOW);
//  delay(menitDelay);
}

// fungsi angka 1
uint8_t Angka1() {
  digitalWrite(led1, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led5, !LOW);
  digitalWrite(led6, !LOW);
  digitalWrite(led7, !LOW);
//  delay(menitDelay);
}

// fungsi angka 2
uint8_t Angka2() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !LOW);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !LOW);
  digitalWrite(led7, !HIGH);
//  delay(menitDelay);
}

// fungsi angka 3
uint8_t Angka3() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led6, !LOW);
  digitalWrite(led7, !HIGH);
//  delay(menitDelay);
}

// fungsi angka 4
uint8_t Angka4() {
  digitalWrite(led1, !LOW);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led5, !LOW);
  digitalWrite(led6, !HIGH);
  digitalWrite(led7, !HIGH);
//  delay(menitDelay);
}

// fungsi angka 5
uint8_t Angka5() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led6, !HIGH);
  digitalWrite(led7, !HIGH);
//  delay(menitDelay);
}

// fungsi angka 6
uint8_t Angka6() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !LOW);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !HIGH);
  digitalWrite(led7, !HIGH);
//  delay(menitDelay);
}

// fungsi angka 7
uint8_t Angka7() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !LOW);
  digitalWrite(led5, !LOW);
  digitalWrite(led6, !LOW);
  digitalWrite(led7, !LOW);
//  delay(menitDelay);
}

// fungsi angka 8
uint8_t Angka8() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !HIGH);
  digitalWrite(led6, !HIGH);
  digitalWrite(led7, !HIGH);
//  delay(menitDelay);
}

// fungsi angka 9
uint8_t Angka9() {
  digitalWrite(led1, !HIGH);
  digitalWrite(led2, !HIGH);
  digitalWrite(led3, !HIGH);
  digitalWrite(led4, !HIGH);
  digitalWrite(led5, !LOW);
  digitalWrite(led6, !HIGH);
  digitalWrite(led7, !HIGH);
//  delay(menitDelay);
}

void loop() {
  // put your main code here, to run repeatedly:

    btnActive = digitalRead(btn1);
    btnNonActive = digitalRead(btn2);
    
    // Count Button    
    if(btnActive == LOW){
     a++;
     delay(500);
     Serial.print(a);  
    }

    if(btnNonActive == LOW){
     a--;
     delay(500);
     Serial.print(a);  
    }

    if(a == 0){
      Angka0();
    }

    if(a == 1){
      Angka1();
    }

    if(a == 2){
      Angka2();
    }

    if(a == 3){
      Angka3();
    }    

    if(a == 4){
      Angka4();  
    }

    if(a == 5){
      Angka5(); 
    }   

    if(a == 6){
      Angka6();   
    }  

    if(a == 7){
      Angka7();  
    }  

    if(a == 8){
      Angka8();  
    }  

    if(a == 9){
      Angka9();  
    }  

    if(a == 10){
      a = 0;  
    }  

    if(a <= -1){
     a = 9;  
    }

//  //  test
//  if(btnActive == LOW){
//    test = 1;
//    Serial.print(test);
//  } else {
//     test = 0;
//    Serial.print(test);
//  }
}