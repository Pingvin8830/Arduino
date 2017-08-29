// set consts
const int RED_PIN     =    9;
const int GREEN_PIN   =   10;
const int BLUE_PIN    =   11;
const int MONITOR_PIN =   13;
const int MIN_LEVEL   =    0;
const int MAX_LEVEL   =  255;
const int SEC         = 1000;

// declare vars
int redLevel;
int greenLevel;
int blueLevel;
int i;

void setup() {
  // put your setup code here, to run once:

  // set pins mode
  pinMode (RED_PIN,     OUTPUT);
  pinMode (GREEN_PIN,   OUTPUT);
  pinMode (BLUE_PIN,    OUTPUT);
  pinMode (MONITOR_PIN, OUTPUT);

  // disable output signals
  digitalWrite (RED_PIN,   HIGH);
  digitalWrite (GREEN_PIN, HIGH);
  digitalWrite (BLUE_PIN,  HIGH);
  digitalWrite (MONITOR_PIN, LOW);
  delay (SEC);
  show_monitor ();
  
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

void show_monitor () {
  digitalWrite (MONITOR_PIN, HIGH);
  delay (10);
  digitalWrite (MONITOR_PIN, LOW);
}

void start_message () {

  // disable output signals
  digitalWrite (RED_PIN,   HIGH);
  digitalWrite (GREEN_PIN, HIGH);
  digitalWrite (BLUE_PIN,  HIGH);
  
  // Red signal
  digitalWrite (RED_PIN, LOW);
  show_monitor ();
  digitalWrite (RED_PIN, HIGH);
  delay (1 * SEC);

  // Green signal
  digitalWrite (GREEN_PIN, LOW);
  show_monitor ();
  digitalWrite (GREEN_PIN, HIGH);
  delay (1 * SEC);

  // Blue signal
  digitalWrite (BLUE_PIN, LOW);
  show_monitor ();
  digitalWrite (BLUE_PIN, HIGH);
  delay (1 * SEC);
  
}

void show_colors () {
  for (redLevel = MAX_LEVEL; redLevel >= MIN_LEVEL; redLevel = redLevel - 25) {
    for (greenLevel = MAX_LEVEL; greenLevel >= MIN_LEVEL; greenLevel = greenLevel - 25) {
      for (blueLevel = MAX_LEVEL; blueLevel >= MIN_LEVEL; blueLevel = blueLevel - 25) {
        analogWrite (RED_PIN,   redLevel);
        analogWrite (GREEN_PIN, greenLevel);
        analogWrite (BLUE_PIN,  blueLevel);
        delay (50);
      }
    }
  }
}

void end_message () {

  // 000
  digitalWrite (RED_PIN,   HIGH);
  digitalWrite (GREEN_PIN, HIGH);
  digitalWrite (BLUE_PIN,  HIGH);
  delay (SEC);
  delay (10);
    
  // 001
  digitalWrite (RED_PIN,   HIGH);
  digitalWrite (GREEN_PIN, HIGH);
  digitalWrite (BLUE_PIN,  LOW);
  delay (SEC);
  show_monitor ();
    
  // 010
  digitalWrite (RED_PIN,   HIGH);
  digitalWrite (GREEN_PIN, LOW);
  digitalWrite (BLUE_PIN,  HIGH);
  delay (SEC);
  show_monitor ();
    
  // 011
  digitalWrite (RED_PIN,   HIGH);
  digitalWrite (GREEN_PIN, LOW);
  digitalWrite (BLUE_PIN,  LOW);
  delay (SEC);
  show_monitor ();
    
  // 100
  digitalWrite (RED_PIN,   LOW);
  digitalWrite (GREEN_PIN, HIGH);
  digitalWrite (BLUE_PIN,  HIGH);
  delay (SEC);
  show_monitor ();
    
  // 101
  digitalWrite (RED_PIN,   LOW);
  digitalWrite (GREEN_PIN, HIGH);
  digitalWrite (BLUE_PIN,  LOW);
  delay (SEC);
  show_monitor ();
   
  // 110
  digitalWrite (RED_PIN,   LOW);
  digitalWrite (GREEN_PIN, LOW);
  digitalWrite (BLUE_PIN,  HIGH);
  delay (SEC);
  show_monitor ();
    
  // 111
  digitalWrite (RED_PIN,   LOW);
  digitalWrite (GREEN_PIN, LOW);
  digitalWrite (BLUE_PIN,  LOW);
  delay (SEC);
  show_monitor ();

  // 000
  digitalWrite (RED_PIN,   HIGH);
  digitalWrite (GREEN_PIN, HIGH);
  digitalWrite (BLUE_PIN,  HIGH);
  delay (SEC);
  delay (10);

}


