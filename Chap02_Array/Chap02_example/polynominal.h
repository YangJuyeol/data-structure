#pragma once
#include<cstdio>
#define MAX_DEGREE 100


class Polynomial {
	int degree;				//���׽��� �ְ� ����
	float coef[MAX_DEGREE]; //�� �׿� ���� ���
};

public:
	Polynomial() {
		degree = 0;
		coef[0] = 0.0f;
	}
	void read() {
		printf("���׽��� �ְ� ������ �Է��ϼ���: ");
		sacnf(%d, degree,:
		printf("�� ���� ����� �Է��ϼ���(�� %d��): ", degree +1)

	}