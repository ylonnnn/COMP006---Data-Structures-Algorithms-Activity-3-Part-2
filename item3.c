#include <stdint.h>
#include <stdio.h>

#define i32 int32_t

i32 main() {
  i32 n;

  printf("Input the size of array: ");
  scanf("%d", &n);

  printf("Input %d elements in the array:\n", n);

  i32 nums[n];
  for (i32 i = 0; i < n; ++i) {
    printf("element - %d: ", i);
    scanf("%d", nums + i);
  }

  // Sort the array
  // Selection Sort for Simplicity
  for (i32 i = 0; i < n; ++i) {
    for (i32 j = i + 1; j < n; ++j) {
      i32 curr_i = nums[i], curr_j = nums[j];

      if (curr_j < curr_i) {
        nums[i] = curr_j;
        nums[j] = curr_i;
      }
    }
  }

  printf("Elements of the array in sorted ascending order:\n");
  for (i32 i = 0; i < n; ++i)
    printf("%d ", nums[i]);

  printf("\n");
}
