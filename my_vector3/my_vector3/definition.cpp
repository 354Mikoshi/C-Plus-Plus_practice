#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
#include "declaration.h"

using namespace std;

double my_vector3::x() const {
	return this->m_x;
}

double my_vector3::y() const {
	return this->m_y;
}

double my_vector3::z() const {
	return this->m_z;
}

double my_vector3::size() const {
	return sqrt(squared_size());
}

double my_vector3::squared_size() const {
	return m_x * m_x + m_y * m_y + m_z * m_z;
}

bool my_vector3::are_orthogonal(const my_vector3& p) const {
	return *this % p == 0;
}

double my_vector3::angle(const my_vector3& p) const {
	return acos(*this % p / size() /p.size()) * 180 / M_PI;
}

my_vector3 my_vector3::unit_vector() const {
	return my_vector3(m_x / size(), m_y / size(), m_z / size());
}

double my_vector3::operator%(const my_vector3& p) const {
	return m_x * p.m_x + m_y * p.m_y + m_z * p.m_z;
}

my_vector3 my_vector3::operator*(const my_vector3& p) const {
	return my_vector3(m_y * p.m_z - m_z * p.m_y, m_z * p.m_x - m_x * p.m_z, m_x * p.m_y - m_y * p.m_x);
}

my_vector3 my_vector3::operator+(const my_vector3& p) const {
	return my_vector3(m_x + p.m_x, m_y + p.m_y, m_z + p.m_z);
}

my_vector3 my_vector3::operator-(const my_vector3& p) const {
	return my_vector3(m_x - p.m_x, m_y - p.m_y, m_z - p.m_z);
}

bool my_vector3::operator==(const my_vector3& p) const {
	return (m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z);
}

bool my_vector3::operator!=(const my_vector3& p) const {
	return !(*this == p);
}

my_vector3& my_vector3::operator+=(const my_vector3& p) {
	m_x += p.x();
	m_y += p.y();
	m_z += p.z();
	return *this;
}

my_vector3& my_vector3::operator-=(const my_vector3& p) {
	m_x -= p.x();
	m_y -= p.y();
	m_z -= p.z();
	return *this;
}

ostream& operator<<(ostream& s, const my_vector3& p) {
	return s << '(' << p.x() << ", " << p.y() << ", " << p.z() << ')';
}

istream& operator>>(istream& s, my_vector3& p) {
	double x, y, z;
	s >> x >> y >> z;
	p = my_vector3(x, y, z);
	return s;
}