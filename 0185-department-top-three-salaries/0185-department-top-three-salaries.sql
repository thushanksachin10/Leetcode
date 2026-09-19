# Write your MySQL query statement below
select d.name as Department, e.name as Employee, e.salary as Salary
from Employee e
join Department d
on e.departmentId = d.id
join (
    select id, departmentId, salary, 
    dense_rank()over(partition by departmentId order by salary desc)as rnk
    from employee
    
)m
on e.id = m.id
    where rnk<=3;