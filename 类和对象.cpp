//class��struct������
//�ڱ�������л���û������ֻ��ȱʡȨ�޲�ͬ��class��˽�еģ�structʱ���е�
//struct�������ڴ����ݵĽṹ�壬class�����๦����Ŀ���
#include<iostream>
using namespace std;
class cPeople {
	//classĬ��˽��Ȩ��
	//��Ա����-����
	int m_id;
public: //����Ȩ��,���Ա�������еĺ���������ĺ���������Ԫ�������ʣ�Ҳ�����ɸ���Ķ������
	int m_age;
private://˽��Ȩ�ޣ�ֻ�ܱ�������еĺ���������Ԫ�������ʣ����ܱ�����Ķ�����ʣ�Ҳ���ܱ�����ĺ�������
	int m_money;
protected://�ܱ���Ȩ�ޣ����Ա�������еĺ���������ĺ���������Ԫ�������ʣ������ܱ�����Ķ������
	int m_height;
	//��Ա����-��Ϊ
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
//��̬�ĸ���֮һ������(ȫ�ֺ��������ڳ�Ա����)������-��������ͬ�������б�ͬ������ֵ��ͬ���У����͡�������ͬ���У�
void func() {
	cout << "this is a no_arg function" << endl;
}
void func(int a) {
	cout << "this is a 1_arg function" << endl;
}
int main() {
	//��   ����
	cPeople p1;
	p1.SetAge(10);
	cout<<p1.GetAge();
	return 0;
}