#include<iostream>
#include<cstring>
using namespace std;
class People {
	//当一个类声明时，类内默认存在三个函数：1.构造函数（实现为空）2.析构函数（实现为空）3.拷贝构造函数（实现为空）
public:
	char name[10];
	int m_age;
	//构造函数名字和类名一样
	//构造函数没有返回值
	//构造函数允许函数重载
	//构造函数一般是用来初始化属性（成员变量）
	//构造函数的调用时机（对象创建的时候）
    People() {
		strcpy(name, "nobady");
		m_age = 10;
		cout << "无参构造函数被调用" << endl;
	}
	People(const char Name[20], int age) {
		strcpy(name, Name);
		m_age = age;
		cout << "有参构造函数被调用" << endl;
	}
	//析构函数和类名一样，名字前加~
	//析构函数也没有返回值
	//析构函数不允许函数的重载
	//析构函数一般是用来回收内存的（对象的生命周期结束）
	~People() {
		cout << "析构函数被调用" <<name<<"生命周期结束了" << endl;
	}
};
void test01() {
	People p1;//当对象被创建时，默认走无参构造
	cout << "name:" << p1.name << " " << "age:" << p1.m_age << endl;
	People p2("zhangsan",20);
	cout<<"name:"<<p2.name<<" "<<"age:"<<p2.m_age<<endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}