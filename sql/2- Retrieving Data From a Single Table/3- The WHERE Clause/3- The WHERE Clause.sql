USE sql_store;

-- Comparison operators: use >, >=, <, <=, =, != (or <>)
-- Select all customers with points greater than 3000
SELECT *
FROM customers
WHERE points > 3000;

-- String values in MySQL should be enclosed in single (more common) or double quotes
-- This query selects customers where the state is 'VA' (case insensitive)
SELECT *
FROM customers
WHERE state = 'VA';

-- Select customers where the state is not 'VA'
SELECT *
FROM customers
WHERE state != 'VA';

-- Date values should be enclosed in quotes
-- Dates are formatted as 'YYYY-MM-DD'
-- Select customers born after January 1, 1990
SELECT *
FROM customers
WHERE birth_date > '1990-01-01';

-- Select orders placed on or after January 1, 2019
SELECT *
FROM orders
WHERE order_date >= '2019-01-01';