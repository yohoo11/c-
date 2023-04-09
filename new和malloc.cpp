#include<iostream>
#include<cstdlib>//c语言的文件以.h作为后缀，到了c++可以去掉后缀，前面加c
using namespace std;

int main() {
	//c语言在堆区动态开辟内存使用malloc
	//申请一个int
	/*int* p = (int*)malloc(sizeof(int));
	*p = 10;
	cout << *p << endl;
	free(p);
	p = NULL;*/

	//c++在堆区动态开辟内存使用new
	//申请一个int变量
	//int* p=new int(100);
	//cout << *p;
	//delete p;
	//p = NULL;
	//使用new申请一个可以容纳10个元素的数组
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