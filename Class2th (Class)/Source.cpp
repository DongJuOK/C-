#include <iostream>

using namespace std;

namespace Korea
{
	float area;

	void Information()
	{
		cout << "���� : " << area << endl;
	}
}

namespace Australia
{
	float area;

	void Information()
	{
		cout << "���� : " << area << endl;
	}
}

using namespace Korea;

class Object
{
#pragma region ���� ������
	// Ŭ���� ������ ���ԵǾ� �ִ� �Ӽ��� ���� ������
	// �����ϴ� �������Դϴ�.

	// public : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ���� �׸��� Ŭ����
	//          �ܺο��� ������ ����ϴ� ���� �������Դϴ�.

	// protected : Ŭ���� ���ο� �ڱⰡ ����ϰ� �ִ� Ŭ����������
	//             ������ ����ϴ� ���� �������Դϴ�.

	// private : Ŭ���� ���ο����� ������ ����ϴ� ���� �������Դϴ�.
#pragma endregion

public:
	int x;

	int X()
	{
		return x;
	}

protected:
	int y;
private:
	int z;
};

int main()
{
#pragma region �̸� ����
	// �Ӽ��� ������ �� �ֵ��� ��ȿ ������ �����ϴ� �����Դϴ�.

	// area = 1000;
	// Information();
 
	// Australia::area = 9999;
	// Australia::Information();

	// �̸� ������ ���� �̸��� �Լ��� ������ �� �ٸ� ������ �����Ͽ�
	// �ߺ����� �ʵ��� ������ �� �ֽ��ϴ�.

#pragma endregion

#pragma region Ŭ����
	// ����� ���� ������ �������� �Ӽ��� �Լ��� ���ԵǾ�
	// ������, Ŭ������ ���� ��ü�� �����Ͽ� �����ϰ�
	// ����� �� �ִ� ����ü �Դϴ�.

	// Object object1;
	// Object object2;
	// Object object3;
	// 
	// object1.x = 5;
	// object2.x = 25;
	// object3.x = 10;
	// 
	// cout << "Object�� ũ�� : " << sizeof(Object) << endl;
	// cout << "Object.x : " << object1.X() << endl;
	// cout << "Object.x : " << object2.X() << endl;
	// cout << "Object.x : " << object3.X() << endl;

	// Ŭ������ ��� Ŭ���� ���ο� �ִ� ������ Ŭ������
	// �޸� ������ ���Ե�����, ���� ������ �Լ��� �޸𸮴�
	// Ŭ���� ������ ���Ե��� �ʽ��ϴ�.
#pragma endregion

	return 0;
}