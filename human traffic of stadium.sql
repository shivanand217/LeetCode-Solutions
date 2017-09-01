# Write your MySQL query statement below

 -- SCHEMA

/**
 
Create table If Not Exists stadium (id int, date DATE NULL, people int);
Truncate table stadium;
insert into stadium (id, date, people) values ('1', '2017-01-01', '10');
insert into stadium (id, date, people) values ('2', '2017-01-02', '109');
insert into stadium (id, date, people) values ('3', '2017-01-03', '150');
insert into stadium (id, date, people) values ('4', '2017-01-04', '99');
insert into stadium (id, date, people) values ('5', '2017-01-05', '145');
insert into stadium (id, date, people) values ('6', '2017-01-06', '1455');
insert into stadium (id, date, people) values ('7', '2017-01-07', '199');
insert into stadium (id, date, people) values ('8', '2017-01-08', '188');

**/

-- QUERY

SELECT A.* FROM STADIUM AS A, STADIUM AS B, STADIUM AS C

WHERE ( (A.ID+1=B.ID AND A.ID+2=C.ID) OR (A.ID-1=B.ID AND A.ID+1=C.ID) OR (A.ID-2=C.ID AND A.ID-1=B.ID) )
      
      AND A.PEOPLE>=100 AND B.PEOPLE>=100 AND C.PEOPLE>=100 
      
      GROUP BY A.ID;
