# include <stdio.h>

int walk(int m, int n)
{
	if (m<=0 || n<=0)
	{
		return 0;
	}
	
	int dp[m][n];
	int i, j;
	
	// ��ʼ�������һ�� 
	for (i=0; i<m; i++)
	{
		dp[i][0] = 1;
	}
	
	//  ��ʼ�����ϱ�һ�� 
	for (j=0; j<n; j++)
	{
		dp[0][j] = 1;
	}
	
	for (i=1; i<m; i++)
	{
		for (j=1; j<n; j++)
		{
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}
	
	return dp[m-1][n-1];
	
}

int main(void)
{
	int m, n;	// m,n�ֱ����������л����� 
	int ret;
	
	scanf("%d %d", &m, &n);
	
	ret = walk(m, n);
	
	printf("�ܹ���%d���߷�!\n", ret);
	
	return 0;
}
