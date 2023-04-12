#pragma once
#include<cstdio>
#define MAX_DEGREE 100


class Polynomial {
	int degree;				//다항식의 최고 차수
	float coef[MAX_DEGREE]; //각 항에 대한 계수
};

public:
	Polynomial() {
		degree = 0;
		coef[0] = 0.0f;
	}
	void read() {
		printf("다항식의 최고 차수를 입력하세요: ");
		sacnf(%d, degree,:
		printf("각 항의 계수를 입력하세요(총 %d개): ", degree +1)

	}