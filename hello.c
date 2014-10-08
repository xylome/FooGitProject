#include <stdio.h>



int get_fourty_two() {
  return 42;
}



int feature_one_o_one() {

  return 101;
}

int main(int argc, char **argv) {
  int fourty_two;

  fourty_two = get_fourty_two();

  printf("Hello git %d\n", fourty_two);
  
  return 0;
}
