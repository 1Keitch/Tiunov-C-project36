#include <iostream>


/*

void print_X() {




}

int _X;  // ���������� ����������
// ��� �� ������ � ������� ����� � ��� �� ������ ����� 

void use_static() {
	static int a=1;
	std::cout << " a = " << a << std::endl;
		a++;
		if (a > 5)
			a = 1;

}

int power(int num1, int num2 = 2) {
	int res = 1;
	for (int i = 1; i <= num2; i++)
		res *= num1;
	return res;

	
}







const double _PI = 3.1416; // ���������� ���������;
int _ARR[5]; // ���������� ������, ����������� ������

*/

inline int absolute(int num) {
	return num < 0 ? -num : num;


}

inline int summ_AB(int A, int B) {
	int sum = 0;
	for (int i = A; i <= B; i++)
		sum += i;
	return sum;
}

int max(int num1, int num2) {
	std::cout << "INT\n";
	return num1 > num2 ? num1 : num2;


}
double max(double num1, double num2) {
	std::cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
int max(int num1, int num2, int num3){
	std::cout << "THEREE INI\n";
	return num1 > (num2 > num3 ? num2 : num3) ? 
		num1 : (num2 > num3 ? num2 : num3);
}

template <typename T> 
T absol(T num) {
	return num < 0 ? -num : num;
	}

int main() {
	setlocale(LC_ALL, "Russian");
	int n; // n - ��������� ���������� ����� mian
	// ����� ������������ ������ � ��� ��������� ��� ��� ���� ���������
	// ������� ������ - ��������� ����������
	//i - ��������� ���������� ����� i 
	//������������ ���� ��� ���������� ����� � �� ������ ��� ��������� ���������
	//i=10; // ������!! i ��� ������� ����������
	/*
	for (int i = 0; i < 5; i++); 

	
	std::cout << "*";
	int x;
	std::cout << std::endl;
	x = 5;

	//i=10; // ������!! i ��� ������� ����������
		//x=5; // ������!! i ��� ������� ����������

	for (int i = 1; i <= 5; i++) {
		int x = i * 10;

			int N = 5;
			if (N > 0) {
				int r = N

			}

		int main() {
			int n;
			std::cin

				_X = 7;
			print _X();

// ���������� ���������� - ��� ���������� ������� ����� ����� ����� ( �� ���������� � ��������)
// ������ ���������� ���������� 
// ��� ������� ������� ������� ���������� ����������

		}

// ��� ��������� ���������� ��������� ������ ������ �������� �������� � ������� ��� ���� ���������
// � - 

	}
	*/
	/*
	use_static();


	// std::cout << a << std::endl; // ������!!
	for (int i= 0; i <10; i++)
	use_static();

	
	std::cout << "4^3 = " << power(4, 3) << "\n";
	std::cout << "5^2 = " << power(5) << "\n";
	*/
	/*
	std::cout << "������� ����� -->";
	std::cin >> n;
	std::cout << "|" << n <<"|= " << absolute (n) << "\n";
	std::cout << "����� ����� �� 5-�� �� 10-��:"<< summ_AB(5, 10)<< "\n";

	//�������� �� ����������� ������� 

	*/

	///������������� �������
	/*
	std::cout << max(10, 15) << std::endl; //15
	std::cout << max(5.75, 5.1) << std::endl; //5.75
	std::cout << max(5, 8, 2) << std::endl;
*/
	// ��������� �������
	std::cout << absol(-7) << std::endl;
	std::cout << absol(-7.5) << std::endl;



	return 0;



}








