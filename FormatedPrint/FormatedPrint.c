#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WIDTH 30
// CelciusFarenheit ← they are 16 characters long.
#define TITLE_WHITE_SPACE (WIDTH - 16 - 1)

void formatedPrint(float valueC, float valueF) {
  int celciusLength = snprintf(NULL, 0, "%.2f", valueC);
  char *celciusString = malloc(celciusLength + 1);
  snprintf(celciusString, celciusLength + 1, "%.2f", valueC);

  int farenheitLength = snprintf(NULL, 0, "%.2f", valueF);
  char *farenheitString = malloc(farenheitLength + 1);
  snprintf(farenheitString, farenheitLength + 1, "%.2f", valueF);

  if (celciusLength + farenheitLength >= WIDTH) {
    printf("Error: string too long");
    return;
  }

  int amountOfSpaces = WIDTH - 1 - (celciusLength + 2) - (farenheitLength + 2);
  char whiteSpace[amountOfSpaces];
  memset(whiteSpace, ' ', amountOfSpaces);

  char result[WIDTH] = {0};
  strcat(result, celciusString);
  strcat(result, "°C");
  strcat(result, whiteSpace);
  strcat(result, farenheitString);
  strcat(result, "°F");

  printf("%s \n", result);
  return;
};

void printTableTitles() {
  char *whiteSpace[TITLE_WHITE_SPACE] = {0};
  memset(whiteSpace, ' ', TITLE_WHITE_SPACE);

  //   char testing[43];
  //   memset(testing, ' ', 40);
  //   printf("%s\n", testing);

  printf("%s\n", whiteSpace);
  printf("Celcius%sFarenheit\n", whiteSpace);
  return;
}
