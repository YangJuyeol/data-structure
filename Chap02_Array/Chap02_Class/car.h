#pragma once
#include<cstdio>
#include<cstring>

class Car {
private:		//���� class ���ο����� ���� ����


protected:		//�ڽ� class���� ���� ����
	int speed;			//�ӷ�
	char name[40];		// �̸�
public:
	int gear;
	Car() : speed(0), gear(0), name("") {}
	~Car() {}
	Car( int s, char* n, int g)
		: speed(s), gear(g) {
		strcpy_s(name, n);			// n �� ���ڿ� name�� copy
	}
	
	void changeGear(int g = 4) {
		gear = g;

	}
	void speedUp() {
		speed += 5;

	}
	void display() {
		printf("[%s] : ���=%d��, �ӵ�=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("��ü �ּ� = %p\n", this);
	}
};