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
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(20,100); //����ָ�����ֵ
//	printVector(v1);//����ָ���ı�ԭ������Ĭ����0���
//
//	v1.resize(8);
//	printVector(v1);//�����ƶ���ԭ���̣��������ֱ�ɾ��
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}