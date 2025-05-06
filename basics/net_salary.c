// Calculate net salary

#include <stdio.h>

void main()
{
   int salary, hra, da, gross, pf, net_salary;

      printf("Enter salary :");
      scanf("%d", &salary);

      hra = salary * 30 / 100;
      da = salary * 20 / 100;
      pf = salary * 5 / 100;
      net_salary = salary + hra + da  - pf;

      printf("Salary      : %6d\n", salary);
      printf("+ HRA       : %6d\n", hra);
      printf("+ DA        : %6d\n", da);
      printf("- PF        : %6d\n", pf);
      printf("Net Salary  : %6d\n", net_salary);

}
