#include <stdio.h>
struct mark
{
    int sub1;
    int sub2;
    int sub3;
};
struct student
{
    char name[20];
    int roll;
    struct mark sub;
} stu[5];
int main()
{
    int i;
    float tm = 300;
    int j;
    float p;
    for (i = 0; i < 2; i++)
    {
        printf("enter the name and roll no :\n");
        scanf("%s%d", stu[i].name, &stu[i].roll);
        printf("Enter the marks of three subject\n ");
        scanf("%d%d%d", &stu[i].sub.sub1, &stu[i].sub.sub2, &stu[i].sub.sub3);
    }
    for (i = 0; i < 2; i++)
    {
        int om = 0;
        om = om + stu[i].sub.sub1 + stu[i].sub.sub2 + stu[i].sub.sub3;
        p = (om / tm) * 100;
        printf("The total marks obtained by student %d is= %d\n", i + 1, om);
        printf("percentage =%.2f\n", p);
    }
    return 7;
}
