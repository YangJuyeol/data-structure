#include <cstdio>

int findMaxValue(int a[], int len )
{
	int maxVAl = a[0];

	for (int i = 1; i < len; i++) {
		if (maxVal < a[i])
			maxVal = a[i];
	}
	return maxVAl;
}
//2���� ����(�迭)���� �ִ� ��� ���� ���� �Լ�
int findMaxPixel(int a[][5], int h, int w)
{
	int maxVal = 0;
	// h�� ������ height, w�� ������ width
	for (int i = 0, i< h; i++){
		for (int j = 0; j < w; j++) {
			if (maxVal < a[i][j])
				maxVal = a[i][j];
		}
	}
	return maxVal;
}


int main()
{
	//int arr[10] = { 1, 13, 24, 45, 56, 78, 89, 4, 5, 12, 16 };

	int img[4][5] = { {3, 24, 82, 12, 22}, {7, 12, 2, 4, 5}, {6, 45, 18, 12, 1}, {73, 17, 13, 44, 57}, {1, 2, 2, 3, 7} };

	int maxVal = findMaxValue(arr, 10);
	printf("�迭�� �ִ� �� = %d\n", maxVal);

	int maxPixel = findMaxPixel(img, 4, 5);
	printf("������ �ִ� ��� =%d\n")
}