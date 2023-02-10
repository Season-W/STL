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
//	if (v1.empty()) {
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(20,100); //可以指定填充值
//	printVector(v1);//重新指定的比原来长，默认用0填充
//
//	v1.resize(8);
//	printVector(v1);//重新制定比原来短，超出部分被删除
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}