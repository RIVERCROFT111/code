/*
�������ֵ�ȫ����
�������˿��ƷŽ�������
�������������������˿��� 
*/

# include <stdio.h>

int a[20];	// ���ӣ�����˿���
int book[20];	// ��¼�ĸ��������� 
int n;

void dfs(int);

int main(void)
{
	int step = 1;
		
	scanf("%d", &n);	// ����˿��Ƶĸ�������1��ʼ 
	
	dfs(step);	// �տ�ʼ��1�ź���ǰ 
	
	getchar();	getchar();
	
	return 0;
}

void dfs(int step)
{
	if (step == n+1)
	{
		for (int i=1; i<=n; i++)
		{
			printf("%d  ", a[i]);
		}
		printf("\n");
		
		return;
	}
	
	for (int i=1; i<=n; i++)
	{
		// �ж�i���˿����Ƿ������� 
		if (book[i] == 0)
		{
			a[step] = i;
			book[i] = 1;
			dfs(step+1);
			book[i] = 0;	// �ջظղų��Ե��˿��� 
		}
	}
	
	return;
}
