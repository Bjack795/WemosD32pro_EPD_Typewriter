//GP_functions.ino

void svuotaSeriale() {
  for (int i = 0;i<200;i++)
  {
      Serial.println();
    }
}
////////////////////////
void null_array(int num, char list [][XRES-4*SPAZIATURA]) //all array to null values 
{
  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < ArrayCount(list[0]);j++)
    {
      list [i][j] = NULL;
      
    }
  }
}
///////////////////////////
int sgn(double value)  //function giving the sign of a double
{
  if (value < 0) return -1;
  if (value > 0) return 1;
  return 1;
}
/////////////////////////////
void voltaggio()
{
  voltage = (float)analogRead(34)/4096*5*4.1/3.9;
  Serial.print(voltage,1);
  Serial.println("v");
}
