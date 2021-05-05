#include <iostream>
#include <string>

class my_vector3 {
	double m_x;  // x����
	double m_y;  // y����
	double m_z;  // z����

public:
	my_vector3(double x = 0, double y = 0, double z = 0) : m_x(x), m_y(y), m_z(z) { }  // �R���X�g���N�^

	double x() const;// x����
	double y() const;// y����
	double z() const;// z����
	double size() const;// �x�N�g���̑傫��
	double squared_size() const;// �x�N�g���̑傫����2��
	bool are_orthogonal(const my_vector3& p) const;// ���𔻒�
	double angle(const my_vector3& p) const;// 2�̃x�N�g���̂Ȃ��p
	my_vector3 unit_vector() const;// �P�ʃx�N�g��
	double operator%(const my_vector3& p) const;// ����
	my_vector3 operator* (const my_vector3& p) const;// �O��
	my_vector3 operator+ (const my_vector3& p) const;// 2�̃x�N�g���̘a
	my_vector3 operator- (const my_vector3& p) const;// 2�̃x�N�g���̍�
	bool operator==(const my_vector3& p) const;
	bool operator!=(const my_vector3& p) const;
	my_vector3& operator+=(const my_vector3& p);
	my_vector3& operator-=(const my_vector3& p);
};

std::ostream& operator<<(std::ostream& s, const my_vector3& p);   // �}���q
std::istream& operator>>(std::istream& s, my_vector3& p);         // ���o�q
