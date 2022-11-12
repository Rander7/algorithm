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
//上面想找规律，但是失败，过于复杂

////P1980 [NOIP2013 普及组] 计数问题
//#include<iostream>
//using namespace std;
////思路在于从1开始递增，每次判断其各位的数，用%10找数再/10循环
//int main()
//{
//	long long n;
//	int k;
//	int count = 0;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		int d = i;//存储i
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



////P1035 [NOIP2002 普及组] 级数求和
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
//		sum += 1.0 / n;//注意浮点数
//		n++;
//	}
//	cout << n - 1;//注意n什么时候开始
//
//
//	return 0;
//}


////P2669[NOIP2015 普及组] 金币
//#include<iostream>
//using namespace std;
//int main()
//{
//	int k;
//	cin >> k;
//	long long sum = 0;
//	int i = 1;
//	while (k >= (i + 1) * i / 2)//k是否大于等于上一个连续的日期总和
//	{
//		int t = k - (i + 1) * i / 2;//k比上一个连续日期总和多多少
//		sum += i * i;//总数加等于当前连续日期获得总和
//		++i;//i递增到下一个连续日期区间
//		if (t < i)//如果t不足以满足填满下一个连续区间就加上t*下一个连续区间的权
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
////P5722 【深基4.例11】数列求和
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
////P5723 【深基4.例13】质数口袋
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	int arr[10000] = { 0 };
//	//普通求质数
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
//	if (L < arr[0])//比第一个还小的话单独输出count
//	{
//		count = 0;
//	}
//	k = 1;
//	while (sum <= L)
//	{
//		if (k == 1)//第一个单独判断
//		{
//			cout << arr[0] << endl;
//		}
//		sum += arr[k];
//		if (sum <= L)//注意判断再输出
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
// //埃筛法
//#include <cstring>
//#include <iostream>
//using namespace std;
//int l;
//bool prime[100000];
//int cnt;
//int main() {
//    memset(prime, 1, sizeof(prime));//埃筛一定要初始化数组值
//    cin >> l;
//    prime[1] = 0;
//    prime[0] = 0;
//    for (int i = 2; i < 100000; i++) {
//        if (prime[i]) {
//            for (int j = i * 2; j < 100000; j += i) {
//                prime[j] = 0;
//            }
//        }
//    }//筛取质数
//    for (int i = 2; i < 100000; i++) {
//        if (prime[i]) {
//            if (l >= i) {
//                cout << i << endl;
//                l -= i;
//                cnt++;
//            }//如果够，输出，l减去这个质数，cnt++
//            else break;//不够就可以break
//        }
//    }
//    cout << cnt;//最后输出cnt
//    return 0;
//}

////埃式筛法专题
// 
// ----------核心：遍历不大于√n的所有素数，再将其素数的倍数都剔除---------------------------
// 
//特别的，1既不是质数，也不是合数。
//第一步、假设：对于自然数n以内的数，我们先假定除1以外的数全部为素数。
//
//第二步、剔除：怎么剔除？我们要遍历不大于√n的所有素数，再将其素数的倍数都剔除。
//也许你就会有疑问了，我都还没开始判断是素数，你怎么知道根号n的所有素数呢，别急，有趣的来了，
//对于2，我们之前就是1，没有其他约数，显然就是素数，那么我们之前的假设成立，OK！剔除2的倍数， 
//== 剔除即是解除假定，即不是素数了。 == 那么我们往下寻找，发现了3没有被剔除，即显然是素数，OK！
//剔除3的倍数。再往下寻找没有被剔除的数，再剔除该数的倍数。重复完上述步骤后我们看我们筛好的n以内的数。
//那么，还有一个细节，就是我们只需要遍历从不大于√n的素数，读者可以思考一下，这是为什么呢？
//
//我们看，对于根号n以上的素数，我们知道：
//从(√n + 1) * 2到(√n + 1) * √n的数，他们是都有一个小于等于√n的约数，
//则意味着它们这些数在我们遍历不大于√n的素数的时候都已经被剔除了，已经无需再往下去寻找剔除了，
//减少了时间复杂度。在大于√n的数，没被剔除的自然都是素数了。
//
// //这个没有包括maxn，最大是maxn他是从0开始的，所以其最大的数是maxn-1
//#include<iostream>
//#include<cstring>
//#include<cmath>
//using namespace std;
//
////基本数据
//const int maxn = 100;//需要寻找最大为maxn一下的素数
//bool primer[maxn];  //素数表
//
////打表函数
//void isprimer()  //打好素数表。
//{
//	int k = sqrt(maxn);
//	memset(primer, true, sizeof(primer));//假设全部都是素数。
//	primer[0] = primer[1] = false;//0和1自然都不是素数，我们直接剔除（因为根据倍数无法剔除，这些是特殊的）
//	for (int i = 2; i <= k; i++)
//	{
//		if (primer[i])//如果i是素数，则剔除它的倍数。
//		{
//			for (int j = 2 * i; j < maxn; j += i)//遍历i的倍数，注意创建时候是取不到maxn的，所以j<maxn
//			{
//				primer[j] = false;//剔除
//			}				
//		}
//	}
//}
////对于剔除的起始位置是2*i，而i是大于等于2的，在之后j一直递增i的时候也就是会到i*i，
////在2到i的过程中，存在着2到i的约数，则存在着这些数显然已经被剔除，我们无需再判断剔除了，
////所以我们的剔除的起始位置可以改为i*i，我们的算法又进一步得到优化。
//
//int main()
//{
//	isprimer();
//	for (int i = 0; i < maxn; i++)
//	{
//		if (primer[i]) {
//			cout << i << endl;//序号是对应的
//		}
//	}
//	return 0;
//}
// 
// //这个我的包括了maxn
//#include<iostream>
//#include<cstring>
//using namespace std;
//#define SIZE 100
//int main()
//{
//    int str[SIZE + 1];//舍弃0号下标空间保证序号和下标相同
//    memset(str, 0, sizeof(str));//所有数用0填充
//    //排除所有2-10以内的数的倍数，并在数组中赋值为1
//    //所以外循环次数为2~sqrt(SIZE)
//    for (int i = 2; i * i <= SIZE; i++)
//    {
//        if (str[i] == 0)
//        {
//            for (int j = i * i; j <= SIZE; j += i)
//                //依次j+=i代表j是i的倍数(每次加一个1*i)
//                //每次外循环结束下次循环j=i*i开始
//                //保证前面2*i,3*i...知道i*i不被重复内循环
//            {
//                str[j] = 1;
//            }
//        }
//    }
//    //打印出所有数组中值为0的数的下标，即素数的下标
//    //从i=2开始，排除1这个特殊值
//    for (int i = 2; i <= SIZE; i++)
//    {
//        if (str[i] == 0) {
//            cout << i << ' ';
//        }
//    }
//    return 0;
//}




////P1217 [USACO1.5]回文质数 Prime Palindromes
//#include<iostream>
//#include<cstring>
//#include<cmath>
//#include<vector>
//using namespace std;
//
//  //注意1~8位都可能是回文数
// 
//vector<long>palindromes;
//
////打表，先求1~8位的回文数表
//void find_palindromes()
//{
//	//memset(palindromes, 0, sizeof(palindromes));//先全初始化为0
//	//memset(prime, false, sizeof(prime));//先全初始化为否
//	long long palindrome = 0;
//
//	//1位的回文数
//	for (int i = 5; i <= 9; i++)
//	{
//		palindromes.push_back(i);
//	}
//
//	//2位的回文数
//	for (int d1 = 1; d1 <= 9; d1 += 2)
//	{
//		palindrome = 10 * d1 + d1;
//		palindromes.push_back(palindrome);
//	}
//
//	//3位的回文数
//	for (int d1 = 1; d1 <= 9; d1 += 2) {
//		for (int d2 = 0; d2 <= 9; d2++) {
//			palindrome = 100 * d1 + 10 * d2 + d1;
//			palindromes.push_back(palindrome);
//		}
//	}
//
//	//4位的回文素数
//	for (int d1 = 1; d1 <= 9; d1 += 2)
//	{
//		for (int d2 = 0; d2 <= 9; d2++)
//		{
//			palindrome = 1000 * d1 + 100 * d2 + 10 * d2 + d1;
//			palindromes.push_back(palindrome);
//		}
//	}
//
//	//5位的回文数
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // 只有奇数才会是素数
//		for (int d2 = 0; d2 <= 9; d2++) {
//			for (int d3 = 0; d3 <= 9; d3++) {
//				palindrome = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;
//				palindromes.push_back(palindrome);
//			}
//		}
//	}
//
//	//6位的回文数
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // 只有奇数才会是素数
//		for (int d2 = 0; d2 <= 9; d2++) {
//			for (int d3 = 0; d3 <= 9; d3++) {
//				palindrome = 100000 * d1 + 10000 * d2 + 1000 * d3 + 100 * d3 + 10 * d2 + d1;
//				palindromes.push_back(palindrome);
//			}
//		}
//	}
//
//	//7位的回文数
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // 只有奇数才会是素数
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
//	//8位的回文数
//	for (int d1 = 1; d1 <= 9; d1 += 2) {    // 只有奇数才会是素数
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
//	while (palindromes[i] < a)//找到大于等于a的下标i
//	{
//		i++;
//	}
//	int j = i;
//	while (palindromes[j] <= b)//找到>b的下标j
//	{
//		j++;
//	}
//	for (int k = i; k < j; k++)//i能取，j不能取
//	{
//		if (is_prime(palindromes[k]))
//			cout << palindromes[k] << endl;
//	}
//	
//	return 0;
//}



//
////P1423 小玉在游泳
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	float s;
//	cin >> s;
//	float sum = 0;
//	float t = 2;
//	int i = 0;//像这种都是全从0开始，第一步也进循环，然后i拓展成1再判断第二步是否能进
//	for (i = 0; sum < s; i++)
//	{
//		sum += t;
//		t = 0.98 * t;
//	}
//	cout << i;
//
//	return 0;
//}


////P1307 [NOIP2011 普及组] 数字反转
//#include<iostream>
//#include<vector>
//using namespace std;
////注意负数正数0分类
////注意打印负号
////注意输出时候从第一个不是0的元素开始输出
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
//		int i = 0;//不要在存数字时候判断0，情况多易出错
//		while (arr[i] == 0)//在打印的时候判断，从第一个不是0的开始输出
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
////P1720 月落乌啼算钱（斐波那契数列）
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


////P5724 【深基4.习5】求极差 / 最大跨度值
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



////P1420 最长连号
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
//	int count = 1;//先确定count为1如果没有连号的，就是1个连续
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


////P1075 [NOIP2012 普及组] 质因数分解
////我是sb
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	long n;
//	cin >> n;
//	int i = 2;
//	while (n % i)//找最大那先找到最小不就行了？？？？？？？？
//	{
//		i++;
//	}
//	cout << n / i;
//
//
//	return 0;
//}


//P5725 【深基4.习8】求三角形
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
//	//打印三角形
//	for (int i = 1; i <= n; i++)//总共n行
//	{
//		for (int j = 0; j < n - i; j++)//打印空格数n-i个(总行-行号)
//		{
//			cout <<"  ";
//		}
//		for (int s = i * (i - 1) / 2 + 1; s <= i * (i + 1) / 2; s++)//起始从上一次结束总和+1到这次结束
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


////P5726 【深基4.习9】打分
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
//	int t = n / 52;//每个星期存的	钱
//	//7x+21k=t
//	int flag = 0;
//	for (x = t-21; x >= 1; x--)//x最大是k取1时候
//	{
//		for (k = 1; k <= t-7; k++)//k最大是x取1时候
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



////P1089 [NOIP2004 提高组] 津津的储蓄计划
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
//	int t = 0;//每个月开始时候上个月留下来的钱
//	int sum = 0;//存好的整百数
//	int yue = 0;//对应月数
//	int i = 1;
//
//	for (i = 1; i <= 12; i++)
//	{
//		if (300 + t - arr[i] < 0)
//		{
//			yue = i;//记录哪个月没钱的
//			cout << '-' << yue;
//			break;
//		}
//		sum += (300 + t - arr[i]) / 100;
//		t = (300 + t - arr[i]) % 100;//下个月开始经费
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




////P5730 【深基5.例10】显示屏
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




////P1554 梦中的统计
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




////P2141 [NOIP2014 普及组] 珠心算测验
//#include<iostream>
//using namespace std;
////注意点在于如果有多个数的和相同，找对应的时候会多算
////最后循环找的时候，找到对应的就直接退，找下一个a[i]，不要继续找了
//
//int main()
//{
//
//	long arr[100005] = {0};//存放两数之和的数组
//	int a[105] = { 0 };//存放输入数据
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
//				break;//找到了就直接退出内循环，不然如果arr[j]有重复就多算了
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