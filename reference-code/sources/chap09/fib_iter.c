fib_iter(int n)
{
	if( n < 2 ) 
		return n;
	else 
	{
		int i, tmp, f1=1, f0=0;
		for(i = 2;i <= n; i++)
		{
			tmp = f1;
			f1 += f0;
			f0 = tmp;
		}
		return f1;
	}
}
