//#include<iostream>
//#include<vector>
//using namespace std;
//
// 
////希尔和插入
//void shellsort(vector<int>& arr, int len)//初始版
//{
//	if(len<=0)
//		return;
//	int gap = len / 2;
//	while (gap >= 1)//不断分组插入排序直到为同一数列
//	{
//		for (int i = gap; i < len; i++)//从gap开始，向该gap组前比较插入排序
//		{
//			for (int j = i; j >= gap && arr[j] > arr[j - gap]; j -= gap)//和该组前面的插入排序,注意j>=gap
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
//	while (gap < len / 3)//寻找最优gap值
//	{
//		gap = 3 * gap + 1;//4 13 40.......
//	}
//	while (gap >= 1)//不断分组插入排序直到为同一数列
//	{
//		for (int i = gap; i < len; i++)//从gap开始，向该gap组前比较插入排序
//		{
//			for (int j = i; j >= gap && arr[j] > arr[j - gap]; j -= gap)//和该组前面的插入排序,注意j>=gap
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
//	for (int i = 1; i < len; i++)//从1开始往前比较
//	{
//		for (int j = i; j > 0 && arr[j] > arr[j - 1]; j--)//已经有j>0条件了，不用担心j-1小于0问题
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