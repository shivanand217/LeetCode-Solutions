# Write your MySQL query statement below

/**

SELECT A.NAME AS 'Customers' FROM CUSTOMERS AS A  
LEFT JOIN ORDERS AS B ON A.ID = B.CUSTOMERID
WHERE B.CUSTOMERID IS NULL;

**/

SELECT A.NAME AS 'Customers' FROM CUSTOMERS AS A WHERE 
A.ID NOT IN (SELECT B.CustomerID FROM ORDERS AS B)