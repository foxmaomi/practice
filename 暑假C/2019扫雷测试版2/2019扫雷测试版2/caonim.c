#define _CRT_SECURE_NO_WARNINGS


void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* pwin)//չ������
{
	if ((x >= 1) && (y >= 1) && (x <= ROW) && (y <= COL))
	{
		if (GetMineCount(mine, x, y) == 0)  //��Χû����
		{
			show[x][y] = ' ';    //��Ϊ�հ�
			(*pwin)++;
			if (show[x - 1][y - 1] == '*')
			{
				Expand(mine, show, x - 1, y - 1, pwin);
			}
			if (show[x - 1][y] == '*')
			{
				Expand(mine, show, x - 1, y, pwin);
			}
			if (show[x - 1][y + 1] == '*')
			{
				Expand(mine, show, x - 1, y + 1, pwin);
			}
			if (show[x][y + 1] == '*')
			{
				Expand(mine, show, x, y + 1, pwin);
			}
			if (show[x + 1][y + 1] == '*')
			{
				Expand(mine, show, x + 1, y + 1, pwin);
			}
			if (show[x + 1][y] == '*')
			{
				Expand(mine, show, x + 1, y, pwin);
			}
			if (show[x + 1][y - 1] == '*')
			{
				Expand(mine, show, x + 1, y - 1, pwin);
			}
			if (show[x][y - 1] == '*')
			{
				Expand(mine, show, x, y - 1, pwin);
			}
		}
	}
}
