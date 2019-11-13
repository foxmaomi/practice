#define _CRT_SECURE_NO_WARNINGS


int TwoInsertSort()
{

	int final = 0;
	int first = 0;
	const int iLenght = iCount - 1;//right

	int iTempBuff[iLenght] = { 0 };

	iTempBuff[0] = iRawBuff[1];
	for (int i = 2; i <= iLenght; i++)
	{
		if (iRawBuff[i] > iTempBuff[final])
		{
			//大于当前最大值，后插
			final++;
			iTempBuff[final] = iRawBuff[i];

		}
		if (iRawBuff[i]< iTempBuff[first])
		{
			//小于当前最小值,前插
			first = (first - 1 + iLenght) % iLenght;
			iTempBuff[first] = iRawBuff[i];

		}
		if (iRawBuff[i] < iTempBuff[final] && iRawBuff[i] > iTempBuff[first])
		{
			//大于当前最小值，小于当前最大值，中间插
			int j = final++;
			while (iRawBuff[i] < iTempBuff[j])
			{
				iTempBuff[(j + 1) % iLenght] = iTempBuff[j];
				j = (j - 1 + iLenght) % iLenght;
			}
			iTempBuff[j + 1] = iRawBuff[i];

		}
		printf("第%d趟：\n", i - 1);
		for (int k = 0; k < iLenght; k++)
		{
			std::cout << iTempBuff[k] << "\t";
		}
		std::cout << std::endl;
	}
	//导入输入到原始数组中
	for (int k = 0; k < iLenght; k++)
	{
		iRawBuff[k + 1] = iTempBuff[(first++) % iLenght];
	}
	return 0;
}
————————————————
版权声明：本文为CSDN博主「onedreamer」的原创文章，遵循 CC 4.0 BY - SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https ://blog.csdn.net/onedreamer/article/details/6745006




int ChangeTwoInsertSort()
{
	//ehance the two insert sort
	int final = 0;
	int first = 0;
	const int iLenght = iCount - 1;

	int iTempBuff[iLenght] = { 0 };
	iTempBuff[0] = iRawBuff[1];
	//先和temp[0]比较从而以其为分界线
	for (int i = 2; i <= iLenght; i++)
	{
		if (iRawBuff[i] >= iTempBuff[0])
		{
			//that means ,输入右半部
			if (iRawBuff[i] >= iTempBuff[final])
			{
				//大于当前最大值
				final++;
				iTempBuff[final] = iRawBuff[i];
			}
			else
			{
				//小于当前最大值，但大于分界线值，左移，但不超过零
				int j = final++;
				while ((iTempBuff[j] >= iRawBuff[i]) && (j >= 0))
				{
					iTempBuff[j + 1] = iTempBuff[j];
					j--;

				}
				iTempBuff[j + 1] = iRawBuff[i];
			}

		}
		if (iRawBuff[i] < iTempBuff[0])
		{
			//that means 输入左半部
			if (iRawBuff[i] >= iTempBuff[first])
			{
				//
				int j = first--;

				while (j <= iLenght&&iTempBuff[j] <= iRawBuff[i])
				{
					iTempBuff[j - 1] = iTempBuff[j];
					j++;
				}
				iTempBuff[j - 1] = iRawBuff[i];
			}
			if (iRawBuff[i] < iTempBuff[first])
			{
				//小于当前最小
				first = (first - 1 + iLenght) % iLenght;
				iTempBuff[first] = iRawBuff[i];
			}
		}
		printf("第%d趟：\n", i);
		for (int k = 0; k < iLenght; k++)
		{
			std::cout << iTempBuff[k] << "\t";
		}
		std::cout << "\n";

	}
	//数据导入原始数组
	for (int i = 0; i< iLenght; i++)
	{
		iRawBuff[i + 1] = iTempBuff[(first++) % iLenght];
	}

	return 0;
}
