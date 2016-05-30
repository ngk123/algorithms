from random import randint
#maxt = 10
#maxn = 10000
#maxq = 15000
#maxa = 10**9
#maxx = 10**18
maxt = 10
maxn = 100
maxq = 1000
maxa = 103343
maxx = 10343
tc = randint(1,maxt)
print(tc)
for _ in range(tc) :
  n = randint(1,maxn)
  q = randint(1, maxq)
  print(n,q)
  arr = [randint(-maxa, maxa) for _ in range(n)]
  for x in arr :
    print(x, end= " ")
  print()
  query = [randint(1, maxx) for _ in range(q)]
  for x in query :
     print(x, end= " ")
  print()
