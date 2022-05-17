/*c code to convert the currency*/


#include <stdio.h>
float convert_INR_to_USD(float INR)
{
    return INR / 77.49;
}
float convert_USD_to_INR(float USD)
{
    return USD * 77.49;
}

float convert_meter_feet(float meter)
{
    return meter * 3.280839;
}
float convert_feet_meter(float feet)
{
    return feet * 0.304;
}
float convert_Celsius_Fahrenheit(float Celsius)
{
    return ((Celsius * 9 / 5) + 32);
}
float convert_Fahrenheit_Celsius(float Fahrenheit)
{
    return ((Fahrenheit - 32)) * 5 / 9;
}
float conver_MPH_KPH(float MPH)
{
    return MPH * 1.60934;
}
float conver_KPH_MPH(float KPH)
{
    return KPH * 0.621372;
}
int main()
{
    int INR = 1;
    int USD = 1;
    int meter = 1;
    int feet = 1;
    int Celsius = 1;
    int Fahrenheit = 1;
    int MPH=1;
    int KPH=1;
    printf("%d INR(Indian rupee) = %f USD (dollars)\n", INR, convert_INR_to_USD(INR));
    printf("%d USD(dollar) = %f INR(Indian rupees)\n", USD, convert_USD_to_INR(USD));
    printf("%d meters=%f feets\n", meter, convert_meter_feet(meter));
    printf("%d feets=%f meters\n", feet, convert_feet_meter(feet));
    printf("%d Celsius=%f Fahrenheit\n", Celsius, convert_Celsius_Fahrenheit(Celsius));
    printf("%d Fahrenheit =%f Celsius\n",Fahrenheit , convert_Fahrenheit_Celsius(Fahrenheit));
    printf("%d MPH = %f KPM\n",MPH,conver_MPH_KPH(MPH));
      printf("%d KPH = %f MPH\n",KPH,conver_KPH_MPH(KPH));
  
}