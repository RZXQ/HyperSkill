USE sql_store;

-- Use the BETWEEN operator to filter results within a range (inclusive):
-- This query selects customers with points between 1000 and 3000
SELECT *
FROM customers
WHERE points BETWEEN 1000 AND 3000;

-- Another example of using the BETWEEN operator:
-- This query selects customers born between January 1, 1990, and January 1, 2000
SELECT *
FROM customers
WHERE birth_date BETWEEN '1990-01-01' AND '2000-01-01';