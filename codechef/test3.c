#include <string.h>
#include <stdio.h>
#include<stdlib.h>

static int distance ( int  word1[],
                     int len1,
                      int  word2[],
                     int len2)
{
    int matrix[len1 + 1][len2 + 1];
    int i;
    for (i = 0; i <= len1; i++) {
        matrix[i][0] = i;
    }
    for (i = 0; i <= len2; i++) {
        matrix[0][i] = i;
    }
    for (i = 1; i <= len1; i++) {
        int j;
        int c1;

        c1 = word1[i-1];
        for (j = 1; j <= len2; j++) {
            int c2;

            c2 = word2[j-1];
            if (c1 == c2) {
                matrix[i][j] = matrix[i-1][j-1];
            }
            else {
                int delete;
                int insert;
                int substitute;
                int minimum;

                delete = matrix[i-1][j] + 1;
                insert = matrix[i][j-1] + 1;
                substitute = matrix[i-1][j-1] + 1;
                minimum = delete;
                if (insert < minimum) {
                    minimum = insert;
                }
                if (substitute < minimum) {
                    minimum = substitute;
                }
                matrix[i][j] = minimum;
            }
        }
    }
    return matrix[len1][len2];
}

int main ()
{
     int word1[101];
     int word2[101];
    char temp;
    int len1;
    int len2,T;
    int d,i,n,m;

    // word1 = "pieces";
    //word2 = "paces";
    scanf("%d",&T);
    while(T--)
      {
	//	word1=(int*)malloc(m*sizeof(int));
	//word2=(int*)malloc(n*sizeof(int));
	scanf("%d",&m);
	for(i=0;i<m;i++)
	  {
	    scanf("%d",&d);
	   
	    word1[i]=d;
	  }


	scanf("%d",&n);
	for(i=0;i<n;i++)
	  {
	    scanf("%d",&d);
	    
	    word2[i]=d;
	  }
	len1 = m;
	len2 = n;
	d = distance (word1, len1, word2, len2);
	printf ("%d\n",
		 d);
      }
    return 0;
}
