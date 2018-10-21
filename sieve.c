#include <stdio.h>
#include <math.h>
#include "sieve.h"

int sieve(int target){
  int SIZE = 0;
  if(target>5000){
    SIZE = 1.15 * target * log(target);
  }else{
    SIZE = 1.30 * target * log(target) + 10;
  }
  int nums[SIZE];
  int x;
  for(x=0;x<SIZE;x++){
    nums[x] = x+1;
  }
  int primes = 0;
  int iterations = 0;
  while(primes != target){
    if(nums[iterations] < 2){
    }else{
      int i;
      for(i = 2; i < (SIZE/nums[iterations]); i++){
        nums[nums[iterations]*i-1] = 0;
      }
      primes++;
    }
    iterations++;
  }
  return nums[iterations-1];
}
