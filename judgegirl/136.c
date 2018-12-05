#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char name[20];
    int id;
    char phone[10];
    float grade[4];
    int birth_year;
    int birth_month;
    int birth_day;
} Student;

int main() {
	char input[100], output[100];
	scanf(" %s %s", input, output);
	FILE *fin=fopen(input, "rb");
	FILE *fout=fopen(output, "w");

	Student student;
	fputs("<table border=\"1\">\n", fout);
	fputs("<tbody>\n", fout);
	while(fread(&student, sizeof(Student), 1, fin)) {
		fputs("<tr>\n", fout);
		fprintf(fout, "<td>%s</td>\n", student.name);
		fprintf(fout, "<td>%d</td>\n", student.id);
		fprintf(fout, "<td>%s</td>\n", student.phone);
		fprintf(fout, "<td>%f, %f, %f, %f</td>\n", student.grade[0],student.grade[1],student.grade[2],student.grade[3]);
		fprintf(fout, "<td>%d, %d, %d</td>\n", student.birth_year, student.birth_month, student.birth_day);
		fputs("</tr>\n", fout);
	}
	fputs("</tbody>\n", fout);
	fputs("</table>\n", fout);
	fclose(fin);
	fclose(fout);
	return 0;
}
