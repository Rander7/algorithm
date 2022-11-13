//P1428 小鱼比可爱
//输入格式
//第一行输入一个正整数 nn，表示鱼的数目。
//
//第二行内输入 nn 个正整数，用空格间隔，依次表示从左到右每只小鱼的可爱程度 a_ia
//i
//​
//。
//
//输出格式
//一行，输出 nn 个整数，用空格间隔，依次表示每只小鱼眼中有多少只鱼不如自己可爱。
#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr1[255];
	int arr2[255] = { 0 };
	int k = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 1; i < n; i++)
	{
		k = i;
		for (int j = 0; j < k; j++)
		{
			if (arr1[j] < arr1[k])
			{
				arr2[k] += 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr2[i] << " ";
	}

	return 0;
}

//P1427 小鱼的数字游戏
//输入格式
//一行内输入一串整数，以 0 结束，以空格间隔。
//
//输出格式
//一行内倒着输出这一串整数，以空格间隔。


//关键点在于用flag=arr[i]判断循环是否继续
//空格不用管，cin输入空格自动结束


#include<iostream>
using namespace std;

int main()
{

	int i = 0;
	int flag = 1;//辅助判断是否输入了0
	int arr[255];

	while (flag)
	{
		cin >> arr[i];
		flag = arr[i];
		i++;
	}

	int j = i - 2;//最后i多递增了一次，并且不能输出0

	for (; j >= 0; j--)
	{
		cout << arr[j] << " ";
	}


	return 0;
}

//P5727 【深基5.例3】冰雹猜想
//输入格式
//输入一个正整数 n。
//
//输出格式
//输出若干个由空格隔开的正整数，表示从最后的 1 开始倒序的变化数列。

#include<iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;

	int arr[255];
	int i = 1;
	//unsigned int k = n;
	arr[0] = n;

	while (n != 1)
	{

		if (n % 2 != 0)
		{
			arr[i] = n * 3 + 1;
			i++;
			n = n * 3 + 1;
		}
		else
		{
			arr[i] = n / 2;
			i++;
			n = n / 2;
		}
	}

	for (i=i-1; i >= 0; i--)
	{
		cout << arr[i]<<" ";
	}

	return 0;
}

//P1047[NOIP2005 普及组] 校门外的树
//输入格式
//第一行有两个整数，分别表示马路的长度 ll 和区域的数目 mm。
//
//接下来 m 行，每行两个整数 u, vu, v，表示一个区域的起始点和终止点的坐标。
//
//输出格式
//输出一行一个整数，表示将这些树都移走后，马路上剩余的树木数量。


#include<iostream>
using namespace std;

int main()
{

	int l;
	int m;
	int a[100];//起点数组
	int b[100];//终点数组
	int c[10001] = { 0 };//存树数组,初始全赋为0,1就是无树

	cin >> l >> m;

	//从0开始就种了一颗树，所有从0开始
	for (int i = 0; i <m; i++)
	{
		cin >> a[i];
		cin >> b[i];

		for (int j = a[i]; j <= b[i]; j++)
		{
			c[j] = 1;//这个区间范围都无树
		}
	}

	int count = 0;
	for (int i = 0; i <= l; i++)
	{
		if (c[i] == 0)
		{
			count++;
		}
	}

	cout << count;
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int arr1[1001];
	int arr2[1001];
	int arr3[1001];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i] >> arr2[i] >> arr3[i];
	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((abs(arr1[i] - arr1[j]) <= 5) && (abs(arr2[i] - arr2[j]) <= 5) && (abs(arr3[i] - arr3[j]) <= 5))
			{
				if (abs((arr1[i] + arr2[i] + arr3[i]) - (arr1[j] + arr2[j] + arr3[j]))<=10)
				{
					count++;
				}
			}
		}
	}

	cout << count;

	return 0;
}

//P5729 【深基5.例7】工艺品制作



#include<iostream>
using namespace std;

int main()
{

	int arr[21][21][21] = { 0 };//三维数组表示所有点阵
	int q;
	int  w, x, h;
	cin >> w >> x >> h;
	cin >> q;
	while (q--)
	{
		int x1, y1, z1, x2, y2, z2;
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		for (int i = x1; i <= x2; i++)
		{
			for (int j = y1; j <= y2; j++)
			{
				for (int k = z1; k <= z2; k++)
				{

					arr[i][j][k] = 1;


				}
			}
		}
	}

	int count = 0;

	for (int i = 1; i <= w; i++)
	{
		for (int j = 1; j <=x; j++)
		{
			for (int k = 1; k <= h; k++)
			{
				if (arr[i][j][k] == 0)
				{
					count++;
				}
			}
		}
	}

	cout << count;

	return 0;
}

//P2550[AHOI2001]彩票摇奖
#include<iostream>
using namespace std;

int main()
{
	int arr1[8];//中奖的号码数组
	int arr2[1001][8];//所有彩票号码
	int arr3[8] = { 0 };

	int n;
	cin >> n;
	for (int i = 0; i < 7; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < 7; j++)
		{

			for (int k = 0; k < 7; k++)
			{
				if (arr2[i][j] == arr1[k])
				{
					count++;
				}
			}
		}
		switch (count)
		{
		case 1:
			arr3[7] += 1;
			break;
		case 2:
			arr3[6] += 1;
			break;
		case 3:
			arr3[5] += 1;
			break;
		case 4:
			arr3[4] += 1;
			break;
		case 5:
			arr3[3] += 1;
			break;
		case 6:
			arr3[2] += 1;
			break;
		case 7:
			arr3[1] += 1;
			break;
		default:
			break;
		}
	}

	for (int i = 1; i <= 7; i++)
	{
		cout << arr3[i] << " ";
	}


	return 0;
}

//幻方问题
#include<iostream>
using namespace std;

void createhf(int arr[40][40], int n,int k,int a,int b)
{
	if (k > n*n)
	{
		return;
	}
	else
	{

		if (a == 1 && b != n)
		{
			arr[n][b + 1] = k + 1;
			createhf(arr, n, k + 1, n, b + 1);
		}
		else if (b == n && a != 1)
		{
			arr[a - 1][1] = k + 1;
			createhf(arr, n, k + 1, a - 1, 1);
		}
		else if (a == 1 && b == n)
		{
			arr[a + 1][b] = k + 1;
			createhf(arr, n, k + 1, a + 1, b);
		}
		else if (a != 1 && b != n)
		{
			if (arr[a - 1][b + 1] != 0)
			{
				arr[a + 1][b] = k + 1;
				createhf(arr, n, k + 1, a + 1, b);
			}
			else
			{
				arr[a - 1][b + 1] = k + 1;
				createhf(arr, n, k + 1, a - 1, b + 1);
			}
		}

	}
}



int main()
{

	int arr[40][40] = { 0 };
	int n;
	cin >> n;
	arr[1][n / 2 + 1] = 1;
	createhf(arr, n, 1, 1, n / 2 + 1);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

#include<cstdio>
using namespace std;
int n, a[40][40], x, y;
int main() {
	scanf("%d", &n);
	x = 1, y = (n + 1) / 2;
	for (int i = 1; i <= n * n; i++) {
		a[x][y] = i;
		if (!a[(x - 2 + n) % n + 1][y % n + 1]) x = (x - 2 + n) % n + 1, y = y % n + 1;
		else x = x % n + 1;//数学运算
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

#include <iostream>
using namespace std;
int a[40][40] = { 0 };

int main() {
    int n;
    std::cin >> n;
    int step = 1;     // 填到几了
    int posx, posy; // 上一个点坐标
    while (step <= n * n) {
        if (step == 1)
            a[posx = 1][posy = n / 2 + 1] = step++;
        else if (posx == 1 && posy != n)
            a[posx = n][++posy] = step++;
        else if (posx != 1 && posy == n)
            a[--posx][posy = 1] = step++;
        else if (posx == 1 && posy == n)
            a[++posx][posy] = step++;
        else if (posx != 1 && posy != n)
            if (a[posx - 1][posy + 1] == 0)
                a[--posx][++posy] = step++;
            else
                a[++posx][posy] = step++;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }
}

//P5707 【深基2.例12】上学迟到
#include<iostream>
using namespace std;
int main()
{
	int h, m;
	int s, v;
	int t;
	cin >> s >> v;
	if (s % v == 0)
	{
		m = s / v + 10;
	}
	else
	{
		m = s / v + 1 + 10;
	}
	if (m <= 60)
	{
		h = 1;
	}
	else
	{
		h = m / 60 + 1;
	}

	if (m >60)
	{
		t = (8 - h + 24) % 24;
		m = 60 - m % 60;
	}
	else
	{
		t = (8 - h + 24) % 24;
		m = 60 - m;
	}
	if (t < 10)
	{
		if (m < 10)
		{
			cout << "0" << t << ":" << "0" << m;
		}
		else
		{
			cout << "0" << t << ":"<< m;
		}
	}
	else
	{
		if (m < 10)
		{
			cout<< t << ":" << "0" << m;
		}
		else
		{
			cout<< t << ":" << m;
		}
	}


	return 0;
}

#include<iostream>
using namespace std;

void add(int s, int n,int k)
{
	if (k >= n)
	{
		cout << s;
		return;
	}
	add((s + 1) * 2, n, k + 1);
}

int main()
{

	int i = 1;
	int n;
	cin >> n;
	//add(1, n, 1);

	int sum = 1;
	for (; i < n; i++)
	{
		sum = (sum + 1) * 2;
	}
	cout << sum;

	return 0;
}

//P1085[NOIP2004 普及组] 不高兴的津津
#include<iostream>
using namespace std;
int main()
{
	int arr[8][2];
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	int count = 0;
	int max = 0;

	for (int i = 0; i < 7; i++)
	{
		int t = max;//记录上一次的max值
		max = max > (arr[i][0] + arr[i][1]) ? max : (arr[i][0] + arr[i][1]);
		//如果新的一天大于max
		/*if (((arr[i][0] + arr[i][1]) >= 8) && ((arr[i][0] + arr[i][1]) >= max))*/
		if ((arr[i][0] + arr[i][1]) >= 8)
			//保证要大于8，不然不记录该天，并且这一天的时间要比max大，也就是需要更新
		{
			if (t != max)
				//如果新的更新的max和上一次的max值不相等，也就是这一天需要更新进去
			{
				count = i;
			}
			//不需要再写相等的else，因为之前已经记录了最早的一天的天数了
		}

	}

	if (count > 0)
	{
		cout << count + 1;
	}
	else
	{
		cout << count;
	}

	return 0;
}

//P1909[NOIP2016 普及组] 买铅笔

#include<iostream>
using namespace std;

int main()
{
	int arr[3][3];
	int n;
	cin >> n;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	int a = n / arr[0][0] + 2;
	int b = n / arr[1][0] + 2;
	int c = n / arr[2][0] + 2;
	int count = 0;
	int min = 65535;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			for (int k = 0; k < c; k++)
			{
				if (i * arr[0][0] + j * arr[1][0] + k * arr[2][0] >= n)
				{
					count = i * arr[0][1] + j * arr[1][1] + k * arr[2][1];
					if (count <= min)
					{
						min = count;
					}
				}

			}
		}
	}

	cout << min;

	return 0;

}

//P1909[NOIP2016 普及组] 买铅笔

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int arr[3][3];
	int n;
	cin >> n;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	int a = n / arr[0][0] + 3;
	int b = n / arr[1][0] + 3;
	int c = n / arr[2][0] + 3;
	int count = 0;
	double min = 200000000;//搞大点

	for (int i = 0; i < a; i++)
	{
		if (i * arr[0][0] >= n)
		{
			count = i * arr[0][1];
			if (count <= min)
			{
				min = count;
			}
		}
	}

	for (int i = 0; i < b; i++)
	{
		if (i * arr[1][0] >= n)
		{
			count = i * arr[1][1];
			if (count <= min)
			{
				min = count;
			}
		}
	}

	for (int i = 0; i < c; i++)
	{
		if (i * arr[2][0] >= n)
		{
			count = i * arr[2][1];
			if (count <= min)
			{
				min = count;
			}
		}
	}

	cout <<fixed<<setprecision(0) << min;//注意不要科学计数法输出

	return 0;

}

//P5717 【深基3.习8】三角形分类

#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a <= b)
	{
		int t = a;
		a = b;
		b = t;
	}
	if (a <= c)
	{
		int t = a;
		a = c;
		c = t;
	}
	if (b <= c)
	{
		int t = b;
		b = c;
		c = t;
	}
	if (b+c>a)
	{
		if ( b * b + c * c == a * a)
		{
			cout << "Right triangle" << endl;
		}
		if (b*b + c*c > a*a)
		{
			cout << "Acute triangle" << endl;
		}
		if (b*b + c*c < a*a)
		{
			cout << "Obtuse triangle" << endl;
		}
		if (a == b || a == c || b == c)
		{
			cout << "Isosceles triangle" << endl;
		}
		if (a == b && a == c)
		{
			cout << "Equilateral triangle" << endl;
		}
	}
	else
	{
		cout << "Not triangle" << endl;
	}
	return 0;
}

//P1424 小鱼的航程(改进版)
//循环做法
#include<iostream>
using namespace std;

int main()
{
	int x;
	int n;
	cin >> x >> n;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if (x != 6 && x != 7)//如果不是周末就游
			s += 250;
		if (x == 7)
			x = 1;//当现在是周七，就将x赋值为1，从周一开始
		else
			x++;//每一次循环递增x
	}
	cout << s;
	return 0;
}

//P1424 小鱼的航程(改进版)
//非循环版
#include<iostream>
using namespace std;

int main()
{
	int x, n;
	cin >> x >> n;
	int d = n / 7 * 5;//整周的工作日数
	int r = n % 7;//未满整周的剩余天数
	if (r > 0)//如果有剩余天数
	{
		if (r + x == 7 || x == 7)//如果是周末开始肯定只休息一天，如果r+x==7，即最后一天是周六，也休息一天
			r -= 1;
		else if (r + x >= 8)//如果最后一天已经过了周日，休息两天
			r -= 2;
	}
	cout << (d + r) * 250;

	return 0;
}

//电费问题
//这题注意点在于小数精度的取舍，新方法
#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    double b = 0;//双精度小数型
    cin >> a;
    if (a <= 150) {//判断小于等于150
        b = a * 0.4463;
    }
    else if (a >= 151 && a <= 400) {//大于150小于等于400
        b += 150 * 0.4463;
        b += (a - 150) * 0.4663;
    }
    else {//不是前两种一定就是大于400
        b += 150 * 0.4463;
        b += (400 - 150) * 0.4663;
        b += (a - 400) * 0.5663;
    }
    b = int((b * 10) + 0.5) / 10.0;//四舍五入到小数点后一位,恩，这才是要说的
    //如果需要四舍五入到某一位，那么就*多少多少然后再除就好了
    //比如小数点后一位就 * 10 / 10.0
    //后两位 * 100 / 100.0
    //跟一个.0代表是浮点运算恩, 这样就不会除完是int了

    cout << b;
    return 0;
}

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 0;
    double b = 0;//双精度小数型
    cin >> a;
    if (a <= 150) {//判断小于等于150
        b = a * 0.4463;
    }
    else if (a >= 151 && a <= 400) {//大于150小于等于400
        b += 150 * 0.4463;
        b += (a - 150) * 0.4663;
    }
    else {//不是前两种一定就是大于400
        b += 150 * 0.4463;
        b += (400 - 150) * 0.4663;
        b += (a - 400) * 0.5663;
    }
	  //老方法控制精度
    cout << fixed << setprecision(1) << b;
    return 0;
}

//P4414[COCI2006 - 2007#2] ABC
#include<iostream>
using namespace std;

int main()
{

	int arr1[3];
	char arr2[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> arr2[i];
	}

	if (arr1[0] > arr1[1])
	{
		int t = arr1[0];
		arr1[0] = arr1[1];
		arr1[1] = t;
	}
	if (arr1[0] > arr1[2])
	{
		int t = arr1[0];
		arr1[0] = arr1[2];
		arr1[2] = t;
	}
	if (arr1[1] > arr1[2])
	{
		int t = arr1[1];
		arr1[1] = arr1[2];
		arr1[2] = t;
	}


	if (arr2[0]=='A'&&arr2[1]=='B')
	{
		cout << arr1[0] << " " << arr1[1] << " " << arr1[2];
	}
	else if (arr2[0] == 'A' && arr2[1] == 'C')
	{
		cout << arr1[0] << " " << arr1[2] << " " << arr1[1];
	}
	else if (arr2[0] == 'B' && arr2[1] == 'A')
	{
		cout << arr1[1] << " " << arr1[0] << " " << arr1[2];
	}
	else if (arr2[0] == 'B' && arr2[1] == 'C')
	{
		cout << arr1[1] << " " << arr1[2] << " " << arr1[0];
	}
	else if (arr2[0] == 'C' && arr2[1] == 'A')
	{
		cout << arr1[2] << " " << arr1[0] << " " << arr1[1];
	}
	else if (arr2[0] == 'C' && arr2[1] == 'B')
	{
		cout << arr1[2] << " " << arr1[1] << " " << arr1[0];
	}

	return 0;
}

//改进
#include<iostream>
#include<algorithm>
using namespace std;
int a[3];
char A, B, C;
int main()
{
    cin >> a[0] >> a[1] >> a[2];
    cin >> A >> B >> C;
    sort(a, a + 3);//懒懒_(:з」∠)_排序法
    cout << a[A - 'A'] << " " << a[B - 'A'] << " " << a[C - 'A'];//字母是大写，减去‘A’后得到0（A）,1（B）,2（C）
	  //神来之笔，用写入的字母减去A就是偏移量，对应像输出哪个就对应着输出
    return 0;
}

//改进
#include<iostream>
using namespace std;
int a, b, c, i, x, y, z, sum;
char ch;
int main()
{
	cin >> x >> y >> z;
	sum = x + y + z;
	a = min(min(x, y), z);
	c = max(max(x, y), z);
	b = sum - a - c;
	for (i = 1; i <= 3; i++)
	{
		cin >> ch;
		if (ch == 'A') cout << a << ' ';
		if (ch == 'B') cout << b << ' ';
		if (ch == 'C') cout << c << ' ';
	}
	return 0;
}

//P1055 [NOIP2008 普及组] ISBN 号码
// 自己写的一坨屎
#include<iostream>
using namespace std;

int main()
{

	char arr[14];
	for (int i = 0; i < 13; i++)
	{
		cin >> arr[i];
	}

	char sb;
	sb = arr[0] + arr[2] * 2 + arr[3] * 3 + arr[4] * 4 + arr[6] * 6 + arr[7] * 7 + arr[8] * 8 + arr[9] * 9
		+ arr[10] * 10;
	if (sb == 10)
		sb = 'X';
	if (arr[12] == sb)
	{
		cout << "Right";
	}
	else
	{
		arr[12] = sb;
		for (int i = 0; i < 13; i++)
		{
			cout << arr[i];
		}
	}


	return 0;
}

//P1055 [NOIP2008 普及组] ISBN 号码
#include<iostream>
using namespace std;
int main()
{
	char a[14];
	for(int i=0;i<13;i++){
		cin>>a[i];
	 }

	int i, j = 1, t = 0;
	for (i = 0; i < 11; i++) {
		if (a[i] == '-') continue;
		t += (a[i] - '0') * j++;
		//j初始赋值为0
		//if (a[i] != '-')
		//{
		//	j++;
		//	t += j * (a[i] - '0');//-'0'是为了将字符串变成普通数字
		//}
	}

	char c;
	t %= 11;
	if (t == 10)
		c = 'X';
	else
		c = t + '0';//t相当于偏移量

	if (c == a[12])
		cout << "Right";
	else {
		a[12] =c;
		for(int i=0;i<13;i++){
			cout<<a[i];
		}

	}
	return 0;
}

//P1876 开灯
#include<iostream>//并不用cmath
using namespace std;
int main() {
	long long n; cin >> n;
	for (int i = 1; i * i <= n; i++)//i是中间数，我不用sqrt是为了少写个文件头
		cout << i * i << " ";//输出的全是完全平方数
	//只有完全平方数才存在单个因子，有奇数次操作就是开着的
	return 0;
}


//P5719 【深基4.例3】分类平均
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int sum1 = 0;
	int sum2 = 0;
	int count1 = 0;
	int count2 = 0;
	float avg1, avg2;
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			sum1 += i;
			count1++;
		}
		else
		{
			sum2 += i;
			count2++;
		}
	}

	avg1 = 1.0 * sum1 / count1;
	avg2 = 1.0 * sum2 / count2;

	cout << fixed << setprecision(1) << avg1 << " ";
	cout << fixed << setprecision(1) << avg2;

	return 0;
}


//P5720 【深基4.例4】一尺之棰
#include<iostream>
using namespace std;
int main()
{
	int a;
	cin >> a;
	int count = 1;
	//注意从第二天开始，count起始为1
	while (a > 1)
	{
		a = a >> 1;
		count++;
	}
	cout << count;
	return 0;
}

//P5721 【深基4.例6】数字直角三角形
//此题要求输出02这样的带0的前缀，可以利用printf("%02d",i)代表不足两位前面补0，超出就照样输出
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	//关键在于换行，当i==sum时候换行，sum每次+=--count
	int count = n;
	int sum = n;
	for (int i = 1; i <= (1+n)*n/2; i++)
	{
		if (i == sum)
		{
			if (i >= 1 && i <= 9)
			{
				cout << "0" << i;
			}
			else
			{
				cout << i;
			}

			cout << endl;
			sum += --count;
		}
		else
		{
			if (i >= 1 && i <= 9)
			{
				cout << "0" << i;
			}
			else
			{
				cout << i;
			}
		}





	}

	return 0;
}



//50以内阶乘和，要用高精度表示法
//高精度乘法和高精度加法
//其逻辑都是逆序的
#include<iostream>
#include<vector>
using namespace std;


vector<int> add(vector<int>& A, vector<int>& B) 
{
	vector<int>C;
	int t = 0;
	for (int i = 0; i < A.size() || i < B.size(); i++) 
	{
		if (i < A.size()) t += A[i];
		if (i < B.size()) t += B[i];
		C.push_back(t % 10);//如果相加大于10要进位，存放在该位的就是余数
		t /= 10;//表示进位
	}
	if (t) C.push_back(1);//最后一位相加如果进位就把最高位赋值1

	return C;
}

vector<int> mul(vector<int> &A, int b) 
{
	vector<int>C;
	int t = 0;//进位的值，初始值是0，即最开始的进位是0 
	for (int i = 0; i < A.size() || t; i++)
	//在这里循环进行下去的条件是，i还没有循环结束或者进位值t不等于0 
	{
		if (i < A.size()) t += A[i] * b;
		C.push_back(t % 10);
		t /= 10;
	}
	//乘积本来就是倒序的，add需要倒序加，所以根本不用倒转什么的
	return C;
}


int main()
{
	//高精度表示数据，倒序插入
	vector<int>A;//A中存放最后的总和
	
	int n;
	cin >> n;//总共阶乘数
	for (int i = 1; i <= n; i++)
	{
		vector<int>B;//B中存放每一次加上的阶乘
		B.push_back(1);
		for (int j = 1; j <= i; j++)
		{
			B = mul(B, j);
		}
		A = add(A, B);
	}
	for (int i = A.size()-1; i >= 0; i--)
	{
		cout << A[i];
	}

	return 0;
}





