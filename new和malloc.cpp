#include<iostream>
#include<cstdlib>//c���Ե��ļ���.h��Ϊ��׺������c++����ȥ����׺��ǰ���c
using namespace std;

int main() {
	//c�����ڶ�����̬�����ڴ�ʹ��malloc
	//����һ��int
	/*int* p = (int*)malloc(sizeof(int));
	*p = 10;
	cout << *p << endl;
	free(p);
	p = NULL;*/

	//c++�ڶ�����̬�����ڴ�ʹ��new
	//����һ��int����
	//int* p=new int(100);
	//cout << *p;
	//delete p;
	//p = NULL;
	//ʹ��new����һ����������10��Ԫ�ص�����
	int* arr = new int[10];
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 1;
	}
	for (int i = 0;i < 10;i++) {
		cout<<arr[i]<<" ";
	}
	delete arr;
	arr = NULL;
	return 0;
}