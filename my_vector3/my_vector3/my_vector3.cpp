#include <iostream>
#include "declaration.h"

using namespace std;

int main() {
	my_vector3 p, q;
	cout << "3次元ベクトルpのx成分、y成分、z成分を入力してください： ";
	cin >> p;
	cout << "続いて、3次元ベクトルqのx成分、y成分、z成分を入力してください： ";
	cin >> q;
	cout << '\n';
	cout << "p = " << p << endl;
	cout << "q = " << q << endl;
	cout << "p.x = " << p.x() << ", p.y = " << p.y() << ", p.z = " << p.z() << endl;
	cout << "q.x = " << q.x() << ", q.y = " << q.y() << ", q.z = " << q.z() << endl;
	cout << "pの大きさ = " << p.size() << ", qの大きさ = " << q.size() << endl;
	cout << "pを正規化すると" << p.unit_vector() << "、qを正規化すると" << q.unit_vector() << endl;
	cout << "pとqの内積 = " << p % q << endl;
	cout << "pとqの外積 = " << p * q << endl;
	cout << "pとqは直交しているか：" << (p.are_orthogonal(q) ? "true" : "false") << endl;
	cout << "pとqがなす角度 = " << p.angle(q) << "°" << endl;
	cout << "p + q = " << p + q << endl;
	cout << "p - q = " << p - q << endl;
	cout << "p == q：" << (p == q ? "true" : "false") << endl;
	cout << "p != q：" << (p != q ? "true" : "false") << endl;
	cout << "pにqを足した後pを出力：" << (p += q) << endl;
	cout << "ここからpからqを引いた後pを出力：" << (p -= q) << endl;
}