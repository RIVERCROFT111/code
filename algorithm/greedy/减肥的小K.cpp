# include <stdio.h>

int a[100];	// �洢ÿ��שͷ�ĸ��� 
void sort(int);
void greedy(int);

int main(void)
{
	int n;	// �洢שͷ�Ķ���
	int i;
	
	scanf("%d", &n) ;
	
	for (i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	sort(n);
	greedy(n);
	
	return 0;
}

void sort(int n)
{
	int i, j, min_index;
	int t;
	
	for (i=0; i<n-1; i++)
	{
		min_index = i;
		for (j=i+1; j<n; j++)
		{
			if (a[j] < a[min_index])
			{
				min_index = j;
			}
		}
		
		if (min_index != i)
		{
			t = a[min_index];
			a[min_index] = a[i];
			a[i] = t;
		}
	}
	
	return;
}

void greedy(int n)
{
	int cost = 0;
	int i, temp;
	int j;
	
	for (i=0; i<n-1; i++)
	{
		temp = a[i] + a[i+1];
		cost += temp;
		
		// �ҵ����ʵ�λ�ã���temp���ȥ 
		for (j=i+2; j<n && temp>a[j]; j++)
		{
			a[j-1] = a[j];
		}
		a[j-1] = temp;
	}
	printf("�ܹ�����%d\n", cost);
	
	return;
}
