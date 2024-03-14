//while��
/*
#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	while (n > 0)
	{
		cout << n << " ";
		n--;
	}
	cout << "�߻�\n";
}
*/

//������ ����
//������ �߿� ����ϰ� ���� ���� �Է��Ͻÿ�:
/*
#include <iostream>
using namespace std;

int main()
{
	int num;
	int i = 1;
	cout << "������ �߿� ����ϰ� ���� ���� �Է��Ͻÿ� : ";
	cin >> num;

	while (i<10) // i <= 9
	{
		cout << num << " x " << i << " = " << num * i << "\n";
		i++;
	}

	return 0;
}
*/

//while���� ������ ���� ���°Ű� do-while���� �ϴ� �ϰ� ���� ��� ���� ���� ���ư�
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	do {
		cout << "���ڿ��� �Է��Ͻÿ� : ";
		getline(cin, str);
		cout << "������� �Է� : " << str << "\n";
	} while (str != "����");
	return 0;
}
*/

//for��
/*
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		sum += i;
	}
	cout << "1���� 10������ ������ �� = " << sum << endl;
	return 0;
}
*/

//break���� ����
/*
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		cout << i << " ";
		if (i == 4)
		{
			break;
		}
	}
	return 0;
}
*/

//continue���� ����
/*
#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	do {
		i++;
		cout << "continue ���� ���� �ִ� ����" << endl;
		continue; // �Ʒ� ���� �����ϰ� �ٷ� while�� �Ѿ
		cout << "continue ���� �Ŀ� �ִ� ����" << endl;
	} while (i < 3);
	return 0;
}
*/

//���� ���߱� ����
/*
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;
	
	do {
		cout << "������ �����Ͽ� ���ÿ� : ";
		cin >> guess;
		tries++;

		if (guess > answer)
		{
			cout << "�� ���� ���� �Է��ϼ���.\n";
		}
		else if (guess < answer)
		{
			cout << "�� ���� ���� �Է��ϼ���.\n";
		}
	} while (guess != answer);
	
	cout << "�� = " << answer << " �Դϴ�.\n";
	cout << "�õ� Ƚ�� = " << tries << endl;
	return 0;
}
*/

//��� ���� �ڵ� ����
/*
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int i, ans;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true)
	{
		int x = rand() % 100;
		int y = rand() % 100;

		cout << x << "+" << y << "=";
		cin >> ans;

		if (x + y == ans)
		{
			cout << "�¾ҽ��ϴ�." << endl;
			break;
		}
		else
		{
			cout << "Ʋ�Ƚ��ϴ�." << endl;
		}
	}

	return 0;
}
*/

//�迭

#include <iostream>
using namespace std;

int main()
{
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		cout << i+1 << "�� �л��� ������ �Է��Ͻÿ� : ";
		cin >> scores[i];
	}
	for (i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}

	average = sum / STUDENTS;
	cout << "���� ��� = " << average << endl;
	return 0;
}