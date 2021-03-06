//文件名：array_sort
//作  者：ccate
//时  间：2018.12
//描  述：三维数组排序
//思  路：先把三维数组放到一维数组，再对一维数组排序，最后把一维数组转化成三维数组。

#include<stdio.h>

int main()
{
	int a[2][3][5] = { { {12,45,9,23,5},{465,334,58,0,4},{223,2,1,543,67} },{ {12,89,6,555,643},{123,523,453,2,3423},{1,567,34,67,40} } };
	int b[30] = {0};  

	int i,j,k;
	int index = 0;
	for (i=0;i<2;i++)  //遍历三维数组a的所有元素赋值给一维数组b
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<5;k++)
			{
				b[index] = a[i][j][k];
				index++;
			}
		}
	}

	for (i=0;i<30;i++)  //使用冒泡排序法对一维数组b进行排序
	{
		for (j=1;j<30-i;j++)
		{
			if (b[j-1]>b[j])
			{
				int tmp = b[j];
				b[j] = b[j-1];
				b[j-1] = tmp;
			}
		}
	}
	index = 0;
	for (i=0;i<2;i++)  //遍历b的所有元素赋值给a
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<5;k++)
			{
				a[i][j][k] = b[index];  //只需把此句换一下即可
				index++;
			}
		}
	}
	for (i=0;i<2;i++)  //将三维数组的每个元素输出
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<5;k++)
			{
				printf("a[%d][%d][%d]=%d\n", i,j,k,a[i][j][k]);
			}
		}
	}
	return 0;
}