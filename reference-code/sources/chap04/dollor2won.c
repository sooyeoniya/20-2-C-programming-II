#include <stdio.h>

int main(void)
{
	int usd;	// 달러화
	int krw;	// 원화
	
	printf("달러화 금액을 입력하시오: ");		// 입력 안내 메시지

	scanf("%d", &usd);				// 달러화 금액 입력
	krw = 1120 * usd;				// 원화로 환산	
	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);	// 계산 결과 출력

	return 0;					// 함수 결과값 반환 
}