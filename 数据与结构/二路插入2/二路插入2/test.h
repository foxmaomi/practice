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
			//���ڵ�ǰ���ֵ�����
			final++;
			iTempBuff[final] = iRawBuff[i];

		}
		if (iRawBuff[i]< iTempBuff[first])
		{
			//С�ڵ�ǰ��Сֵ,ǰ��
			first = (first - 1 + iLenght) % iLenght;
			iTempBuff[first] = iRawBuff[i];

		}
		if (iRawBuff[i] < iTempBuff[final] && iRawBuff[i] > iTempBuff[first])
		{
			//���ڵ�ǰ��Сֵ��С�ڵ�ǰ���ֵ���м��
			int j = final++;
			while (iRawBuff[i] < iTempBuff[j])
			{
				iTempBuff[(j + 1) % iLenght] = iTempBuff[j];
				j = (j - 1 + iLenght) % iLenght;
			}
			iTempBuff[j + 1] = iRawBuff[i];

		}
		printf("��%d�ˣ�\n", i - 1);
		for (int k = 0; k < iLenght; k++)
		{
			std::cout << iTempBuff[k] << "\t";
		}
		std::cout << std::endl;
	}
	//�������뵽ԭʼ������
	for (int k = 0; k < iLenght; k++)
	{
		iRawBuff[k + 1] = iTempBuff[(first++) % iLenght];
	}
	return 0;
}
��������������������������������
��Ȩ����������ΪCSDN������onedreamer����ԭ�����£���ѭ CC 4.0 BY - SA ��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
ԭ�����ӣ�https ://blog.csdn.net/onedreamer/article/details/6745006




int ChangeTwoInsertSort()
{
	//ehance the two insert sort
	int final = 0;
	int first = 0;
	const int iLenght = iCount - 1;

	int iTempBuff[iLenght] = { 0 };
	iTempBuff[0] = iRawBuff[1];
	//�Ⱥ�temp[0]�ȽϴӶ�����Ϊ�ֽ���
	for (int i = 2; i <= iLenght; i++)
	{
		if (iRawBuff[i] >= iTempBuff[0])
		{
			//that means ,�����Ұ벿
			if (iRawBuff[i] >= iTempBuff[final])
			{
				//���ڵ�ǰ���ֵ
				final++;
				iTempBuff[final] = iRawBuff[i];
			}
			else
			{
				//С�ڵ�ǰ���ֵ�������ڷֽ���ֵ�����ƣ�����������
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
			//that means ������벿
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
				//С�ڵ�ǰ��С
				first = (first - 1 + iLenght) % iLenght;
				iTempBuff[first] = iRawBuff[i];
			}
		}
		printf("��%d�ˣ�\n", i);
		for (int k = 0; k < iLenght; k++)
		{
			std::cout << iTempBuff[k] << "\t";
		}
		std::cout << "\n";

	}
	//���ݵ���ԭʼ����
	for (int i = 0; i< iLenght; i++)
	{
		iRawBuff[i + 1] = iTempBuff[(first++) % iLenght];
	}

	return 0;
}
