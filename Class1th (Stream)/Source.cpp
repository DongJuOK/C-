#include <iostream>

char character = 'C';

void OnDamage(float damage = 0.0f)
{
	std::cout << damage << " ��ŭ ���ظ� �Ծ����ϴ�." << std::endl;
}

// �⺻ �Ű� ������ �����ϱ� ���ؼ��� �����ʿ��� ���� �������־�� �մϴ�.
void Coordinate(float x, float y, float z = 30)
{
	std::cout << "x�� �� : " << x << std::endl;
	std::cout << "y�� �� : " << y << std::endl;
	std::cout << "z�� �� : " << z << std::endl;
}

int main()
{
#pragma region ��Ʈ��
	// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧�Դϴ�.

	// int data = 0;
	// 
	// std::cout << "data ������ �� �Է� : ";
	// 
	// std::cin >> data;
	// 
	// std::cout << "data ������ �� : " << data << std::endl;

	// ��Ʈ���� �ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� ���۶��
	// �ӽ� �޸� ������ �����մϴ�.
#pragma endregion

#pragma region ���� �Ҵ�
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸�
	// �Ҵ��ϴ� �۾��Դϴ�.

	//  int * ptr = new int;
	//  int * dyanmicArray = new int[3];
	//  
	//  *ptr = 9999;
	//  
	//  dyanmicArray[0] = 10;
	//  dyanmicArray[1] = 20;
	//  dyanmicArray[2] = 30;
	//  
	//  for (int i = 0; i < 3; i++)
	//  {
	//  	std::cout << "dynamicArray[" << i << "]" << ":" << dyanmicArray[i] << std::endl;
	//  }
	//  
	//  std::cout << "ptr�� ����Ű�� �ִ� �޸� �� : " << *ptr << std::endl;
	//  std::cout << "ptr�� ����Ű�� �ִ� �޸� �ּ� : " << ptr << std::endl;
	//  
	//  delete [ ] dyanmicArray;
	//  delete ptr;
#pragma endregion

#pragma region �⺻ �Ű� ����
	// �Լ��� ���� �� ������ �� ����ڰ� �̸� �⺻����
	// ������ �Ű������Դϴ�.

	// OnDamage();
	// OnDamage(99);

	// Coordinate(10, 20);
	// Coordinate(5, 10, 15);
#pragma endregion

#pragma region ���� ���� ������
	// ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ���Ǵ� �������Դϴ�.

	// char character = 'A';
	// 
	// std::cout << "���� ���� character ������ �� : " << character << std::endl;
	// 
	// // ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ��� ��
	// // ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ��
	// // �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.
	// 
	// std::cout << "���� ���� character ������ �� : " << ::character << std::endl;

	// ���� ���� �����ڸ� ����ϰ� �Ǹ� ���� ������ ������ �����ϰ� �ǹǷ�
	// ���� ������ ������ �� �ֽ��ϴ�.
#pragma endregion

}
