#include <stdio.h>

int main(){
  int nums[]= {1, 2 ,3, 4, 5};

  int *pnums = nums;

  int i;
  //printf("%lu\n", sizeof(nums));
  for (i = 0;i < 5; i++){
  printf("&nums[%d]: %p, pnums + %d: %p, nums + %d: %p\n\n", i, (void *)&nums[i], i, (void *)(pnums + i), i, (void *)(nums + i));  
  printf("nums[%d]: %d, *(pnums + %d): %d, *(nums + %d): %d\n\n", i, nums[i], i, *(pnums + i), i, *(nums + i));
  }

return 0;
}
