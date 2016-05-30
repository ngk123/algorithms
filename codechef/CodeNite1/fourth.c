#include<stdio.h>
#include<stdlib.h>


#define INT_INF 10000

int search_replace(int *lis, int left, int right, int key) {
        int mid;

        for (mid = (left+right)/2; left <= right; mid = (left+right)/2) {
                if (lis[mid] > key) {
                        right = mid - 1;
                } else if (lis[mid] == key) {
                        return mid;
                } else if (mid+1 <= right && lis[mid+1] >= key) {
                        lis[mid+1] = key;
                        return mid+1;
                } else {
                        left = mid + 1;
                }
        }
        if (mid == left) {
                lis[mid] = key;
                return mid;
        }
        lis[mid+1] = key;
        return mid+1;
}




int main()
{
  int T,N,A[100001],i;
 
  scanf("%d",&T);

  while(T--)
    {
      scanf("%d",&N);

      for(i=0;i<N;i++)
	{
	  scanf("%d",&A[i]);
	}
 

    

    int  tmp, size, lis_length = -1; 

    size=N;
        int *answer;
	// int A[7] = {1,8,4,12,6,6,1},
           int  LIS[100001],
            index[100001] = {0};

        LIS[0] = A[0];
        for (i = 1; i < size; ++i) {
                LIS[i] = INT_INF;
        }

        for (i = 1; i < size; ++i) {
                index[i] = search_replace(LIS, 0, i, A[i]);
                if (lis_length < index[i]) {
                        lis_length = index[i];
                }
        }

	printf("%d\n",lis_length+1);




    }




















  return 0;


}
