# Write your MySQL query statement below
SELECT E.name as Employee from Employee E JOIN Employee M ON E.managerId = M.id WHERE E.salary > M.salary;