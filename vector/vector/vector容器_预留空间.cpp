//#include<iostream>
//using namespace std;
//#include<vector>
//
//void test01()
//{
//	vector<int>v;
//
//	//利用reserve预留空间
//	v.reserve(100000);
//
//	//看看开辟了多少次内存
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//		if (p != &v[0]) {
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num = " << num << endl;
//
//	
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}