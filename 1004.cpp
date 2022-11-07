//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。
//请编程实现在第n年的时候，共有多少头母牛？
// 年份			 1 2 3 4 5 6  7  8  9 10
//拟斐波那契数列 1 2 3 4 6 9 13 19 28 41
//寻找成熟牛第2年份的牛会在第5年成熟 每年的牛量=已成熟牛量+去年牛量
//所以就有fn=f（n-1）+f（n-3）
#include <iostream>
using namespace std;
//时间换空间 空间换时间
//动态规划优化时间复杂度
long long arr[100] = { 0,1,2,3,4 };//只能计算99年的牛数
long long function(int n)
{//没被初始化的整型数组值都为0
	if (arr[n] == 0)
		arr[n] = function(n - 1) + function(n - 3);
	//这样计算过的某年牛数就被储存了 比如求99年的牛数 要计算96年牛数要计算1+1次 
	//95年牛数要计算1+2次 94年要计算1+3次
	else
		return arr[n];
}
int main()
{
	int n = 0;
	while (cin >> n && n)
		cout << function(n)<<endl;
	return 0;
}
/*int function(int n)
{
	if (n <= 4)
		return n;
	else
		return function(n - 1) + function(n - 3);//自己无限递归 function就相当于S
}
int main()
{
	int n = 0;
	while ((cin >> n) && n)
	{
		cout << function(n) << endl;
	}
}*/