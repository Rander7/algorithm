//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long long n;
//	cin >> n;
//	int k;
//	cin >> k;
//	int count = 0;
//	int t = 0;
//	int s = k;
//
//	
//	while (n >= s)
//	{
//
//		count += k * t+1;
//		t
//		
//	}
//
//
//
//
//	cout << count;
//
//	return 0;
//}
//�������ҹ��ɣ�����ʧ�ܣ����ڸ���

////P1980 [NOIP2013 �ռ���] ��������
//#include<iostream>
//using namespace std;
////˼·���ڴ�1��ʼ������ÿ���ж����λ��������%10������/10ѭ��
//int main()
//{
//	long long n;
//	int k;
//	int count = 0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		int d = i;//�洢i
//		while (d)
//		{
//			int t = d % 10;
//			d /= 10;
//			if (k == t)
//				count++;
//		}
//	}
//	cout << count;
//
//	return 0;
//}



////P1035 [NOIP2002 �ռ���] �������
//#include<iostream>
//using namespace std;
//int  main()
//{
//
//	double  k;
//	int n = 1;
//	cin >> k;
//	double sum = 0;
//	while (sum <= k)
//	{
//		sum += 1.0 / n;//ע�⸡����
//		n++;
//	}
//	cout << n - 1;//ע��nʲôʱ��ʼ
//
//
//	return 0;
//}


////P2669[NOIP2015 �ռ���] ���
//#include<iostream>
//using namespace std;
//int main()
//{
//	int k;
//	cin >> k;
//	long long sum = 0;
//	int i = 1;
//	while (k >= (i + 1) * i / 2)//k�Ƿ���ڵ�����һ�������������ܺ�
//	{
//		int t = k - (i + 1) * i / 2;//k����һ�����������ܺͶ����
//		sum += i * i;//�����ӵ��ڵ�ǰ�������ڻ���ܺ�
//		++i;//i��������һ��������������
//		if (t < i)//���t����������������һ����������ͼ���t*��һ�����������Ȩ
//		{
//			sum += t * i;
//			break;
//		}
//	}
//	cout << sum;
//
//
//	return 0;
//}


//
////P5722 �����4.��11���������
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long long sum = 0;
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	cout << sum;
//	return 0;
//}



//
////P5723 �����4.��13�������ڴ�
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int arr[10000] = { 0 };
//	//��ͨ������
//	int k = 0;
//	for (int i = 2; i < 100000; i++)
//	{
//		int flag = 0;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				flag = 1;
//		}
//		if (flag == 0)
//			arr[k++] = i;
//	}
//
//
//	int L;
//	cin >> L;
//	int count = 1;
//	int sum = arr[0];
//	if (L < arr[0])//�ȵ�һ����С�Ļ��������count
//	{
//		count = 0;
//	}
//	k = 1;
//	while (sum <= L)
//	{
//		if (k == 1)//��һ�������ж�
//		{
//			cout << arr[0] << endl;
//		}
//		sum += arr[k];
//		if (sum <= L)//ע���ж������
//		{
//			cout << arr[k] << endl;
//			count++;
//			k++;
//		}
//
//	}
//	cout << count;
//
//	return 0;
//}
//

//
// //��ɸ��
//#include <cstring>
//#include <iostream>
//using namespace std;
//int l;
//bool prime[100000];
//int cnt;
//int main() {
//    memset(prime, 1, sizeof(prime));//��ɸһ��Ҫ��ʼ������ֵ
//    cin >> l;
//    prime[1] = 0;
//    prime[0] = 0;
//    for (int i = 2; i < 100000; i++) {
//        if (prime[i]) {
//            for (int j = i * 2; j < 100000; j += i) {
//                prime[j] = 0;
//            }
//        }
//    }//ɸȡ����
//    for (int i = 2; i < 100000; i++) {
//        if (prime[i]) {
//            if (l >= i) {
//                cout << i << endl;
//                l -= i;
//                cnt++;
//            }//������������l��ȥ���������cnt++
//            else break;//�����Ϳ���break
//        }
//    }
//    cout << cnt;//������cnt
//    return 0;
//}

////��ʽɸ��ר��
// 
// ----------���ģ����������ڡ�n�������������ٽ��������ı������޳�---------------------------
// 
//�ر�ģ�1�Ȳ���������Ҳ���Ǻ�����
//��һ�������裺������Ȼ��n���ڵ����������ȼٶ���1�������ȫ��Ϊ������
//
//�ڶ������޳�����ô�޳�������Ҫ���������ڡ�n�������������ٽ��������ı������޳���
//Ҳ����ͻ��������ˣ��Ҷ���û��ʼ�ж�������������ô֪������n�����������أ��𼱣���Ȥ�����ˣ�
//����2������֮ǰ����1��û������Լ������Ȼ������������ô����֮ǰ�ļ��������OK���޳�2�ı����� 
//== �޳����ǽ���ٶ��������������ˡ� == ��ô��������Ѱ�ң�������3û�б��޳�������Ȼ��������OK��
//�޳�3�ı�����������Ѱ��û�б��޳����������޳������ı������ظ���������������ǿ�����ɸ�õ�n���ڵ�����
//��ô������һ��ϸ�ڣ���������ֻ��Ҫ�����Ӳ����ڡ�n�����������߿���˼��һ�£�����Ϊʲô�أ�
//
//���ǿ������ڸ���n���ϵ�����������֪����
//��(��n + 1) * 2��(��n + 1) * ��n�����������Ƕ���һ��С�ڵ��ڡ�n��Լ����
//����ζ��������Щ�������Ǳ��������ڡ�n��������ʱ���Ѿ����޳��ˣ��Ѿ�����������ȥѰ���޳��ˣ�
//������ʱ�临�Ӷȡ��ڴ��ڡ�n������û���޳�����Ȼ���������ˡ�
//
// //���û�а���maxn�������maxn���Ǵ�0��ʼ�ģ���������������maxn-1
//#include<iostream>
//#include<cstring>
//#include<cmath>
//using namespace std;
//
////��������
//const int maxn = 100;//��ҪѰ�����Ϊmaxnһ�µ�����
//bool primer[maxn];  //������
//
////�����
//void isprimer()  //���������
//{
//	int k = sqrt(maxn);
//	memset(primer, true, sizeof(primer));//����ȫ������������
//	primer[0] = primer[1] = false;//0��1��Ȼ����������������ֱ���޳�����Ϊ���ݱ����޷��޳�����Щ������ģ�
//	for (int i = 2; i <= k; i++)
//	{
//		if (primer[i])//���i�����������޳����ı�����
//		{
//			for (int j = 2 * i; j < maxn; j += i)//����i�ı�����ע�ⴴ��ʱ����ȡ����maxn�ģ�����j<maxn
//			{
//				primer[j] = false;//�޳�
//			}				
//		}
//	}
//}
////�����޳�����ʼλ����2*i����i�Ǵ��ڵ���2�ģ���֮��jһֱ����i��ʱ��Ҳ���ǻᵽi*i��
////��2��i�Ĺ����У�������2��i��Լ�������������Щ����Ȼ�Ѿ����޳��������������ж��޳��ˣ�
////�������ǵ��޳�����ʼλ�ÿ��Ը�Ϊi*i�����ǵ��㷨�ֽ�һ���õ��Ż���
//
//int main()
//{
//	isprimer();
//	for (int i = 0; i < maxn; i++)
//	{
//		if (primer[i]) {
//			cout << i << endl;//����Ƕ�Ӧ��
//		}
//	}
//	return 0;
//}
// 
// //����ҵİ�����maxn
//#include<iostream>
//#include<cstring>
//using namespace std;
//#define SIZE 100
//int main()
//{
//    int str[SIZE + 1];//����0���±�ռ䱣֤��ź��±���ͬ
//    memset(str, 0, sizeof(str));//��������0���
//    //�ų�����2-10���ڵ����ı��������������и�ֵΪ1
//    //������ѭ������Ϊ2~sqrt(SIZE)
//    for (int i = 2; i * i <= SIZE; i++)
//    {
//        if (str[i] == 0)
//        {
//            for (int j = i * i; j <= SIZE; j += i)
//                //����j+=i����j��i�ı���(ÿ�μ�һ��1*i)
//                //ÿ����ѭ�������´�ѭ��j=i*i��ʼ
//                //��֤ǰ��2*i,3*i...֪��i*i�����ظ���ѭ��
//            {
//                str[j] = 1;
//            }
//        }
//    }
//    //��ӡ������������ֵΪ0�������±꣬���������±�
//    //��i=2��ʼ���ų�1�������ֵ
//    for (int i = 2; i <= SIZE; i++)
//    {
//        if (str[i] == 0) {
//            cout << i << ' ';
//        }
//    }
//    return 0;
//}




////P1217 [USACO1.5]�������� Prime Palindromes
//#include<iostream>
//#include<cstring>
//#include<cmath>
//#include<vector>
//using namespace std;
//
//  //ע��1~8λ�������ǻ�����
// 
//vector<long>palindromes;
//
////�������1~8λ�Ļ�������
//void find_palindromes()
//{
//	//memset(palindromes, 0, sizeof(palindromes));//��ȫ��ʼ��Ϊ0
//	//memset(prime, false, sizeof(prime));//��ȫ��ʼ��Ϊ��
//	long long palindrome = 0;
//
//	//1λ�Ļ�����
//	for (int i = 5; i <= 9; i++)
//	{
//		palindromes.push_back(i);
//	}
//
//	//2λ�Ļ�����
//	for (int d1 = 1; d1 <= 9; d1 += 2)
//	{
//		palindrome = 10 * d1 + d1;
//		palindromes.push_back(palindrome);
//	}
//
//	//3λ�Ļ�����
//	for (int d1 = 1; d1 <= 9; d1 += 2) {
//		for (int d2 = 0; d2 <= 9; d2++) {
//			palindrome = 100 * d1 + 10 * d2 + d1;
//			palindromes.push_back(palindrome);
//		}
//	}
//
//	//4λ�Ļ�������
//	for (int d1 = 1; d1 <= 9; d1 += 2)
//	{
//		for (int d2 = 0; d2 <= 9; d2++)
//		{
//			palindrome = 1000 * d1 + 100 * d2 + 10 * d2 + d1;
//			palindromes.push_back(palindrome);
//		}
//	}
//
//	//5λ�Ļ�����
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // ֻ�������Ż�������
//		for (int d2 = 0; d2 <= 9; d2++) {
//			for (int d3 = 0; d3 <= 9; d3++) {
//				palindrome = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;
//				palindromes.push_back(palindrome);
//			}
//		}
//	}
//
//	//6λ�Ļ�����
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // ֻ�������Ż�������
//		for (int d2 = 0; d2 <= 9; d2++) {
//			for (int d3 = 0; d3 <= 9; d3++) {
//				palindrome = 100000 * d1 + 10000 * d2 + 1000 * d3 + 100 * d3 + 10 * d2 + d1;
//				palindromes.push_back(palindrome);
//			}
//		}
//	}
//
//	//7λ�Ļ�����
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // ֻ�������Ż�������
//		for (int d2 = 0; d2 <= 9; d2++) {
//			for (int d3 = 0; d3 <= 9; d3++) {
//				for (int d4 = 0; d4 <= 9; d4++) {
//					palindrome = 1000000 * d1 + 100000 * d2 + 10000 * d3 + 1000 * d4 + 100 * d3 + 10 * d2 + d1;
//					palindromes.push_back(palindrome);
//				}
//			}
//		}
//	}
//
//	//8λ�Ļ�����
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // ֻ�������Ż�������
//		for (int d2 = 0; d2 <= 9; d2++) {
//			for (int d3 = 0; d3 <= 9; d3++) {
//				for (int d4 = 0; d4 <= 9; d4++) {
//					palindrome = 10000000 * d1 + 1000000 * d2 + 100000 * d3 + 10000 * d4 + 1000 * d4 + 100 * d3 + 10 * d2 + d1;
//					palindromes.push_back(palindrome);
//				}
//			}
//		}
//	}
//}
//
//
//int is_prime(long long num)
//{
//	if (num <= 1)
//		return 0;
//	if (num == 2 || num == 3)
//		return 1;
//	else if (num % 6 != 1 && num % 6 != 5)
//		return 0;
//	long long k = sqrt(num);
//	for (long long i = 5; i <= k; i+=6)
//	{
//		if (num % i == 0 || num % (i + 2) == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	find_palindromes();
//	long long a, b;
//	cin >> a >> b;
//	
//	int i = 0;
//	while (palindromes[i] < a)//�ҵ����ڵ���a���±�i
//	{
//		i++;
//	}
//	int j = i;
//	while (palindromes[j] <= b)//�ҵ�>b���±�j
//	{
//		j++;
//	}
//	for (int k = i; k < j; k++)//i��ȡ��j����ȡ
//	{
//		if (is_prime(palindromes[k]))
//			cout << palindromes[k] << endl;
//	}
//	
//	return 0;
//}



//
////P1423 С������Ӿ
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float s;
//	cin >> s;
//	float sum = 0;
//	float t = 2;
//	int i = 0;//�����ֶ���ȫ��0��ʼ����һ��Ҳ��ѭ����Ȼ��i��չ��1���жϵڶ����Ƿ��ܽ�
//	for (i = 0; sum < s; i++)
//	{
//		sum += t;
//		t = 0.98 * t;
//	}
//	cout << i;
//
//	return 0;
//}


////P1307 [NOIP2011 �ռ���] ���ַ�ת
//#include<iostream>
//#include<vector>
//using namespace std;
////ע�⸺������0����
////ע���ӡ����
////ע�����ʱ��ӵ�һ������0��Ԫ�ؿ�ʼ���
//
//int main()
//{
//	long long n;
//	cin >> n;
//	vector<int>arr;
//	if (n > 0)
//	{
//		long long t = n;
//		while (t)
//		{
//			int k = t % 10;
//			arr.push_back(k);
//			t /= 10;
//			
//		}
//		int i = 0;//��Ҫ�ڴ�����ʱ���ж�0��������׳���
//		while (arr[i] == 0)//�ڴ�ӡ��ʱ���жϣ��ӵ�һ������0�Ŀ�ʼ���
//		{
//			i++;
//		}
//		for (; i < arr.size(); i++)
//		{
//			
//			cout << arr[i];
//		}
//		
//	}
//	else if (n == 0)
//	{
//		cout << '0';
//	}
//	else
//	{
//		n *= -1;
//		long long t = n;
//		while (t)
//		{
//			int k = t % 10;
//			arr.push_back(k);
//			t /= 10;
//
//		}
//		cout << '-';
//		int i = 0;
//		while (arr[i] == 0)
//		{
//			i++;
//		}
//		for (; i < arr.size(); i++)
//		{
//
//			cout << arr[i];
//		}
//	}
//	return 0;
//}


//
////P1720 ����������Ǯ��쳲��������У�
//#include<iostream>
//#include<cstring>
//#include<iomanip>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//
//	double arr[100];
//	memset(arr, 0.00, sizeof(arr));
//
//	arr[1] = 1.00;
//	arr[2] = 1.00;
//	int n;
//	cin >> n;
//	for (int i = 3; i <= n; i++)
//	{
//		arr[i] = arr[i - 1] + arr[i - 2] + 0.00;
//	}
//	cout << fixed << setprecision(2) << arr[n];
//
//
//	return 0;
//}


////P5724 �����4.ϰ5���󼫲� / �����ֵ
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int arr[105];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	cout << max - min << endl;
//
//	return 0;
//}



////P1420 �����
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	long long arr[100000];
//	memset(arr, 0, sizeof(arr));
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	int count = 1;//��ȷ��countΪ1���û�����ŵģ�����1������
//	int max = count;
//	for (int i = 1; i < n; i++) 
//	{
//		if (arr[i] == arr[i - 1] + 1) 
//		{
//			count++;
//			if (count > max) 
//			{
//				max = count;
//			}
//		}
//		else 
//		{
//			count = 1;
//		}
//
//	}
//	cout << max;
//
//
//
//	return 0;
//}


////P1075 [NOIP2012 �ռ���] �������ֽ�
////����sb
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long n;
//	cin >> n;
//	int i = 2;
//	while (n % i)//����������ҵ���С�������ˣ���������������
//	{
//		i++;
//	}
//	cout << n / i;
//
//
//	return 0;
//}


//P5725 �����4.ϰ8����������
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n * n; i++)
//	{
//		printf("%02d", i);
//		if (i % n == 0)
//		{
//			cout << endl;
//		}
//	}
//	cout << endl;
//
//	//��ӡ������
//	for (int i = 1; i <= n; i++)//�ܹ�n��
//	{
//		for (int j = 0; j < n - i; j++)//��ӡ�ո���n-i��(����-�к�)
//		{
//			cout <<"  ";
//		}
//		for (int s = i * (i - 1) / 2 + 1; s <= i * (i + 1) / 2; s++)//��ʼ����һ�ν����ܺ�+1����ν���
//		{
//			printf("%02d", s);
//		}
//		cout << endl;
//
//	}
//
//
//
//	return 0;
//}


////P5726 �����4.ϰ9�����
//#include<iostream>
//#include<iomanip>
//#include<string>
//using namespace std;
//
//int main()
//{
//
//	int n;
//	cin >> n;
//	int arr[1005] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int max = arr[0];
//	int min = arr[0];
//	int count = arr[0];
//	for (int i = 1; i < n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//		count += arr[i];
//	}
//	float avg = 0;
//	avg = 1.00*(count - max - min) / (n - 2);
//	cout << fixed << setprecision(2) << avg;
//	
//
//
//	return 0;
//}



////P4956[COCI2017 - 2018#6] Davor
//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	int n;
//	cin >> n;
//	int x = 0;
//	int k = 0;
//	
//	int t = n / 52;//ÿ�����ڴ��	Ǯ
//	//7x+21k=t
//	int flag = 0;
//	for (x = t-21; x >= 1; x--)//x�����kȡ1ʱ��
//	{
//		for (k = 1; k <= t-7; k++)//k�����xȡ1ʱ��
//		{
//			if (7 * x + 21 * k == t)
//			{
//				if (x >= 1 && x <= 100 && k >= 1)
//				{
//					cout << x << endl;
//					cout << k << endl;
//					flag = 1;
//					break;
//				}
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//
//
//	return 0;
//}



////P1089 [NOIP2004 �����] ���Ĵ���ƻ�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int month = 12;
//	int arr[13] = { 0 };
//	for (int i = 1; i <= 12; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int t = 0;//ÿ���¿�ʼʱ���ϸ�����������Ǯ
//	int sum = 0;//��õ�������
//	int yue = 0;//��Ӧ����
//	int i = 1;
//
//	for (i = 1; i <= 12; i++)
//	{
//		if (300 + t - arr[i] < 0)
//		{
//			yue = i;//��¼�ĸ���ûǮ��
//			cout << '-' << yue;
//			break;
//		}
//		sum += (300 + t - arr[i]) / 100;
//		t = (300 + t - arr[i]) % 100;//�¸��¿�ʼ����
//
//	}
//
//	if (i == 13)
//	{
//		int num = (sum * 100) * 1.2 + t;
//		cout << num;
//	}
//
//
//
//	return 0;
//}




////P5730 �����5.��10����ʾ��
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char arr1[800];
//	char arr2[800];
//	char arr3[800];
//	char arr4[800];
//	char arr5[800];
//
//	char a[105];
//
//	int n;
//	cin >> n;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		switch (a[i]-'0')
//		{
//		case 0:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j] = arr2[j + 2] = 'X';
//			arr2[j + 1] = '.';
//			arr3[j] = arr3[j + 2] = 'X';
//			arr3[j + 1] = '.';
//			arr4[j] = arr4[j + 2] = 'X';
//			arr4[j + 1] = '.';
//			arr5[j] = arr5[j + 1] = arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			
//			break;
//		case 1:			
//			arr1[j] = arr1[j + 1] = '.';
//			arr1[j + 2] = 'X';
//			arr2[j] = arr2[j + 1] = '.';
//			arr2[j + 2] = 'X';
//			arr3[j] = arr3[j + 1] = '.';
//			arr3[j + 2] = 'X';
//			arr4[j] = arr4[j + 1] = '.';
//			arr4[j + 2] = 'X';
//			arr5[j] = arr5[j + 1] = '.';
//			arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 2:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j] = arr2[j + 1] = '.';
//			arr2[j + 2] = 'X';
//			arr3[j] = arr3[j + 1] = arr3[j + 2] = 'X';
//			arr4[j+1] = arr4[j + 2] = '.';
//			arr4[j ] = 'X';
//			arr5[j] = arr5[j + 1] = arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 3:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j] = arr2[j + 1] = '.';
//			arr2[j + 2] = 'X';
//			arr3[j] = arr3[j + 1] = arr3[j + 2] = 'X';
//			arr4[j] = arr4[j + 1] = '.';
//			arr4[j + 2] = 'X';
//			arr5[j] = arr5[j + 1] = arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 4:
//			arr1[j] = arr1[j + 2] = 'X';
//			arr1[j + 1] = '.';
//			arr2[j] = arr2[j + 2] = 'X';
//			arr2[j + 1] = '.';
//			arr3[j] = arr3[j + 1] = arr3[j + 2] = 'X';
//			arr4[j] = arr4[j + 1] = '.';
//			arr4[j + 2] = 'X';
//			arr5[j] = arr5[j + 1] = '.';
//			arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 5:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j+1] = arr2[j + 2] = '.';
//			arr2[j] = 'X';
//			arr3[j] = arr3[j + 1] = arr3[j + 2] = 'X';
//			arr4[j ] = arr4[j + 1] = '.';
//			arr4[j+2] = 'X';
//			arr5[j] = arr5[j + 1] = arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 6:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j + 1] = arr2[j + 2] = '.';
//			arr2[j] = 'X';
//			arr3[j] = arr3[j + 1] = arr3[j + 2] = 'X';
//			arr4[j] = arr4[j + 2] = 'X';
//			arr4[j + 1] = '.';
//			arr5[j] = arr5[j + 1] = arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 7:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j] = arr2[j + 1] = '.';
//			arr2[j + 2] = 'X';
//			arr3[j] = arr3[j + 1] = '.';
//			arr3[j + 2] = 'X';
//			arr4[j] = arr4[j + 1] = '.';
//			arr4[j + 2] = 'X';
//			arr5[j] = arr5[j + 1] = '.';
//			arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 8:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j] = arr2[j + 2] = 'X';
//			arr2[j + 1] = '.';
//			arr3[j] = arr3[j + 2] = 'X';
//			arr3[j + 1] = 'X';
//			arr4[j] = arr4[j + 2] = 'X';
//			arr4[j + 1] = '.';
//			arr5[j] = arr5[j + 1] = arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		case 9:
//			arr1[j] = arr1[j + 1] = arr1[j + 2] = 'X';
//			arr2[j] = arr2[j + 2] = 'X';
//			arr2[j + 1] = '.';
//			arr3[j] = arr3[j + 1] = arr3[j + 2] = 'X';
//			arr4[j] = arr4[j + 1] = '.';
//			arr4[j + 2] = 'X';
//			arr5[j] = arr5[j + 1] = arr5[j + 2] = 'X';
//			arr1[j + 3] = arr2[j + 3] = arr3[j + 3] = arr4[j + 3] = arr5[j + 3] = '.';
//			break;
//		default:
//			break;
//		}
//		j += 4;
//	}
//
//	for (int i = 0; i < 4 * n - 1; i++)
//	{
//		cout << arr1[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 4 * n - 1; i++)
//	{
//		cout << arr2[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 4 * n - 1; i++)
//	{
//		cout << arr3[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 4 * n - 1; i++)
//	{
//		cout << arr4[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 4 * n - 1; i++)
//	{
//		cout << arr5[i];
//	}
//
//
//
//	return 0;
//}




////P1554 ���е�ͳ��
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long min, max;
//	cin >> min >> max;
//	long arr[11] = { 0 };
//	
//	for (long i = min; i <= max; i++)
//	{
//		long t = i;
//		int count = 0;
//		int brr[20] = { 0 };
//		while (t)
//		{
//			brr[count] = t % 10;
//			t /= 10;
//			count++;
//		}
//		for (int j = 0; j < count; j++)
//		{
//			switch (brr[j])
//			{
//			case 0:
//				arr[0]++;
//				break;
//			case 1:
//				arr[1]++;
//				break;
//			case 2:
//				arr[2]++;
//				break;
//			case 3:
//				arr[3]++;
//				break;
//			case 4:
//				arr[4]++;
//				break;
//			case 5:
//				arr[5]++;
//				break;
//			case 6:
//				arr[6]++;
//				break;
//			case 7:
//				arr[7]++;
//				break;
//			case 8:
//				arr[8]++;
//				break;
//			case 9:
//				arr[9]++;
//				break;
//			default:
//				break;
//			}
//		}
//
//
//	}
//	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << " " <<
//		arr[6] << " " << arr[7] << " " << arr[8] << " " << arr[9];
//
//
//
//	return 0;
//}




////P2141 [NOIP2014 �ռ���] ���������
//#include<iostream>
//using namespace std;
////ע�����������ж�����ĺ���ͬ���Ҷ�Ӧ��ʱ������
////���ѭ���ҵ�ʱ���ҵ���Ӧ�ľ�ֱ���ˣ�����һ��a[i]����Ҫ��������
//
//int main()
//{
//
//	long arr[100005] = {0};//�������֮�͵�����
//	int a[105] = { 0 };//�����������
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	int temp = 0;
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			arr[temp++] = a[i] + a[j];
//		}
//	}
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < temp; j++)
//		{
//			if (arr[j] == a[i])
//			{
//				count++;
//				break;//�ҵ��˾�ֱ���˳���ѭ������Ȼ���arr[j]���ظ��Ͷ�����
//			}
//		}
//	}
//	cout << count;
//
//
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//	int m, n;
//	cin >> m >> n;
//	int arr[10000] = { 0 };
//
//	for (int i = 0; i < m; i++)
//	{
//		cin >> arr[i];
//	}
//
//	int sum = 0;
//	int min = 0;
//	for (int i = 0; i < n; i++)
//	{
//		min += arr[i];
//	}
//
//
//	for (int i = 0; i < m-n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			sum += arr[i + j];
//		}
//		if (sum < min)
//		{
//			min = sum;
//			sum = 0;
//		}
//		else
//		{
//			sum = 0;
//		}
//	}
//
//	cout << min;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	cout << "hello world" << endl;
	return 0;
}