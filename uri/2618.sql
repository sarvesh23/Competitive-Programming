SELECT P.name AS name, PR.name AS name , C.name AS name
FROM products as P , providers as PR ,categories as C
WHERE P.id_providers=PR.id and P.id_categories = C.id
and C.name='Imported' and PR.name ='Sansul SA';