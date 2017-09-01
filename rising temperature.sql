# Write your MySQL query statement below

-- SCHEMA
/**

Create table If Not Exists Weather (Id int, Date date, Temperature int);
Truncate table Weather;
insert into Weather (Id, Date, Temperature) values ('1', '2015-01-01', '10');
insert into Weather (Id, Date, Temperature) values ('2', '2015-01-02', '25');
insert into Weather (Id, Date, Temperature) values ('3', '2015-01-03', '20');
insert into Weather (Id, Date, Temperature) values ('4', '2015-01-04', '30');

**/

-- query

SELECT W1.ID 
FROM WEATHER W1, WEATHER W2
WHERE W1.TEMPERATURE > W2.TEMPERATURE AND
TO_DAYS(W1.DATE) - TO_DAYS(W2.DATE) = 1;
