

题目描述
查找各个部门当前(to_date='9999-01-01')领导当前薪水详情以及其对应部门编号dept_no
CREATE TABLE `dept_manager` (
`dept_no` char(4) NOT NULL,
`emp_no` int(11) NOT NULL,
`from_date` date NOT NULL,
`to_date` date NOT NULL,
PRIMARY KEY (`emp_no`,`dept_no`));
CREATE TABLE `salaries` (
`emp_no` int(11) NOT NULL,
`salary` int(11) NOT NULL,
`from_date` date NOT NULL,
`to_date` date NOT NULL,
PRIMARY KEY (`emp_no`,`from_date`));


输入描述:
无
输出描述:
emp_no	salary	from_date	to_date	dept_no

10002 72527 2001-08-02 9999-01-01 d001
10004 74057 2001-11-27 9999-01-01 d004
10005 94692 2001-09-09 9999-01-01 d003
10006 43311 2001-08-02 9999-01-01 d002
10010 94409 2001-11-23 9999-01-01 d006




select salaries.emp_no,salaries.salary,salaries.from_date,salaries.to_date,dept_manager.dept_no from salaries inner join dept_manager on dept_manager.emp_no = salaries.emp_no and dept_manager.to_date = '9999-01-01' and salaries.to_date = '9999-01-01';
