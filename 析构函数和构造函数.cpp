#include<iostream>
#include<cstring>
using namespace std;
class People {
	//��һ��������ʱ������Ĭ�ϴ�������������1.���캯����ʵ��Ϊ�գ�2.����������ʵ��Ϊ�գ�3.�������캯����ʵ��Ϊ�գ�
public:
	char name[10];
	int m_age;
	//���캯�����ֺ�����һ��
	//���캯��û�з���ֵ
	//���캯������������
	//���캯��һ����������ʼ�����ԣ���Ա������
	//���캯���ĵ���ʱ�������󴴽���ʱ��
    People() {
		strcpy(name, "nobady");
		m_age = 10;
		cout << "�޲ι��캯��������" << endl;
	}
	People(const char Name[20], int age) {
		strcpy(name, Name);
		m_age = age;
		cout << "�вι��캯��������" << endl;
	}
	//��������������һ��������ǰ��~
	//��������Ҳû�з���ֵ
	//����������������������
	//��������һ�������������ڴ�ģ�������������ڽ�����
	~People() {
		cout << "��������������" <<name<<"�������ڽ�����" << endl;
	}
};
void test01() {
	People p1;//�����󱻴���ʱ��Ĭ�����޲ι���
	cout << "name:" << p1.name << " " << "age:" << p1.m_age << endl;
	People p2("zhangsan",20);
	cout<<"name:"<<p2.name<<" "<<"age:"<<p2.m_age<<endl;
}
int main() {
	test01();
	system("pause");
	return 0;
}