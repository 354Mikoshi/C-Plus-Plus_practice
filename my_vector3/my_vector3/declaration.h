#include <iostream>
#include <string>

class my_vector3 {
	double m_x;  // x成分
	double m_y;  // y成分
	double m_z;  // z成分

public:
	my_vector3(double x = 0, double y = 0, double z = 0) : m_x(x), m_y(y), m_z(z) { }  // コンストラクタ

	double x() const;// x成分
	double y() const;// y成分
	double z() const;// z成分
	double size() const;// ベクトルの大きさ
	double squared_size() const;// ベクトルの大きさの2乗
	bool are_orthogonal(const my_vector3& p) const;// 直交判定
	double angle(const my_vector3& p) const;// 2つのベクトルのなす角
	my_vector3 unit_vector() const;// 単位ベクトル
	double operator%(const my_vector3& p) const;// 内積
	my_vector3 operator* (const my_vector3& p) const;// 外積
	my_vector3 operator+ (const my_vector3& p) const;// 2つのベクトルの和
	my_vector3 operator- (const my_vector3& p) const;// 2つのベクトルの差
	bool operator==(const my_vector3& p) const;
	bool operator!=(const my_vector3& p) const;
	my_vector3& operator+=(const my_vector3& p);
	my_vector3& operator-=(const my_vector3& p);
};

std::ostream& operator<<(std::ostream& s, const my_vector3& p);   // 挿入子
std::istream& operator>>(std::istream& s, my_vector3& p);         // 抽出子
