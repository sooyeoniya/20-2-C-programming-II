int get_length(NODE *plist)
{
	NODE *p;
	int length = 0;

	p = plist;

	while( p )
	{
		length++;
		p = p->link;
	} 
	printf("리스트의 길이는 %d\n", length);
	return length;
}