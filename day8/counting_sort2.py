import math
import os
import random
import re
import sys

def countingSort(arr):
    max_val = max(arr)
    count_array = [0] * (max_val + 1)
    
  
    for num in arr:
        count_array[num] += 1
    
    sorted_array = []
    for i in range(len(count_array)):
        sorted_array += [i] * count_array[i]
    
    return sorted_array


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = countingSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
