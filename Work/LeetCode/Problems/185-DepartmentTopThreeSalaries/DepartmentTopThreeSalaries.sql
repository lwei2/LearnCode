select Department.Name as "Department", Employee.Name as "Employee", Salary as "Salary"
from employee
join department
on Employee.DepartmentId = Department.Id
where (DepartmentId, Salary) in
(select A.DepartmentId, Salary from (select DepartmentId, Salary from Employee group by 1,2) A
where (select count(*) from ((select DepartmentId, Salary from Employee group by 1,2)) B where A.DepartmentId = B.DepartmentId and A.Salary <= B.Salary) <= 3)
order by 1,3 desc,2;
