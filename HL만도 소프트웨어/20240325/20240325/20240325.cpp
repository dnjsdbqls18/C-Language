// ���ڿ� ��ġ��
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Slow", s2 = "steady";
	string s3 = "the race";
	string s4;

	s4 = s1 + " and " + s2 + " wins " + s3;
	cout << s4 << endl;
	return 0;
}
*/

// ���ڿ��� ��
/*
#include <iostream>
using namespace std;

void main()
{
	string s1 = "Hello", s2 = "World";
	if (s1 == s2)
	{
		cout << "������ ���ڿ��Դϴ�." << endl;
	}
	else
	{
		cout << "������ ���ڿ��� �ƴմϴ�." << endl;
	}

	if (s1 > s2)
	{
		cout << "s1�� ���� �ֽ��ϴ�" << endl;
	}
	else
	{
		cout << "s2�� ���� �ֽ��ϴ�" << endl;
	}
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;

	cout << "�̸��� �Է��Ͻÿ� : ";
	cin >> s1;
	//cin.ignore();   // ����Ű�� ���ֱ� ���Ͽ� �ʿ��ϴ�.

	cout << "�ּҸ� �Է��Ͻÿ� : ";
	cin >> s2;

	cout << s2 << "�� " << s1 << "�� �ȳ��ϼ���?" << endl;

	return 0;
}
*/

// ���ڿ� ��ġ ã��
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "When in Rome, do as the Romans";

	int index = s.find("Rome");
	cout << index << endl;
	return 0;
}
*/

// �ֹε�Ϲ�ȣ����- �����
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻÿ� : ";
	cin >> s;

	cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ : ";
	for (auto& c : s)
	{
		if (c == '-')
		{
			continue;
		}
		cout << c;
	}

	return 0;
}
*/

// ���ڿ��� �迭

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string list[] = { "ö��","����","�浿" };

	for (auto& x : list)
	{
		cout << (x + "�� �ȳ�!") << endl;
	}
	return 0;
}