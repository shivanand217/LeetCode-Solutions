# Write your MySQL query statement below

-- SCHEMA
/**

Create table If Not Exists Customers (Id int, Name varchar(255));
Create table If Not Exists Orders (Id int, CustomerId int);
Truncate table Customers;
insert into Customers (Id, Name) values ('1', 'Joe');
insert into Customers (Id, Name) values ('2', 'Henry');
insert into Customers (Id, Name) values ('3', 'Sam');
insert into Customers (Id, Name) values ('4', 'Max');
Truncate table Orders;
insert into Orders (Id, CustomerId) values ('1', '3');
insert into Orders (Id, CustomerId) values ('2', '1');

**/

-- QUERY

SELECT A.NAME AS 'Customers' FROM CUSTOMERS AS A WHERE 
A.ID NOT IN (SELECT B.CustomerID FROM ORDERS AS B)
