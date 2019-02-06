
查找所有员工的last_name和first_name以及对应部门编号dept_no，也包括展示没有分配具体部门的员工
CREATE TABLE `dept_emp` (
`emp_no` int(11) NOT NULL,
`dept_no` char(4) NOT NULL,
`from_date` date NOT NULL,
`to_date` date NOT NULL,
PRIMARY KEY (`emp_no`,`dept_no`));
CREATE TABLE `employees` (
`emp_no` int(11) NOT NULL,
`birth_date` date NOT NULL,
`first_name` varchar(14) NOT NULL,
`last_name` varchar(16) NOT NULL,
`gender` char(1) NOT NULL,
`hire_date` date NOT NULL,
PRIMARY KEY (`emp_no`));


输出描述:
last_name	first_name	dept_no

Facello     Georgi    d001 
Sluis Mary NULL(在sqlite中此处为空,MySQL为NULL)


select a.last_name,a.first_name, b.dept_no
from employees a left join dept_emp b on a.emp_no = b.emp_no;




