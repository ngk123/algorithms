def get_cyclics(p, k, q):
  found = set()      # set of tuples we have seen so far
  todo = [tuple(p)]  # list of tuples we still need to explore
  n = len(p)
  while todo:
    x = todo.pop()
    for i in range(n - k + 1):
      perm = ( x[:i]                    # Prefix
             + x[i+1:i+k] + x[i:i+1]    # Rotated middle
             + x[i+k:]                  # Suffix
             )
      if perm not in found:
        found.add(perm)
        todo.append(perm)
  
  qt=tuple(q);
  for x in found:
  	if qt==x:
  		return True;
  return  False;
    
   
    
    

t=input();
while t:
	p=[];
	q=[];
	mod=1000000007;
	fact=[1,1,2,6,24,120];
	t=t-1;
	n,k=[int(x) for x in raw_input().split()];	
	p=[int(x) for x in raw_input().split()];
	q=[int(x) for x in raw_input().split()];
	if get_cyclics(p, k, q)==False:
		print "-1";
	else:
		ans=0;
		for i in range(n):
			a=q[i];
			cnt=0;
			for j in range(i+1,n):
				if q[j]<a:
					cnt=cnt+1;
			ans=ans+(cnt*fact[n-i-1]);
	
		
		ans=(ans+1);
		print ans;
	

