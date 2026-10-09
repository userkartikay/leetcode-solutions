# Write your MySQL query statement below
SELECT d.name AS Department,
       e.name AS Employee,
       e.salary AS Salary
FROM employee e
JOIN department d 
  ON e.departmentId = d.id
WHERE e.salary = (
    SELECT MAX(e2.salary)
    FROM employee e2
    WHERE e2.departmentId = e.departmentId
);
