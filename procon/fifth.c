#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
  int T,i,j,k,l;

  char A[5][31],c;

  char new[][5]={{"ABCDE"},{"ABCED"}};

  printf("%s\n",new[0]);

  /*
ABDCE
ABDEC
ABEDC
ABECD
ACBDE
ACBED
ACDBE
ACDEB
ACEDB
ACEBD
ADCBE
ADCEB
ADBCE
ADBEC
ADEBC
ADECB
AECDB
AECBD
AEDCB
AEDBC
AEBDC
AEBCD
BACDE
BACED
BADCE
BADEC
BAEDC
BAECD
BCADE
BCAED
BCDAE
BCDEA
BCEDA
BCEAD
BDCAE
BDCEA
BDACE
BDAEC
BDEAC
BDECA
BECDA
BECAD
BEDCA
BEDAC
BEADC
BEACD
CBADE
CBAED
CBDAE
CBDEA
CBEDA
CBEAD
CABDE
CABED
CADBE
CADEB
CAEDB
CAEBD
CDABE
CDAEB
CDBAE
CDBEA
CDEBA
CDEAB
CEADB
CEABD
CEDAB
CEDBA
CEBDA
CEBAD
DBCAE
DBCEA
DBACE
DBAEC
DBEAC
DBECA
DCBAE
DCBEA
DCABE
DCAEB
DCEAB
DCEBA
DACBE
DACEB
DABCE
DABEC
DAEBC
DAECB
DECAB
DECBA
DEACB
DEABC
DEBAC
DEBCA
EBCDA
EBCAD
EBDCA
EBDAC
EBADC
EBACD
ECBDA
ECBAD
ECDBA
ECDAB
ECADB
ECABD
EDCBA
EDCAB
EDBCA
EDBAC
EDABC
EDACB
EACDB
EACBD
EADCB
EADBC
EABDC
EABCD*/
 
  scanf("%d",&T);
   getchar();
  for(i=0;i<T;i++)
    {
      for(j=0;j<5;j++)
	{ 
   
	  gets(A[j]);

  
	}
      

   
 
      // printf("%s\n",A[4]);

 
 
 
      for(k=0;k<2;k++)
	{
	  
	  check=1;

	  for(m=0;m<5;m++)
	    {
	      
	      
                  if(A[m][o]=='\n')break;
		  if(A[m][o]==' '){e=0;continue;}
                  cond[e++]=A[m][o];
		  if(A[m][o+1]!='' || A[m][o+1]!='\n')continue;
                  if(e==1)
		    {
		      switch(cond[0])
			{
			case '1':
			  if(val!=1)check=0;
			  break;
			case '2':
			  if(val!=2)check=0;
			  break;
			case '3':
			  if(val!=3)check=0;
			  break;
			case '4':
			  if(val!=4)check=0;
			  break;
			case '5':
			  if(val!=5)check=0;
			  break;			  
			case 'A':
                          if(val!=a+1 &&  val!=a-1)
			    {
			      check=0;
			    } 
			case 'B':
                          if(val!=b+1 &&  val!=b-1)
			    {
			      check=0;
			    } 
			case C:
                          if(val!=c+1 &&  val!=c-1)
			    {
			      check=0;
			    } 
			case D:
                          if(val!=d+1 &&  val!=d-1)
			    {
			      check=0;
			    } 
			case E:
                          if(val!=e+1 &&  val!=e-1)
			    {
			      check=0;
			    } 

			}
                     
		      if(check==0)break;


		      
		      
		      
		  
		  
		} 

	      
	    }
	      
	      
	      
	      




	}

  


   


  return 0;


}
