#include <iostream>

using namespace std;

class GameObject
{
private:
	static int count;
	const char * name;

public:
	GameObject()
	{
		name = "Cylinder";


		cout << "Create GameObject" << endl;
	}

	void Information() const
	{
		// name = "Box";

		cout << "name : " << name << endl;
		cout << "Count�� �� : " << count << endl;
	}

#pragma region �Ҹ���
	// ��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� Ŭ������
	// ��� �Լ��Դϴ�.

	~GameObject()
	{
		count++;

		cout << "Destroy GameObject" << endl;
	}

	// �Ҹ��ڴ� ��ü�� �޸𸮿��� ������ �� �� �� ��
	// �� ȣ��Ǹ�, �Ҹ��ڿ��� �Ű� ������ �����Ͽ�
	// ����� �� �����ϴ�.
#pragma endregion
};

int GameObject::count = 0;

void OnDamage(int & stamina)
{
	stamina -= 10;
}

int main()
{
#pragma region ������
	// Ŭ������ �ν��Ͻ��� �����Ǵ� �������� �ڵ�����
	// ȣ��Ǵ� Ư���� ��� �Լ��Դϴ�.

	// GameObject gameObject;
	// 
	// GameObject * gmaeObject1 = new GameObject();
	// GameObject * gmaeObject2 = new GameObject();
	// GameObject * gmaeObject3 = new GameObject();
	// 
	// delete gmaeObject1;
	// delete gmaeObject2;
	// delete gmaeObject3;
	// 
	// gameObject.Information();

	// �������� ��� ��ü�� ������ �� �� �� ���� ȣ��
	// �Ǹ�, �����ڴ� ��ȯ���� �������� �ʱ� ������
	// �����ڰ� ȣ��Ǳ� ������ ��ü�� ���� �޸𸮴�
	// �Ҵ���� �ʽ��ϴ�. 

#pragma endregion

#pragma region ������
	// �Ҵ�� �ϳ��� �޸� ������ �ٸ� �̸���
	// �ٿ� ����ϴ� Ű�����Դϴ�.

	// int health = 100;
	// 
	// int & reference = health;
	// 
	// reference = 99;
	// 
	// OnDamage(health);
	// 
	// cout << "health ������ �� : " << health << endl;
	// cout << "reference ������ �� : " << reference << endl;

#pragma endregion

	return 0;
}