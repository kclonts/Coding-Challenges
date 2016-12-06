#!/bin/python3

import sys

def sum_of_mult(n):
  three = []
  five = []

  for x in range(1, n):
    temp = 3 * x
    if temp > n:
      break
    three.append(temp)

  for x in range(1, n):
    temp = 5 * x
    if temp > n:
      break
    five.append(temp)

    all_ = []
    all_.extend(three)
    all_.extend(five)
    all_.sort()

    sum_ = 0
    for x in range(len(all_)-1):
      if all_[x] is not all_[x+1]:
        sum_ += all_[x]
    sum_ += all_[-1]
    return sum_

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    print(sum_of_mult(n))
