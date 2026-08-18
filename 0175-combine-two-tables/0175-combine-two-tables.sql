# Write your MySQL query statement below
SELECT P.firstName AS firstName,P.lastName AS lastName,A.city AS city,A.state AS state
FROM Person P
LEFT JOIN Address A ON A.personId=P.personId