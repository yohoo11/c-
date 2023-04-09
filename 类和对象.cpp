//class与struct的区别
//在编译过程中基本没有区别，只是缺省权限不同，class是私有的，struct时公有的
//struct往往用于纯数据的结构体，class当作多功能类的开发
#include<iostream>
using namespace std;
class cPeople {
	//class默认私有权限
	//成员变量-属性
	int m_id;
public: //公有权限,可以被该类的中的函数、子类的函数、其友元函数访问，也可以由该类的对象访问
	int m_age;
private://私有权限，只能被该类的中的函数、其友元函数访问，不能被该类的对象访问，也不能被子类的函数访问
	int m_money;
protected://受保护权限，可以被该类的中的函数、子类的函数、其友元函数访问，但不能被该类的对象访问
	int m_height;
	//成员函数-行为
public:
	void SetAge(int age) {
		if (age < 0 || age>120)
			return;
		m_age = age; 
	}
	int GetAge() {
		return m_age;
	}
};
//多态的概念之一：函数(全局函数、类内成员函数)的重载-函数名相同，参数列表不同，返回值不同不行（类型、个数不同都行）
void func() {
	cout << "this is a no_arg function" << endl;
}
void func(int a) {
	cout << "this is a 1_arg function" << endl;
}
int main() {
	//类   对象
	cPeople p1;
	p1.SetAge(10);
	cout<<p1.GetAge();
	return 0;
}