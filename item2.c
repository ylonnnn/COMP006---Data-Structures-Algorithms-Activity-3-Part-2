#include <stdint.h>
#include <stdio.h>

#define i32 int32_t

i32 main() {
  i32 n;

  printf("Input the size of array: ");
  scanf("%d", &n);

  printf("Input %d elements:\n", n);

  i32 nums[n];
  for (i32 i = 0; i < n; ++i) {
    printf("element - %d: ", i);
    scanf("%d", nums + i);
  }

  i32 pos;
  printf("Input the position where to delete: ");
  scanf("%d", &pos);

  if (pos < 0 || pos >= n) {
    printf("Out of bounds position!\n");
    return -1;
  }

  --n;

  for (i32 i = pos - 1; i < n; ++i)
    nums[i] = nums[i + 1]; // Shift the elements

  printf("The new list is: ");
  for (i32 i = 0; i < n; ++i)
    printf("%d ", nums[i]);

  printf("\n");
}
