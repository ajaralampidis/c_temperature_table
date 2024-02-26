#include "./TemperatureConversion.h"

// (32°F − 32) × 5/9 = 0°C
// (10°F − 32) × 5/9 = -12.22°C
// (X°F − 32) × 5/9 = -Y°C
//

// (0°C × 9/5) + 32 = 32°F
// 9/5 = 1.8

float FarenheitToCelcius(float farenheit) {
  return (farenheit - 32) * (5.0 / 9);
}

float CelciusToFarenheit(float celcius) { return (celcius * (9.0 / 5)) + 32; }