select max(Salary) as SecondHighestSalary from Employee where Salay < (select max(Salary) from Employee);
