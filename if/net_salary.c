// Calculate net salary

#include <stdio.h>

void main()
{
   int salary, hra, da, net_salary;

      printf("Enter salary :");
      scanf("%d", &salary);

      if(salary > 100000)
      {
        hra = salary * 25 / 100;
        da = salary * 15 / 100;
      }
      else
      {
        hra = salary * 20 / 100;
        da = salary * 18 / 100;
      }

      net_salary = salary + hra + da;

      printf("Salary    : %6d\n", salary);
      printf("HRA       : %6d\n", hra);
      printf("DA        : %6d\n", da);
      printf("Net Salary: %6d\n", net_salary);

}
