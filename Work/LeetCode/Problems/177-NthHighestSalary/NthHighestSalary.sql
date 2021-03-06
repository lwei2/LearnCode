create function getNthHighestSalary(N INT) RETURNS INT
BEGIN
	SET N=N-1;
	RETURN(
		# Write your MySQL query statement below.
		select ifnull(
			(
				select distinct(Salary) from Employee order by Salary desc limit 1 offset N
			),NULL
		)
	);
END
