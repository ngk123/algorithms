#!/usr/bin/python
tc = int(input())
for _ in range(tc) :
  n, q = map(int, input().split())
  arr = [int(x) for x in input().split()]
  query = [int(x) for x in input().split()]
  for x in query :
    sum = 0
    i = 1
    for a in arr :
      sum += a * int(pow(x, 1.0/(i))) 
      i+=1
    sum %= 1000000007
    print sum,
  print()