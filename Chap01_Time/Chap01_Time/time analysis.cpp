#include <cstdio> // 표준 입출력 헤더파일
#include <cstdlib> //표준 라이브러리 헤더파일
#include <ctime> // time과 관련된 헤더파일

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + 1;
	}
	return sum;
}

int sum_of_N2(int n)
{
	return(n * (n + 1))/ 2;
}


int main(void)
{
	clock_t start, finish; //시작시각, 끝나는 시각
	double duration; // 걸린 시간

	start = clock(); // 현재 시각을 start에 저장
	// 실행시간을 측정하고자하는 코드 입력
	int a = 10 + 20; 
	//...
	finish = clock(); //현재 시각을 finish에 저장
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f 초 걸렸습니다.\n", duration);
	return 0;
}