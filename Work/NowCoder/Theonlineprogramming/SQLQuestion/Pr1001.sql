
题目描述
查找入职员工时间排名倒数第三的员工所有信息
CREATE TABLE `employees` (
`emp_no` int(11) NOT NULL,
`birth_date` date NOT NULL,
`first_name` varchar(14) NOT NULL,
`last_name` varchar(16) NOT NULL,
`gender` char(1) NOT NULL,
`hire_date` date NOT NULL,
PRIMARY KEY (`emp_no`));

输入描述:
无
输出描述:
emp_no	birth_date	first_name	last_name	gender	hire_date

10005  1955-01-21  Kyoichi   Maliniak  M  1989-09-12


select * from employees order by hire_date desc limit 2,1
