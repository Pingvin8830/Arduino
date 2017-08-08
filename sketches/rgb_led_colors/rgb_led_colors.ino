// set consts
const int RED_PIN   =    9;
const int GREEN_PIN =   10;
const int BLUE_PIN  =   11;
const int MIN_LEVEL =    0;
const int MAX_LEVEL =  255;
const int SEC       = 1000;

// declare vars
int redLevel;
int greenLevel;
int blueLevel;
int i;

void setup() {
  // put your setup code here, to run once:

  // set pins mode
  pinMode (RED_PIN,   OUTPUT);
  pinMode (GREEN_PIN, OUTPUT);
  pinMode (BLUE_PIN,  OUTPUT);

  // disable output signals
  digitalWrite (RED_PIN,   LOW);
  digitalWrite (GREEN_PIN, LOW);
  digitalWrite (BLUE_PIN,  LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  start_message ();
  delay (1 * SEC);

  show_colors ();
  delay (1 * SEC);

  end_message ();
  delay (5 * SEC);

}

void start_message () {

  // disable output signals
  digitalWrite (RED_PIN,   LOW);
  digitalWrite (GREEN_PIN, LOW);
  digitalWrite (BLUE_PIN,  LOW);
  
  // Red signal
  digitalWrite (RED_PIN, HIGH);
  delay (1 * SEC);
  digitalWrite (RED_PIN, LOW);
  delay (1 * SEC);

  // Green signal
  digitalWrite (GREEN_PIN, HIGH);
  delay (1 * SEC);
  digitalWrite (GREEN_PIN, LOW);
  delay (1 * SEC);

  // Blue signal
  digitalWrite (BLUE_PIN, HIGH);
  delay (1 * SEC);
  digitalWrite (BLUE_PIN, LOW);
  delay (1 * SEC);
  
}

void show_colors () {
  for (redLevel = MIN_LEVEL; redLevel <= MAX_LEVEL; redLevel++) {
    for (greenLevel = MIN_LEVEL; greenLevel <= MAX_LEVEL; greenLevel++) {
      for (blueLevel = MIN_LEVEL; blueLevel <= MAX_LEVEL; blueLevel++) {
        analogWrite (RED_PIN,   redLevel);
        analogWrite (GREEN_PIN, greenLevel);
        analogWrite (BLUE_PIN,  blueLevel);
        delay (10);
      }
    }
  }
}

void end_message () {
  for (i = 1; i <= 3; i++) {

    // 000
    digitalWrite (RED_PIN,   LOW);
    digitalWrite (GREEN_PIN, LOW);
    digitalWrite (BLUE_PIN,  LOW);
    delay (10);
    
    // 001
    digitalWrite (RED_PIN,   LOW);
    digitalWrite (GREEN_PIN, LOW);
    digitalWrite (BLUE_PIN,  HIGH);
    delay (10);
    
    // 010
    digitalWrite (RED_PIN,   LOW);
    digitalWrite (GREEN_PIN, HIGH);
    digitalWrite (BLUE_PIN,  LOW);
    delay (10);
    
    // 011
    digitalWrite (RED_PIN,   LOW);
    digitalWrite (GREEN_PIN, HIGH);
    digitalWrite (BLUE_PIN,  HIGH);
    delay (10);
    
    // 100
    digitalWrite (RED_PIN,   HIGH);
    digitalWrite (GREEN_PIN, LOW);
    digitalWrite (BLUE_PIN,  LOW);
    delay (10);
    
    // 101
    digitalWrite (RED_PIN,   HIGH);
    digitalWrite (GREEN_PIN, LOW);
    digitalWrite (BLUE_PIN,  HIGH);
    delay (10);
    
    // 110
    digitalWrite (RED_PIN,   HIGH);
    digitalWrite (GREEN_PIN, HIGH);
    digitalWrite (BLUE_PIN,  LOW);
    delay (10);
    
    // 111
    digitalWrite (RED_PIN,   HIGH);
    digitalWrite (GREEN_PIN, HIGH);
    digitalWrite (BLUE_PIN,  HIGH);
    delay (10);

    // 000
    digitalWrite (RED_PIN,   LOW);
    digitalWrite (GREEN_PIN, LOW);
    digitalWrite (BLUE_PIN,  LOW);
    delay (10);

  }
}


