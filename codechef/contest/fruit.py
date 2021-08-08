class FruitOrder:
    def __init__(self, itemid, fname,ftype, unitqtyorder,priceperunit):
        self.itemid = itemid
        self.fname = fname.tolower()
        self.ftype = ftype.tolower()
        self.unitqtyorder = unitqtyorder
        self.priceperunit = priceperunit

    def TotalPrice(self,unitqtyorder,priceperunit):
        self.TotalPrice = self.unitqtyorder * self.priceperunit

class FruitStore:
    def __init__(self,flist):
        self.fList = fList

    def gettotalpriceAvailable(self,itemid,fname,ftype):
        sum = 0
        for i in self.fList:
            if i.itemid==itemid and i.fname==fname and i.ftype==ftype:
                 sum += i.unitqtyprice * i.priceperunit
        if sum==0:
            return None
        else:
            return sum    
        

    def findMin(self):
        minlist = []
        minn = self.fList[0].TotalPrice
        for i in range(1,len(self.fList)):
            if(self.fList[i].TotalPrice < minn):
                minfname = self.fList[i].fname
                minn = self.fList[i].TotalPrice
                minftype = self.fList[i].ftype
        minlist = []
        for fruit in self.bloodList:
            if fruit.TotalPrice == minn:
                minlist.append(fruit.fname)
        return minlist

if __name__ == '__main__':
    fList = []
    