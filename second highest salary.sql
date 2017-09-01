# Write your MySQL query statement below

# SELECT MAX(SALARY) FROM EMPLOYEE AS 'SecondHighestSalary' WHERE SALARY < (SELECT MAX(SALARY) FROM EMPLOYEE)

/** SCHEMA

  Create table If Not Exists Employee (Id int, Salary int);
Truncate table Employee;
insert into Employee (Id, Salary) values ('1', '100');
insert into Employee (Id, Salary) values ('2', '200');
insert into Employee (Id, Salary) values ('3', '300');
**/

SELECT MAX(SALARY) as 'SecondHighestSalary' FROM EMPLOYEE WHERE SALARY < (SELECT MAX(SALARY) FROM EMPLOYEE);

