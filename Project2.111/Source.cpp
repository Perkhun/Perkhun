/* Lab_02.cpp */
/* < ������ ����� > */
/* ����������� ������ �2.1 */
/* ˳����� �������� */
/* ������ 17 */

# include <iostream>
# include <cmath> 

using namespace std;
int main()
{
	double m;   /* ������� �������� */
	double n;   /* ������� �������� */
	double z1;  /* ��������� ���������� 1-�� ������ */
	double z2;  /* ��������� ���������� 2-�� ������ */

	cout << "m = "; cin >> m;
    cout << "n = "; cin >> n;

	z1 = (sqrt(((3.0 * m + 2.0)*(3.0 * m + 2.0)) - 24.0 * m)) / (3.0 * sqrt(m) - 2.0 / sqrt(m));
	z2 = sqrt(m);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}