# include <stdio.h>

int jump(int n)
{
	if (n<=2)
	{
		return n;
	}
	
	int dp[n+1];	// �洢ÿһ�����ܵĽ��
	
	// ������ʼֵ
	dp[0]  = 0;
	dp[1] = 1;
	dp[2] = 2;
	
	for (int i=3; i<=n; i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	return dp[n];
}

int main(void)
{
	int n;
	int ret;
	
	scanf("%d", &n);
	
	ret = jump(n);
	printf("%d��̨����%d������~\n", n, ret);
	
	return 0;
}
