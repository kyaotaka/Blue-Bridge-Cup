//��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ��
//����ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
// ���			 1 2 3 4 5 6  7  8  9 10
//��쳲��������� 1 2 3 4 6 9 13 19 28 41
//Ѱ�ҳ���ţ��2��ݵ�ţ���ڵ�5����� ÿ���ţ��=�ѳ���ţ��+ȥ��ţ��
//���Ծ���fn=f��n-1��+f��n-3��
#include <iostream>
using namespace std;
//ʱ�任�ռ� �ռ任ʱ��
//��̬�滮�Ż�ʱ�临�Ӷ�
long long arr[100] = { 0,1,2,3,4 };//ֻ�ܼ���99���ţ��
long long function(int n)
{//û����ʼ������������ֵ��Ϊ0
	if (arr[n] == 0)
		arr[n] = function(n - 1) + function(n - 3);
	//�����������ĳ��ţ���ͱ������� ������99���ţ�� Ҫ����96��ţ��Ҫ����1+1�� 
	//95��ţ��Ҫ����1+2�� 94��Ҫ����1+3��
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
		return function(n - 1) + function(n - 3);//�Լ����޵ݹ� function���൱��S
}
int main()
{
	int n = 0;
	while ((cin >> n) && n)
	{
		cout << function(n) << endl;
	}
}*/