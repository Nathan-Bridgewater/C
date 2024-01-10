#include <stdio.h>

/*Prints a Celcius to Farenheit table*/

int main() {

float lower, upper, step;
float farh, celc;

lower = 0;
upper = 200;
step = 20;
celc = lower;

printf("Celcius to Fareneheit\n");

while(lower <= upper) {
  farh = celc * ( 9.0 / 5.0 ) + 32.0;
  printf("%3f %6.2f\n", celc, farh);
  lower = lower + step;
  }
}
