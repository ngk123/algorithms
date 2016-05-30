

void wellOrderString(int n)
{
	string str;
	dfs(str,0,n);	
	return 0;
}

void dfs(string str,int posToFill,int len)
{
	if(pos==len)
	{
		cout << str << endl;
		return ;	
	}
	if(posToFill>0)
	start=(int)str[posToFill-1]-65+1;
	else
	{
		start=0;
	}
	for(i=start;i<27;i++)
	{
		if(27-i < (len-posToFill))
		{
			break;	
		}
		
		str2=str+char(65+i);
		dfs(str2,posToFill+1,len);
	}

}

