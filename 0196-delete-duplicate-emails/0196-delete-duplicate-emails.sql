# Write your MySQL query statement below
DELETE P FROM Person P
JOIN Person P2
WHERE P.email=P2.email AND P.id>P2.id;