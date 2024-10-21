#include <iostream>

using namespace std;

class Unit
{
protected:
	int health;
	int defense;

public:
	Unit()
	{
		cout << "Create Unit" << endl;
	}

	~Unit()
	{
		cout << "Release Unit" << endl;
	}
};

class Marine : public Unit
{
private:
	int attack;

public:
	Marine()
	{
		health = 40;
		defense = 0;
		attack = 6;

		cout << "Create Marine" << endl;
	}

	void Stats()
	{
		cout << "체력 : " << health << endl;
		cout << "방어력 : " << defense << endl;
		cout << "공격력 : " << attack << endl;
	}

	~Marine()
	{
		cout << "Release Marine" << endl;
	}

};

class Firebat : public Unit
{
private:
	int attack;

public:
	Firebat()
	{
		health = 50;
		defense = 1;
		attack = 8;

		cout << "Create Firebat" << endl;
	}

	void Stats()
	{
		cout << "체력 : " << health << endl;
		cout << "방어력 : " << defense << endl;
		cout << "공격력 : " << attack << endl;
	}

	~Firebat()
	{
		cout << "Release Firebat" << endl;
	}
};

class Ghost : public Unit
{
private:
	int attack;

public:
	Ghost()
	{
		health = 45;
		defense = 0;
		attack = 10;

		cout << "Create Ghost" << endl;
	}

	void Stats()
	{
		cout << "체력 : " << health << endl;
		cout << "방어력 : " << defense << endl;
		cout << "공격력 : " << attack << endl;
	}

	~Ghost()
	{
		cout << "Release Ghost" << endl;
	}
};

int main()
{
#pragma region 캡슐화
	// 클래스 안에 서로 연관되어 있는 속성과
	// 기능들을 하나의 캡슐로 만들어 데이터를 외부로 보호하며,
	// 인터페이스를 제공하여 사용자로 부터 내부에 있는 데이터를
	// 사용하지 않고, 인터페이스를 사용할 수 있도록 

#pragma endregion

#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수
	// 있도록 설정해주는 기능입니다.

	// Unit unit;
	// Marine marine;
	// 
	// cout << "Unit의 메모리 크기 : " << sizeof(unit) << endl;
	// cout << "Marine의 메모리 크기 : " << sizeof(marine) << endl;

	// 클래스의 상속 관계에서 상위 클래스는 하위 클래스의
	// 속성을 사용할 수 없으며, 하위 클래스는 상위 클래스의
	// 메모리가 포함된 상태로 메모리의 크기가 결정됩니다.
#pragma endregion

#pragma region 객체

	// Marine marine;
	// Firebat firebat;
	// Ghost ghost;
	// 
	// marine.Stats();
	// firebat.Stats();
	// ghost.Stats();

#pragma endregion

	return 0;
}
