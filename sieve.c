#include <stdio.h>
#include <math.h>
#include "sieve.h"

int sieve(int target){
  int primes[target];
  int SIZE = 0;
  if(target>5000){
    SIZE = 1.15 * target * log(target);
  }else{
    SIZE = 1.30 * target * log(target) + 10;
  }
  int nums[SIZE];
  int x;
  for(x=0;x<SIZE;x++){
    nums[x] = x;
  }
  int iteration = 0;
  int i = 0;
  while(iteration != target-1){
    if(nums[i] ){//is prime
      primes[iteration] = nums[i];
      iteration++;
    }
    i++;
  }
  return primes[target-1];
}
