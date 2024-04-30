class Relation :
    def __init__(self, arr:list) :
        self.arr = arr
    
    def isreflexive(self) :
        flag = False
        for i in range(len(self.arr)) :
            if self.arr[i][1] == 1 : 
                flag = True
            else :
                return False
        return flag
    
    def issymmetric(self) : 
        flag = False
        for i in range(len(self.arr)) :
            for j in range(len(self.arr[i])) :
                if self.arr[i][j] == 1 : 
                    if self.arr[j][i] == 1 :
                        flag = True
                    else : 
                        return False
        return flag
    
    
    def istransitive(self) :
        flag = False
        pass
        # for i in range(len(self.arr)) :
        #     for j in range(len(self.arr)) :
        #         if self.arr[i][j] == 1 : 
        #             for k in range(len(self.arr)) :
        #                 if self.arr[j][k] == 1 :
        #                     if self.arr[i][k] == 1 :
        #                         return True
        #                     else : 
        #                         return False




s = [[1, 0, 0], [0, 0, 0], [0, 0, 0]]
ins = Relation(s)
print(ins.isreflexive())
print(ins.issymmetric())