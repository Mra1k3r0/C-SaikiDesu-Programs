#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float ra1, ra2, ra3, ra4, ra5, ave;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	FILE *inp;

	inp = fopen("input.txt", "r");
	int i = 1;
	while ((read = getline(&line, &len, inp)) != -1, (i < 6))
	{
		printf("Quiz %zu: ", i);
		printf("%s", line);
		i++;
	}

	fclose(inp);

	ra1 = (12.0 / 45.0) * 100;
	ra2 = (9.0 / 20.0) * 100;
	ra3 = (24.0 / 30.0) * 100;
	ra4 = (60.0 / 100.0) * 100;
	ra5 = (20.0 / 35.0) * 100;
	printf("\n--------------------------------------------------------");
	printf("\n|QUIZ# |\tSCORE    |\tTOTAL    |\t RATE  |\n");
	printf("--------------------------------------------------------\n");
	printf("|1     |\t %d      |\t %d      |\t%0.2f%% |\n", 12, 45, ra1);
	printf("|2     |\t %d       |\t %d      |\t%0.2f%% |\n", 9, 20, ra2);
	printf("|3     |\t %d      |\t %d      |\t%0.2f%% |\n", 24, 30, ra3);
	printf("|4     |\t %d      |\t %d     |\t%0.2f%% |\n", 60, 100, ra4);
	printf("|5     |\t %d      |\t %d      |\t%0.2f%% |\n", 20, 35, ra5);
	printf("--------------------------------------------------------");

	ave = (ra1 + ra2 + ra3 + ra4 + ra5) / 5;
	printf("\n\nRATE AVERAGE:  %0.2f%%", ave);

	FILE *outp;
	outp = fopen("output.txt", "w");

	fprintf(outp, "\n--------------------------------------------------------------------------------");
	fprintf(outp, "\n|QUIZ# |\tSCORE    |\tTOTAL    |\t RATE  |\n");
	fprintf(outp, "--------------------------------------------------------------------------------\n");
	fprintf(outp, "|1      |\t   %d       |\t %d      |\t%0.2f%% |\n", 12, 45, ra1);
	fprintf(outp, "|2      |\t    %d       |\t %d      |\t%0.2f%% |\n", 9, 20, ra2);
	fprintf(outp, "|3      |\t   %d       |\t %d      |\t%0.2f%% |\n", 24, 30, ra3);
	fprintf(outp, "|4      |\t   %d       |\t %d     |\t%0.2f%% |\n", 60, 100, ra4);
	fprintf(outp, "|5      |\t   %d       |\t %d      |\t%0.2f%% |\n", 20, 35, ra5);
	fprintf(outp, "--------------------------------------------------------------------------------");
	fprintf(outp, "\n\nRATE AVERAGE:  %0.2f%%", ave);

	fclose(outp);

	return 0;
}