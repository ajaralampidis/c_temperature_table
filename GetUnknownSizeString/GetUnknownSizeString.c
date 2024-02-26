#include "./GetUnknownSizeString.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// COMENTANDO TRANQUI BIEN FRESCO

void GetUnknownSizeString(char **charList) {
  for (int i = 0; 1; i++) {
    if (i)  // I.e if i!=0
      *charList = (char *)realloc((*charList), i + 1);
    else
      *charList = (char *)malloc(i + 1);
    (*charList)[i] = getchar();
    if ((*charList)[i] == '\n') {
      (*charList)[i] = '\0';
      break;
    }
  }
}
