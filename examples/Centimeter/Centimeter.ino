#include <DistanceGP2Y0A21YK.h>

DistanceGP2Y0A21YK dist;
int distance;

void setup()
{
  Serial.begin(9600);
  dist.begin(A0);
}

void loop()
{
  distance = dist.getDistanceCentimeter();
  Serial.print("\nDistance in centimers: ");
  Serial.print(distance);  
  delay(500); //make it readable
}