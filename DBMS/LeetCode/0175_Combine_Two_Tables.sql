/*
Problem: Combine Two Tables
Problem Number: 175
Platform: LeetCode
Difficulty: Easy
Topic: DBMS, SQL, LEFT JOIN

Approach:
1. Select firstName and lastName from the Person table.
2. Select city and state from the Address table.
3. Use LEFT JOIN to preserve every record from Person.
4. Match records using personId.
5. If a person has no matching address, city and state return NULL.

SQL Query:
*/

SELECT
    p.firstName,
    p.lastName,
    a.city,
    a.state
FROM Person p
LEFT JOIN Address a
    ON p.personId = a.personId;

/*
Key Concept:
LEFT JOIN returns all records from the left table (Person),
along with matching records from the right table (Address).

If no matching record exists, right-table columns contain NULL.
*/
