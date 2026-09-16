# Write your MySQL query statement below
SELECT p.firstName as firstName, p.lastName as lastName , a.city as city, a.state as state 
from Person p
LEFT JOIN address a on p.personId = a.personId;