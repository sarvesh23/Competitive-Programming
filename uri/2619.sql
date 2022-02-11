SELECT P.name as name , PR.name as name, P.price as price
FROM products as P, providers as PR , categories as C 
WHERE P.id_providers = PR.id and P.id_categories = C.id 
and C.name = 'Super Luxury' and P.price>1000;