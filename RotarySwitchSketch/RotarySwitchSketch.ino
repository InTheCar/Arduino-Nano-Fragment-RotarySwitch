// For 2 rotary switches
int SW1_PIN = A1;
int SW2_PIN = A2;


void setup() {
  Serial.begin(38400); //serial speed UART Interface
}
//int saved_switch_position=0;
void loop() {
  static int SW1_saved_switch_position=get_switch_11_level(SW1_PIN);
  static int SW1_actual_switch_position =0;
  
  static int SW2_saved_switch_position=get_switch_11_level(SW2_PIN);
  static int SW2_actual_switch_position =0;

  SW1_actual_switch_position=get_switch_11_level(SW1_PIN);
  SW2_actual_switch_position=get_switch_11_level(SW2_PIN);
//  actual_switch_position=get_switch_11_level(A2);
  delay(200);
  if(SW1_actual_switch_position !=  get_switch_11_level(SW1_PIN)){
    SW1_actual_switch_position = SW1_saved_switch_position;
  }
  if (SW1_saved_switch_position != SW1_actual_switch_position){
    SW1_saved_switch_position = SW1_actual_switch_position;
    switch(SW1_actual_switch_position){
      case 1: Serial.println("Switch " + String(SW1_PIN) + " position 1");
        break;
      case 2: Serial.println("Switch " + String(SW1_PIN) + " position 2");
        break;
      case 3: Serial.println("Switch " + String(SW1_PIN) + " position 3");
        break;
      case 4: Serial.println("Switch " + String(SW1_PIN) + " position 4");
        break;
      case 5: Serial.println("Switch " + String(SW1_PIN) + " position 5");
        break;
      case 6: Serial.println("Switch " + String(SW1_PIN) + " position 6");
        break;
      case 7: Serial.println("Switch " + String(SW1_PIN) + " position 7");
        break;
      case 8: Serial.println("Switch " + String(SW1_PIN) + " position 8");
        break;
      case 9: Serial.println("Switch " + String(SW1_PIN) + " position 9");
        break;
      case 10: Serial.println("Switch " + String(SW1_PIN) + " position 10");
        break;
      case 11: Serial.println("Switch " + String(SW1_PIN) + " position 11");
        break;
    }
  }
    if(SW2_actual_switch_position !=  get_switch_11_level(SW2_PIN)){
    SW2_actual_switch_position = SW2_saved_switch_position;
  }
  if (SW2_saved_switch_position != SW2_actual_switch_position){
    SW2_saved_switch_position = SW2_actual_switch_position;
    switch(SW2_actual_switch_position){
      case 1: Serial.println("Switch " + String(SW2_PIN) + " position 1");
        break;
      case 2: Serial.println("Switch " + String(SW2_PIN) + " position 2");
        break;
      case 3: Serial.println("Switch " + String(SW2_PIN) + " position 3");
        break;
      case 4: Serial.println("Switch " + String(SW2_PIN) + " position 4");
        break;
      case 5: Serial.println("Switch " + String(SW2_PIN) + " position 5");
        break;
      case 6: Serial.println("Switch " + String(SW2_PIN) + " position 6");
        break;
      case 7: Serial.println("Switch " + String(SW2_PIN) + " position 7");
        break;
      case 8: Serial.println("Switch " + String(SW2_PIN) + " position 8");
        break;
      case 9: Serial.println("Switch " + String(SW2_PIN) + " position 9");
        break;
      case 10: Serial.println("Switch " + String(SW2_PIN) + " position 10");
        break;
      case 11: Serial.println("Switch " + String(SW2_PIN) + " position 11");
        break;
    }

  
  }
//  Serial.println(String(get_switch_11_level(A0)));
  
}

int get_switch_11_level(int AD_Wandler){
  int return_value = 0;
  int x = analogRead(AD_Wandler);
  if (x >= 0 && x <= 51){
    return_value = 1;
  }
  else if (x >= 52 && x <= 153){
    return_value = 2;
  }
  else if (x >= 154 && x <= 256){
    return_value = 3;
  }
  else if (x >= 257 && x <= 358){
    return_value = 4;
  }
  else if (x >= 359 && x <= 460){
    return_value = 5;
  }
  else if (x >= 461 && x <= 563){
    return_value = 6;
  }
  else if (x >= 564 && x <= 665){
    return_value = 7;
  }
  else if (x >= 666 && x <= 767){
    return_value = 8;
  }
  else if (x >= 768 && x <= 870){
    return_value = 9;
  }
  else if (x >= 871 && x <= 972){
    return_value = 10;
  }
  else if (x >= 973 && x <= 1023){
    return_value = 11;
  }
return(return_value);
}
