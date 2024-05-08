#include <iostream>


using std::cout;
using std::cin;
using std::endl;

//�e���v���[�g �^���p�����[�^�ɂƂ��Ă��낢��Ȍ^�ɑΉ��ł���@�\
//             ���Ԑ��̈��(�����֐���A�N���X�������Ȍ^�ɑΉ���������)

//2�̐����̂����傫���ق���Ԃ�
int myMax(int a, int b);

//�Q�̒P���x����(float)�̂����傫���ق���Ԃ�
float myMax(float a, float b);

//�Q�̔{���x����(double)�̂����傫���ق���Ԃ�
double myMax(double a, double b);

int myMax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

float myMax(float a, float b)
{
	if (a > b)
		return a;
	else
		return b;
}

double myMax(double a, double b)
{
	if (a > b)
		return a;
	else
		return b;
}

//�֐��̃e���v���[�g
template <typename T>
T tMax(T a, T b)
{
	if (a > b)
		return a;
	else
		return b;
}

//�N���X�e���v���[�g
template <typename T>
class Vec2
{
public:
	T x;
	T y;
	T GetX() { return(x); }
	void SetX(T _x) { x = _x; }
	void PrintVec() { cout << "(a , b) = (" << x << "," << y << ")" << endl; }
	T Length() const { return((T)sqrt(x * x + y * y)); }

	bool operator >(const Vec2<T>& other)
	{
		return(this->Length() > other.Length());
	}
};

//�x�N�g���̒�����T�ŕԂ������o�֐������
//���k���̒����Ŕ�r���遄���Z�q���I�[�o�[���[�h
//�x�N�g���̒������ׂĒ����ق���\�����Ė{���ɓ������Ă��邩�m�F(tMax�ɓ����)

int main()
{
	//int var1 = 10;
	//int var2 = 20;
	////int res = myMax(var1, var2);
	//int res = tMax<int>(var1, var2);
	//cout << "myMax 10 20 : " << res << endl;

	//float var3 = 10.5f;
	//float var4 = 10.6f;
	////float ras2 = myMax(var3, var4);
	//float ras2 = tMax<float>(var3, var4);
	//cout << "myMax 10.5 10.6 : " << ras2 << endl;

	//double var5 = 0.000062f;
	//double var6 = 1e-15;
	////double ras3 = myMax(var5, var6);
	//double ras3 = tMax<double>(var5, var6);
	//cout << "myMax 0.000062 1e-15 : " << ras3 << endl;

	Vec2<int> v1;
	v1.x = 2;
	v1.y = 3;

	Vec2<int> v2;
	v2.x = 5;
	v2.y = 100;

	//if (v1 > v2)
	//	v1.PrintVec();
	//else
	//	v2.PrintVec();
	Vec2<int> res = tMax(v1, v2);
	res.PrintVec();
	return 0;
}