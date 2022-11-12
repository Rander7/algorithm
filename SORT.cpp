//#include<iostream>
//#include<vector>
//using namespace std;
//
// 
////ϣ���Ͳ���
//void shellsort(vector<int>& arr, int len)//��ʼ��
//{
//	if(len<=0)
//		return;
//	int gap = len / 2;
//	while (gap >= 1)//���Ϸ����������ֱ��Ϊͬһ����
//	{
//		for (int i = gap; i < len; i++)//��gap��ʼ�����gap��ǰ�Ƚϲ�������
//		{
//			for (int j = i; j >= gap && arr[j] > arr[j - gap]; j -= gap)//�͸���ǰ��Ĳ�������,ע��j>=gap
//			{
//				int temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//			}
//		}
//		gap =gap>>1;
//	}
//
//}
//
//void shellsort_improve(vector<int>& arr, int len)
//{
//	if (len <= 0)
//		return;
//	int gap = 1;
//	while (gap < len / 3)//Ѱ������gapֵ
//	{
//		gap = 3 * gap + 1;//4 13 40.......
//	}
//	while (gap >= 1)//���Ϸ����������ֱ��Ϊͬһ����
//	{
//		for (int i = gap; i < len; i++)//��gap��ʼ�����gap��ǰ�Ƚϲ�������
//		{
//			for (int j = i; j >= gap && arr[j] > arr[j - gap]; j -= gap)//�͸���ǰ��Ĳ�������,ע��j>=gap
//			{
//				int temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//			}
//		}
//		gap /= 3;
//	}
//
//}
//
//void insertsort(vector<int>& arr, int len)
//{
//	int i;
//	for (int i = 1; i < len; i++)//��1��ʼ��ǰ�Ƚ�
//	{
//		for (int j = i; j > 0 && arr[j] > arr[j - 1]; j--)//�Ѿ���j>0�����ˣ����õ���j-1С��0����
//		{
//			int temp = arr[j];
//			arr[j] = arr[j -1];
//			arr[j - 1] = temp;
//		}
//	}
//}
//
//int main()
//{
//	vector<int>array;
//	int number;
//	while (1)
//	{
//		cin >> number;
//		array.push_back(number);
//		if (cin.get() == '\n')
//			break;
//	}
//
//	int len = array.size();
//	shellsort(array,len);
//	//insertsort(array, len);
//	//shellsort_improve(array, len);
//
//	for (int i = 0; i < len; i++)
//	{
//		cout << array[i] << " ";
//	}
//	return 0;
//}