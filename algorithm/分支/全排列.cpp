# include <stdio.h>
# include <string.h>

char a[100];
int k = 0;
int count = 0;

void swap(char a[], int i, int k)
{
	char t;
	
	t = a[i];
	a[i] = a[k];
	a[k] = t;
	
	return;
}

void arrangement(char a[], int k, int len)
{
	if (k == len-1)
	{
		puts(a);
		count++;
	}
	
	for (int i=k; i<len; i++)
	{
		swap(a, i, k);
		arrangement(a, k+1, len);
		swap(a, i, k);	// �������֮��һ��Ҫ��ԭ 
	}
	
	return;
}

int main(void)
{
	gets(a);
	int len = strlen(a);	// �ַ����ĳ���
	
	arrangement(a, k, len);	// ȫ���� 
	
	return 0;
}
