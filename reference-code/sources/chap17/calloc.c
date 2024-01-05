// 10개의 long형 정수를 저장할 수 있는 공간을 할당받는다. 초기값은 전부 0이 된다. 
 
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	long *buffer;
	int i;

	buffer = (long *)calloc( 5, sizeof( long ) );
	if( buffer == NULL )
	{
		printf( "메모리 할당 오류\n" );
		exit(1);
	}
	for(i = 0;i < 5; i++)
		printf("%d\n", buffer[i]);

	free( buffer );
	return 0;
}
