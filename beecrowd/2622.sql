SELECT C.name as name
FROM customers as C , legal_person as l 
WHERE C.id = l.id_customers ;