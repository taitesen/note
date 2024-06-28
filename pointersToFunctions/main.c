#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void smoothPrint(const char *text, int delayInMillis) {
  while (*text) {
    printf("%c", *text++);
    fflush(stdout);
    usleep(delayInMillis * 1000);
  }
  printf("\n");
}

void ohmlaw(char code[]) {
  smoothPrint(
      "Ohm's Law states that the current flowing through a conductor "
      "between two points is directly proportional to the voltage across "
      "the two points, provided the temperature remains constant. The "
      "mathematical relationship is given by: V=I⋅R \n",
      25);
}

void new1(char code[]) {
  smoothPrint(
      "An object will remain at rest or in uniform motion in a straight "
      "line unless acted upon by an external force\n",
      25);
}

void new2(char code[]) {
  smoothPrint(
      "The acceleration of an object is directly proportional to the net "
      "force acting on it, and inversely proportional to its mass. The "
      "direction of the acceleration is the same as the direction of the "
      "net force acting on the object\n",
      25);
}

void new3(char code[]) {
  smoothPrint("For every action, there is an equal and opposite reaction.\n",
              25);
}

void magic(char *code, void (*darkMagic)(char *)) { return darkMagic(code); }

int main() {
  char *enigma;
  enigma = malloc(40);
  if (enigma == NULL) {
    printf("engima failed");
    return 1;
  }
  printf("State: ");
  scanf("%[^\n]%*c", enigma);

  if (strcmp(enigma, "ohm's law") == 0) {
    magic(enigma, ohmlaw);
  } else if (strcmp(enigma, "newton first law") == 0) {
    magic(enigma, new1);
  } else if (strcmp(enigma, "newton second law") == 0) {
    magic(enigma, new2);
  } else if (strcmp(enigma, "newton third law") == 0) {
    magic(enigma, new3);
  } else {
    printf("Invalid entry moron\n");
    return -1;
  }
  free(enigma);
  return 0;
}
