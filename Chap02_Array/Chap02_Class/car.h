#pragma once
#include<cstdio>
#include<cstring>

class Car {
private:		//현재 class 내부에서만 접근 가능


protected:		//현재 class와  자식 class에서 접근 가능
	int speed;			//속력
	char name[40];		// 이름
public:		//외부 접근 가능
	int gear;
	Car() : speed(0), gear(0), name("") {}
	~Car() {}
	Car( int s, const char* n, int g)
		: speed(s), gear(g) {
		strcpy_s(name, n);			// n 을 문자열 name에 copy
	}
	
	void changeGear(int g = 4) {
		gear = g;

	}
	void speedUp() {
		speed += 5;

	}
	void display() {
		printf("[%s] : 기어=%d단, 속도=%dkmph\n", name, gear, speed);
	}
	void whereAmI() {
		printf("객체 주소 = %p\n", this);
	}
};