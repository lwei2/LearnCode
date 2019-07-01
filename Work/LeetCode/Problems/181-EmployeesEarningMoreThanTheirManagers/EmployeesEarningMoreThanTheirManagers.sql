select emp1.Name Employee from Employee emp1 left outer join Employee emp2
on emp1.ManagerId = emp2.Id where emp1.Salary > emp2.Salary 
and ISNULL(emp1.Salary, 0)!=0
and ISNULL(emp2.Salary, 0)!=0

