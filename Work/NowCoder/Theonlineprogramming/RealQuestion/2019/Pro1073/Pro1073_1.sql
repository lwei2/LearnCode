select d.Name, e.Name, Salary from Employee e, Department d where e.DepartmentId = d.Id and e.Salary < (select max(Salary) from Employee e1 where e1.DepartmentId = e.DepartmentId);
