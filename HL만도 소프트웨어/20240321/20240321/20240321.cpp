/*
#include <iostream>
using namespace std;

//�Լ� ����
int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int n;
	n = max(2, 3); //�Լ� ȣ��
	cout << "���� ��� = " << n << endl;
	return 0;
}
*/
/*
#include <iostream>
#include <string.h>
using namespace std;


int menu(int a, int b, char cal)
{
    int result;

    switch (cal)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if (b != 0) 
            result = a / b;
        else
        {
            cout << "0���� ���� �� �����ϴ�." << endl;
            return -1; 
        }
        break;
    default:
        cout << "�߸��� �����Դϴ�." << endl;
        return -1;
    }
    return result;
}

int main()
{
    int a, b;
    char cal; 

    cout << "ù��° ���� �Է��ϼ��� : ";
    cin >> a;
    cout << "�ι�° ���� �Է��ϼ��� : ";
    cin >> b;
    cout << "���ϴ� ��Ģ ������ ������ (+, -, *, /) : ";
    cin >> cal;

    int result = menu(a, b, cal);
    if (result != -1)
    {
        cout << "���� ��� = " << result << endl;
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 100, b = 200;

    cout << "a = " << a << " " << "b = " << b << endl;
    swap(a, b);   
    cout << "a = " << a << " " << "b = " << b << endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 100, b = 200;

    cout << "a = " << a << " " << "b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << " " << "b = " << b << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

//�������� �����ϴ� �Լ�
int square(int i)
{
    cout << "square(int) ȣ��" << endl;
    return i * i;
}

//�Ǽ����� �����ϴ� �Լ�
double square(double i)
{
    cout << "square(double) ȣ��" << endl;
    return i * i;
}

int main()
{
    cout << square(10) << endl;
    cout << square(2.0) << endl;
    return 0;
}