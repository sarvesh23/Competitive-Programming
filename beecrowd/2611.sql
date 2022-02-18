SELECT m.id as id,m.name as name
FROM movies as m , genres as g
WHERE m.id_genres=g.id and g.description='Action';