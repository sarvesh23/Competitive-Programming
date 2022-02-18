class Team:
    def __init__(self,o,v,i,n):
        self.owner = o
        self.value = v
        self.id = i
        self.name = n

class League:
    def __init__(self,leaguename,list):
        self.leaguename = leaguename
        self.teamlist = list
    
    def findminimumTeamById(self):
        min_obj=min(self.teamlist,key=lambda x:x.id)

    def sortTeamById(self):
        s=[]
        s=sorted(self.teamlist,key=lambda x:x.id)
        s1=[]
        for i in s:
            s1.append(i.id)
            if len(s1) ==0:
                return None
            else:
                return s1

if __name__ == '__main__':
    teamlist=[]
    limit=int(input())
    for j in range(limit):
        owner=input()
        value=float(input())
        ID = int(input())
        name=input()
        teamlist.append("leaguename",owner,value,ID,name)
    obj = League("leaguename",teamlist)
    r1=obj.findminimumTeamById()
    if(r1!=None):
        print(r1.owner)
        print(r1.value)
        print(r1.ID)
        print(r1.name)
    else:
        print("No Data Find")
    r2=obj.sortTeamById()
    for i in r2:
        print(i)

