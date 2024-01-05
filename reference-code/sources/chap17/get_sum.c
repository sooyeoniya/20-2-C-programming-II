int get_sum(NODE *plist)
{
	NODE *p;
	int sum = 0;

	p = plist;

	while( p )
	{
		sum += p->data;
		p = p->link;
	} 
	printf("리스트의 합계는 %d\n", sum);
	return sum;
}