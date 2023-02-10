//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//交换后
//	vector<int>v2{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	v1.swap(v2);
//	cout << "交换后" << endl;
//	printVector(v1);
//	printVector(v2);
//}
//
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//	cout << endl << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);
//	cout << endl << "重新指定大小" << endl;
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//swap收缩内存
//	vector<int>(v).swap(v);
//	cout << endl << "swap收缩内存" << endl;
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}