#include <stdio.h>

void procMinMax(int nums[10]) {

  int i, *min, *max;

  min = nums;
  max = nums;

  for(i = 1; i < 10; i++) {
    if (*(nums+i) < *min) {
      min = nums+i;
    }
    if (*(nums+i) > *max) {
      max = nums+i;
    }
  }

  printf("Min = %d\tMax = %d\n", *min, *max);

}

int main(int argc, char const *argv[]) {

  int v[] = {22, 11, 20, 15, 68, 80, 66, 35, 27, 76};

  procMinMax(v);

  return 0;
}
