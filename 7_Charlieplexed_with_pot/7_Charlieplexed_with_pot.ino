const int CP[4] = { A2, A3, A4, A5 };  //Charlieplexed LEDs Pinmap
const int POT = A6;
char pattern[12][4] = {
  "ZZ01",  //1
  "Z0Z1",  //2
  "0ZZ1",  //3
  "Z01Z",  //4
  "0Z1Z",  //5
  "ZZ10",  //6
  "01ZZ",  //7
  "Z1Z0",  //8
  "Z10Z",  //9
  "1ZZ0",  //10
  "1Z0Z",  //11
  "10ZZ"   //12
};

int MAX_DELAY = 1000;
int MIN_DELAY = 0;
int DELAY = MAX_DELAY;

void setup() {
  pinMode(POT, INPUT);
}

void loop() {
  for (int i = 0; i < 12; i++) {
    DELAY = map(analogRead(POT), 0, 1023, 0, 1000);
    for (int j = 0; j < 4; j++) {
      if (pattern[i][j] == 'Z') {
        pinMode(CP[j], INPUT);
      } else {
        pinMode(CP[j], OUTPUT);
        digitalWrite(CP[j], int(pattern[i][j]) - 48);
      }
    }
    delay(DELAY);
  }
}