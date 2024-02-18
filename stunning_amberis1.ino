int sw=3;
int motor=5;
int sensor;
void setup()
{
  Serial.begin(3600);
  pinMode(sw,INPUT);
  pinMode(motor,OUTPUT);
}

void loop()
{
  sensor=digitalRead(sw);
  if(sensor==HIGH)
  {
    digitalWrite(motor,1);
  }
  else if (sensor==0)
  {
    digitalWrite(motor,0);
  }
}