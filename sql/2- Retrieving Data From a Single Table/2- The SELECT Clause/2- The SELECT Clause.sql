USE sql_store;

-- Use * to select all columns from the customers table
SELECT *
FROM customers;

-- Select specific columns and calculate a new column 'discount factor'
-- If a column name contains a space, wrap it in quotes
-- Use AS to create an alias for the calculated column
SELECT first_name, last_name, points, (points * 10) + 100 AS 'discount factor'
FROM customers;

-- Select the name and unit_price columns and calculate a new column 'new_price'
SELECT name, unit_price, unit_price * 1.1 AS new_price
FROM products;

-- Select distinct values for the state column from the customers table
SELECT DISTINCT state
FROM customers;