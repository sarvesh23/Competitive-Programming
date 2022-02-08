a = input()
b = input()
c = input()

if a=='vertebrado':
    if b=='ave':
        if c=='carnivoro':
            t = 'aguia'
        else:
            t = 'pomba'
    else:
        if c=='onivoro':
            t='homem'
        else:
            t='vaca'
else:
    if b=='inseto':
        if c=='hematofago':
            t='pulga'
        else:
            t='lagarta'
    else:
        if c=='hematofago':
            t='sanguessuga'
        else:
            t='minhoca'
print(t)