double get_total_avg(int m[][COLS])
{
	int *p, *endp;
	double sum = 0.0;

	p = &m[0][0];			// p는 0행의 시작 주소
	endp = &m[ROWS-1][COLS-1];	// endp는 (ROWS-1)행의 종료 주소

	while( p <= endp )		// p가 종료 주소보다 작거나 같으면
		sum += *p++;          // sum에 p가 가리키는 값 누적

	sum /= ROWS * COLS;		// 평균 계산

	return sum;
	
}