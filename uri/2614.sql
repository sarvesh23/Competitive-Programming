SELECT c.name , r.rentals_date
FROM customers as c, rentals as r 
WHERE c.id=r.id_customers
and TO_CHAR(r.rentals_date,'YYYY-MM-DD') LIKE '2016-09%';