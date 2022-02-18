SELECT p.name as name , c.name as name 
FROM products as p , categories as c 
WHERE p.amount>100 and p.id_categories = c.id 
and (c.id IN (1,2,3,4,6,9))
ORDER BY c.id;