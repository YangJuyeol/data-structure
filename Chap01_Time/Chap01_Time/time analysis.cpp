#include <cstdio> // ǥ�� ����� �������
#include <cstdlib> //ǥ�� ���̺귯�� �������
#include <ctime> // time�� ���õ� �������

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
	clock_t start, finish; //���۽ð�, ������ �ð�
	double duration; // �ɸ� �ð�

	start = clock(); // ���� �ð��� start�� ����
	// ����ð��� �����ϰ����ϴ� �ڵ� �Է�
	int a = 10 + 20; 
	//...
	finish = clock(); //���� �ð��� finish�� ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f �� �ɷȽ��ϴ�.\n", duration);
	return 0;
}