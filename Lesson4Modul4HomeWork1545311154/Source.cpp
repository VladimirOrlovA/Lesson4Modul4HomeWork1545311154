#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>
#include<Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

// Lesson4Modul4HomeWork1545311154

void Task1()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask1\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);


}


void Task2()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask2\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int m, count=0, sum=0;
	int n = 3 + rand() % 5;
	int i = 1;

	printf("��������� ����� => %d \n\n", n);

	for (i; i <= n; i++)
	{
		count++;
		m = i * i * i;
		printf(" %d ����� %d \n", count, m);
		sum = sum + m;
	}
		printf("\n ����� ����� �� %d �� %d ����������� � ������� : %d \n", i-n, n, sum);
}


void Task3()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask3\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	float s = 10000, a = 1500, b = 1800;
	int	i=0;

	printf("\n � ��������:\n  - ����������	%.f \n  - ���������	%.f \n  - �������	%.f + 3���� �������� � ����� \n\n", s, a, b);

	while (s >= b)
	{
		i++;
		b = b * 1.03;
		s = s + a - b;

		printf(" %d	����� - ����� ����� %.2f \n", i, s);

	} 

	printf("\n ������� ������ ������� %d ������� �� ���������� � ��������� \n\n", i-1);
	printf("\n ������� ����� %.2f �� %d �����\n\n", s, i);
	printf("\n ��������� ����� �� ������� %.2f, �� ������� %.2f \n\n", b, b-s);
}


void Task4()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask4\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int n, n1, n2, n3, n4, m;

	do
	{
		printf("\n ������� �������������� �����, ����� ����� �������� �� ������ ������ \n");
		printf("\n => ");
		scanf_s("%d", &m);
		if (m > 9999)	printf("\n ������� ����� ������ 4 ������. ���������� ��� ���... \n");
		if(m < 1000)	printf("\n ������� ����� ������ 4 ������. ���������� ��� ���... \n");

	} while (m > 9999 || m < 1000);
	

	for (n=0; n <= m; n++)
	{
		
		if (n == m)
		{
			n1 = n / 1000;
			n2 = (n - n1 * 1000) / 100;
			n3 = (n - n1 * 1000 - n2 * 100) / 10;
			n4 = (n - n1 * 1000 - n2 * 100 - n3 * 10);
			m = n1 + n2 + n3 + n4;
			printf("\n\n ����� %d ������� �� �����:\n\n n1 - %d \n n2 - %d \n n3 - %d \n n4 - %d \n\n ����� ���� ��������� ����� = %d \n", n, n1, n2, n3, n4, m);
		}
	}
}


void Task5()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask5\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	unsigned long int n, n1, n2, n3, n4, m, s, count=0;

	do
	{
		printf("\n ������� 3� ��� 4� ������� �����, � ��������� ��������,\n �� ������ ����� ����� ����������  \n");
		printf("\n => ");
		scanf_s("%d", &m);
		if (m < 100)	printf("\n ������� ����� ������ 2 ������. ���������� ��� ���... \n");
		if (m > 9999)	printf("\n ������� ����� ������ 4 ������. ���������� ��� ���... \n");

	} while (m > 9999);


	if (m < 1000)
	{
		for (n = 100; n <= m; n++)
		{
			n1 = n / 100;
			n2 = (n - n1 * 100) / 10;
			n3 = (n - n1 * 100 - n2 * 10);

			s = pow(n1, 3) + pow(n2, 3) + pow(n3, 3);

			if (s == n)
			{
				count++;
				printf("\n %d ����� ���������� 3� ������� ����� � ��������� �� 100 �� %d - %d", count, m, s);
			}
		}
			
		if (count == 0) printf("\n � �������� ��������� ����� ���������� ���");
	}


		for (n = 1000; n <= m; n++)
		{
			n1 = n / 1000;
			n2 = (n - n1 * 1000) / 100;
			n3 = (n - n1 * 1000 - n2 * 100) / 10;
			n4 = (n - n1 * 1000 - n2 * 100 - n3 * 10);

			s = pow(n1, 4) + pow(n2, 4) + pow(n3, 4) + pow(n4, 4);

			if (s == n)
			{
				count++;
				printf("\n %d ����� ���������� 4� ������� ����� � ��������� �� 1000 �� %d - %d", count, m, s);
			}
		}
		
		if (count == 0) printf("\n � �������� ��������� ����� ���������� ���");

		printf("\n");
}


void Task6()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask6\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int n=0, n1, n2, n3, n4, m, s, count=0;

	m = 100 + rand() % 999;

	printf("\n ��������� ����� => %d \n", m);
	

	for (n; n < m; n++)
	{
		n1 = n / 1000;
		n2 = (n - n1 * 1000) / 100;
		n3 = (n - n1 * 1000 - n2 * 100) / 10;
		n4 = (n - n1 * 1000 - n2 * 100 - n3 * 10);
		s = n1 + n2 + n3 + n4;

		if (n % 7 == 0 && s % 7 == 0)
		{
			count++;
			printf(" %d	- ����� � ����� ��� ����� ������� 7 = %d \n", count, n);
		}
			
	}
	printf("\n");
}


void Task7()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask7\n\n");
	SetConsoleTextAttribute(hConsole, 7);

	int dec = 65;  //259
	int oct=0, ost=0, i=0;

	printf("\n ��������� ����� => ");
	scanf_s("%d", &dec);

	do
	{
		dec = dec / 8;
		ost = pow(10, i)+ost;
		i++;
			

	} while (dec >= 8);

	oct = pow(10, i) + dec + ost;

	printf("\n %d", oct);
		
	
}


void Task8()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask8\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


void Task9()
{
	SetConsoleTextAttribute(hConsole, 10);
	printf("\n--------------------------------------------------------------------------\n\nTask9\n\n");
	printf("\n� ����������.... \n\n");
	SetConsoleTextAttribute(hConsole, 7);
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	int number, flag;

	do
	{
		printf("Enter number of Task (1) to (9) => ");
		scanf_s("%d", &number);

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;
		case 3: {Task3(); } break;
		case 4: {Task4(); } break;
		case 5: {Task5(); } break;
		case 6: {Task6(); } break;
		case 7: {Task7(); } break;
		case 8: {Task8(); } break;
		case 9: {Task9(); } break;

		default: printf("\nEntered number of Task does not exist...\n\n");

		}

		SetConsoleTextAttribute(hConsole, 10);
		printf("\n--------------------------------------------------------------------------\n\n"); ("\n");
		SetConsoleTextAttribute(hConsole, 7);

		printf("Do you want to continue? 1/0 => ");
		scanf_s("%d", &flag);

	} while (flag == 1);



	if (flag == 1)
		system("pause");


}