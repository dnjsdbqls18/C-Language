// 20240311

/* 1.ù ��° ���� ���α׷�
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello Wolrd!" << endl;
	return 0;
}
*/

// endl �� �� �ٲ�
//cout << �� print
//cin >> scanf
/* ***** �ĺ��ڸ� ���� ��� *****
1. std::cout << "Hello World!" << std::endl;
2. using namespace std;
cout << "Hello World!" << endl;
*/

/* 2. ���ڿ�
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "Morning";
	string s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;
	return 0;
}
*/

/*
// 3. �̸� �Է¹޾Ƽ� ����ϱ�
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "�̸��� �Է��ϼ���:";
	cin >> name;
	cout << name << "�� ȯ���մϴ�." << endl;
	return 0;
}
*/

// 4. �ִ����� ���� ���
/*
#include <iostream>
using namespace std;

int main()
{
	int money;
	int candy_price;

	cout << "���� ������ �ִ� �� = ";
	cin >> money;
	cout << "ĵ���� ���� = ";
	cin >> candy_price;

	// �ִ��� �� �� �ִ� ���� ��
	int n_candies = money / candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� = " << n_candies << endl;

	//������ �����ϰ� ���� ��
	int change = money % candy_price;
	cout << "ĵ�� ���� ��  ���� �� = " << change << endl;
	return 0;
}
*/

// 5. ȭ�� -> ����
/*
#include <iostream>
#include <iomanip> // ���� ������ ���� �߰�
using namespace std;

int main()
{
	double f_temp;
	double c_temp;

	cout << "ȭ�� �µ� = ";
	cin >> f_temp;

	c_temp = (f_temp - 32) / 1.8;
	// �Ҽ��� 2�ڸ�������
	cout << fixed << setprecision(2);

	cout << "ȭ�� �µ� " << f_temp << "���� " << "�����µ��� " << c_temp << "�Դϴ�";
	return 0;

}
*/

// 6. random �Լ�
/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "ù ��° �ֻ��� = " << dice1 << endl;
	cout << "�� ��° �ֻ��� = " << dice2 << endl << endl;
	cout << "�� �ֻ��� �� = " << dice1 + dice2 << endl;
	return 0;
}
*/

// 7. bool
/*
#include <iostream>
using namespace std;

int main()
{
	bool b;
	b = (1 == 2);

	cout << b << endl;
	cout << std::boolalpha;
	cout << b << endl;

	return 0;
}
*/

// 8. if - else
/*
#include <iostream>
using namespace std;

int main()
{
	int x, y;

	cout << "x���� �Է��Ͻÿ� : ";
	cin >> x;	
	
	cout << "y���� �Է��Ͻÿ� : ";
	cin >> y;

	if (x > y)
	{
		cout << "x�� y���� Ů�ϴ�" << endl;
	}
	else if (x == y)
	{
		cout << "x�� y ���� �����ϴ�" << endl;
	}
	else
	{
		cout << "y�� x���� Ů�ϴ�" << endl;
	}
	return 0
}
*/
/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int x = (rand() % 100) + 1;
	int y = (rand() % 100) + 1;

	cout << "x��: " << x << endl;

	cout << "y��: " << y << endl;

	if (x > y)
	{
		cout << "x�� y���� Ů�ϴ�" << endl;
	}
	else if (x == y)
	{
		cout << "x�� y ���� �����ϴ�" << endl;
	}
	else
	{
		cout << "y�� x���� Ů�ϴ�" << endl;
	}
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;

	if (age <= 12)
	{
		cout << "����Դϴ�" << endl;
	}
	else if (age <= 19)
	{
		cout << "û�ҳ��Դϴ�" << endl;
	}
	else
	{
		cout << "�����Դϴ�" << endl;
	}
	return 0;
}
*/

/*
// ���ĺ� ���ϱ�
#include <iostream>
using namespace std;

int main()
{
	char secret_code = 'h';

	cout << "����ڵ带 ���纸����: ";
	char code;
	cin >> code;
	if (code < secret_code)
	{
		cout << code << "�ڿ� ����" << endl;
	}
	else if (code > secret_code)
	{
		cout << code << "�տ� ����" << endl;
	}
	else
	{
		cout << "���߾����ϴ�" << endl;
	}
	return 0;
}
*/

/*
//�� ���� ���� �߿� ū �� ã��
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, largest;

	cout << "3���� ������ �Է��Ͻÿ� : " << endl;
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	cout << "���� ū ������ " << largest << endl;

	return 0;
}
*/ 

//switch��
#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> number;
	switch (number)
	{
	case 0:
			cout << "zero\n";
			break;
	case 1:
		cout << "one\n";
		break;
	case 2:
		cout << "two\n";
		break;
	default:
		cout << "many\n";
		break;
	}
	return 0;
}