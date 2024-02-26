#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./FormatedPrint/FormatedPrint.h"
#include "./GetUnknownSizeString/GetUnknownSizeString.h"
#include "./TemperatureConversion/TemperatureConversion.h"

/**
 *
 * @NAME: temperature_table
 * @DESCRIPTION: A simple program to convert temperature between Fahrenheit and
 * Celsius.
 *
 */

int main() {
  char* input = NULL;
  printf("Enter all the temperatures you want to convert: \n");
  GetUnknownSizeString(&input);

  printTableTitles();

  // Declaration of delimiter
  const char separator[4] = " ";
  char* token;
  token = strtok(input, separator);

  // Checks for delimiter
  while (token != NULL) {
    if (strchr(token, 'C') != NULL || strchr(token, 'c') != NULL) {
      // Change from Celsius to Fahrenheit
      float celcius = atof(token);
      float celciusInFarenheit = CelciusToFarenheit(atof(token));
      formatedPrint(celcius, celciusInFarenheit);
    }

    if (strchr(token, 'F') != NULL || strchr(token, 'f') != NULL) {
      // Change from Fahrenheit to Celsius
      float farenheit = atof(token);
      float farenheitInCelcius = FarenheitToCelcius(farenheit);
      formatedPrint(farenheitInCelcius, farenheit);
    }
    // Use of strtok
    // go through other tokens
    token = strtok(0, separator);
  }

  printf("\n");
  return (0);
}