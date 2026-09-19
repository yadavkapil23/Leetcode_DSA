# Write your MySQL query statement below
SELECT C.name as Customers from Customers C LEFT JOIN ORDERS O
on C.id = O.customerId where O.customerId is NULL;