#include <stdint.h>
#include <stdio.h>

#define i32 int32_t

i32 main() {
  i32 n;

  printf("Input the number of elements to be stored in the array: ");
  scanf("%d", &n);

  printf("Input %d elements in the array:\n", n);

  i32 nums[n];
  for (i32 i = 0; i < n; ++i) {
    printf("element - %d: ", i);
    scanf("%d", nums + i);
  }

  i32 max = INT32_MIN, min = INT32_MAX;
  for (i32 i = 0; i < n; ++i) {
    i32 curr = nums[i];

    if (curr < min)
      min = curr;

    if (curr > max)
      max = curr;
  }

  printf("\nMaximum element is : %d\nMinimum element is: %d\n", max, min);
}
