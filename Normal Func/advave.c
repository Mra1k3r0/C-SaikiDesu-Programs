#include <stdio.h>

int main()
{
	int tot1, tot2, tot3, tot4, tot5, sco1, sco2, sco3, sco4, sco5;
	float s1, s2, s3, s4, s5, g1, ra1, ra2, ra3, ra4, ra5, ave;
	printf("Please input five pairs of integer values representing the total number of points and score of a student quizzes.\n");
	printf("Input Quiz 1: ");
	scanf("%d %d", &tot1, &sco1);
	printf("Input Quiz 2: ");
	scanf("%d %d", &tot2, &sco2);
	printf("Input Quiz 3: ");
	scanf("%d %d", &tot3, &sco3);
	printf("Input Quiz 4: ");
	scanf("%d %d", &tot4, &sco4);
	printf("Input Quiz 5: ");
	scanf("%d %d", &tot5, &sco5);

	s1 = sco1;
	ra1 = (s1 / tot1) * 100;
	s2 = sco2;
	ra2 = (s2 / tot2) * 100;
	s3 = sco3;
	ra3 = (s3 / tot3) * 100;
	s4 = sco4;
	ra4 = (s4 / tot4) * 100;
	s5 = sco5;
	ra5 = (s5 / tot5) * 100;

	printf("\n--------------------------------------------------------");
	printf("\n|QUIZ# |\tSCORE    |\tTOTAL    |\t RATE  |\n");
	printf("--------------------------------------------------------\n");
	printf("|1     |\t %d      |\t %d      |\t%0.2f%% |\n", sco1, tot1, ra1);
	printf("|2     |\t %d       |\t %d      |\t%0.2f%% |\n", sco2, tot2, ra2);
	printf("|3     |\t %d      |\t %d      |\t%0.2f%% |\n", sco3, tot3, ra3);
	printf("|4     |\t %d      |\t %d     |\t%0.2f%% |\n", sco4, tot4, ra4);
	printf("|5     |\t %d      |\t %d      |\t%0.2f%% |\n", sco5, tot5, ra5);
	printf("--------------------------------------------------------");

	ave = (ra1 + ra2 + ra3 + ra4 + ra5) / 5;
	printf("\n\nRATE AVERAGE:  %0.2f%%", ave);
	return 0;
}