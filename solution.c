#include<stdio.h>
#include<math.h>
#include<time.h>
#include<Windows.h>
int ans[11];


int q1(void)
{
	if (ans[1] == 1)
		return 1;
	if (ans[1] == 2)
		return 2;
	if (ans[1] == 3)
		return 3;
	if (ans[1] == 4)
		return 4;

}

int q2(void)
{
	if (ans[5] == 1)
		return 3;
	if (ans[5] == 2)
		return 4;
	if (ans[5] == 3)
		return 1;
	if (ans[5] == 4)
		return 2;
}

int q3(void)
{
	if (ans[3] == ans[6] && ans[6] == ans[2] && ans[2] != ans[4])
		return 4;
	else if (ans[3] == ans[6] && ans[6] == ans[4] && ans[4] != ans[2])
		return 3;
	else if (ans[3] == ans[4] && ans[4] == ans[2] && ans[2] != ans[6])
		return 2;
	else if (ans[4] == ans[6] && ans[6] == ans[2] && ans[2] != ans[3])
		return 1;
}

int q4(void)
{

	if (ans[1] == ans[5])
		return 1;
	else if (ans[2] == ans[7])
		return 2;
	else if (ans[1] == ans[9])
		return 3;
	else if (ans[6] == ans[10])
		return 4;
}

int q5(void)
{

	if (ans[5] == ans[8])
		return 1;
	else if (ans[5] == ans[4])
		return 2;
	else if (ans[5] == ans[9])
		return 3;
	else if (ans[5] == ans[7])
		return 4;
}

int q6(void)
{

	if (ans[8] == ans[2] && ans[2] == ans[4])
		return 1;
	else if (ans[8] == ans[1] && ans[1] == ans[6])
		return 2;
	else if (ans[8] == ans[3] && ans[3] == ans[10])
		return 3;
	else if (ans[8] == ans[5] && ans[5] == ans[9])
		return 4;
}

int q7(void)
{
	int i, numa=0, numb=0, numc=0, numd=0;
	int min_num;
	for (i = 1; i < 11; i++)
	{
		if (ans[i] == 1)
			numa++;
		else if (ans[i] == 2)
			numb++;
		else if (ans[i] == 3)
			numc++;
		else if (ans[i] == 4)
			numd++;
	}
	min_num = min(min(numa, numb), min(numc, numd));
	if (min_num == numa)
		return 3;
	else if (min_num == numb)
		return 2;
	else if (min_num == numc)
		return 1;
	else if (min_num == numd)
		return 4;

}

int q8(void)
{

	if (abs(ans[7] - ans[1]) > 1)
		return 1;
	else if (abs(ans[5] - ans[1]) > 1)
		return 2;
	else if (abs(ans[2] - ans[1]) > 1)
		return 3;
	else if (abs(ans[10] - ans[1])>1)
		return 4;

}

int q9(void)
{

	int i;
	for (i=1;i<11;i++)
		if (((ans[1] == ans[6]) && (!(ans[i] == ans[5]))) || ((!(ans[1] == ans[6])) && ans[i] == ans[5]))
		{
			if (i == 2)
			{
				return 3;
			}
			else if (i == 6)
				return 1;
			else if (i == 9)
				return 4;
			else if (i == 10)
				return 2;

		}

}

int q10(void)
{

	int i, numa = 0, numb = 0, numc = 0, numd = 0;
	int d;
	for (i = 1; i < 11; i++)
	{
		if (ans[i] == 1)
			numa++;
		else if (ans[i] == 2)
			numb++;
		else if (ans[i] == 3)
			numc++;
		else if (ans[i] == 4)
			numd++;
	}
	d = max(max(numa, numb), max(numc, numd)) - min(min(numa, numb), min(numc, numd));
	if (d == 1)
		return 4;
	else if (d == 2)
		return 2;
	else if (d == 3)
		return 1;
	else if (d == 4)
		return 3;
}
int main()
{
	double start,end,time;
	start = clock();
	int i;
	ans[0] = 1;
	for (ans[1] = 1; ans[1] <= 4; ans[1]++)
		for (ans[2] = 1; ans[2] <= 4; ans[2]++)
			for (ans[3] = 1; ans[3] <= 4; ans[3]++)
				for (ans[4] = 1; ans[4] <= 4; ans[4]++)
					for (ans[5] = 1; ans[5] <= 4; ans[5]++)
						for (ans[6] = 1; ans[6] <= 4; ans[6]++)
							for (ans[7] = 1; ans[7] <= 4; ans[7]++)
								for (ans[8] = 1; ans[8] <= 4; ans[8]++)
									for (ans[9] = 1; ans[9] <= 4; ans[9]++)
										for (ans[10]=1;ans[10]<=4;ans[10]++)
									{
											if (q1() == ans[1] && q2() == ans[2] && q3() == ans[3] && q4() == ans[4] && q5() == ans[5] && q6() == ans[6] && q7() == ans[7] && q8() == ans[8] && q9() == ans[9] && q10() == ans[10])
											{
												for (i = 1; i < 11; i++)
													printf("%c", ans[i]+64);
												printf("\n");
												end = clock();
												time = end - start;
												printf("time=%lf\n", time/CLOCKS_PER_SEC);
												system("pause");
												
											}

									}

	
}