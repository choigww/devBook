#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("나이를 입력하세요 : ");
	scanf("%d", &nAge);

	// if문 시작
	if (nAge >= 20)
		printf("당신의 나이는 %d세 입니다.\n", nAge);


	// if문 끝

	puts("End");
	return 0;
}