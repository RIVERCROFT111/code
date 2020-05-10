# include <stdio.h>

int a[100] = {0};

int greedy(int);

int main(void)
{
	int n;
	int i;
	int step;
	
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	{
		scanf("%d", a+i);
	}
	
	step = greedy(n);
	
	printf("��С����%d\n", step);
	
	return 0;
}

int greedy(int n)
{
	if (n<2)
	{
		return 0;
	}
	
	int cur_index, max, cnt;
	int j;
	
	cur_index = 0;
	cnt = 1;
	
	while (1)
	{
		if (cur_index+a[cur_index] >= n-1)
		{
			return cnt;
		}
		
		max = cur_index+1;	// ������Զ����������һ��
		
		// Ѱ��·���п���������Զ�ľ��� 
		for (j=cur_index+2; j<=cur_index+a[cur_index]; j++) 
		{
			if (a[j]+j > a[max]+max)
			{
				max = j;
			}
		}
		cur_index = max;
		cnt++;
	}
	
	return 0;
}
