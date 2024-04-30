class Set : 
    def __init__(self, arr:set) :
        self.arr = list(arr)
        self.pl = self.powerset()

    def is_member(self, num:int, set2 = None) :
        if set2 == None :
            set2 = self.arr
        for i in set2 :
            if num == i : 
                return True
        return False

    def powerset(self) : 
        lis = []
        lis.append([])
        for e in self.arr:
            lis.extend([subset + [e] for subset in lis])
        return lis
    
    def subset(self, set2:set) :
        for i in self.pl : 
            if i == list(set2) :
                return "It is a subset!"
        return "It is not a subset!"
    
    def union(self, set2:set) :
        un = list(self.arr) + list(set2)
        if len(un) == 0 :
            return {}
        return set(un)
    
    def intersect(self, set2:set) : 
        inter = set()
        for i in self.arr : 
            if self.is_member(i, set2) : 
                inter.add(i)
        if len(inter) == 0 :
            return {}
        return inter
    
    def complement(self) : 
        u = set()
        n = int(input("How many elements your universal set has : "))
        for i in range(n) :
            a = int(input(f"Enter element {i+1} : "))
            u.add(a)

        comp = set()
        for i in u :
            if not self.is_member(i, self.arr) :
                comp.add(i)
        if len(comp) == 0 :
            return {}
        return comp

    def cartesianProduct(self, set2:set) :
        cart = []
        for i in self.arr : 
            for j in list(set2) : 
                cart.append([i, j])
        return cart
    
    def Difference(self, set2:set) :
        sd = set()
        for i in self.arr :
            if not self.is_member(i, set2) :
                sd.add(i)
        
        sd2 = set()
        un = self.union(set2)
        intersect = self.intersect(set2)
        for i in un :
            for j in intersect : 
                if i != j :
                    sd2.add(i)

        return f"Set Difference : {sd}\nSymmetric Difference : {sd2}"



exit = False
print("---------------------WELCOME TO THE GAME OF SETS-----------------------")
a = input("Enter elements with space between them : ")
a = a.split()
a = [int(x) for x in a]

s = Set(a)
print(a)
while not exit : 
    print("1. Check whether element belongs to a set\n2. List all the elements of the power set of a set\n3. Check whether one set is a subset of the other or not\n4. Check for Union\n5. Check for Intersection\n6. Set difference and symmetric difference between two sets\n7. Cartesian Product\n8. Complement\n9. Exit")
    choice = int(input("Enter your number of choice : "))
    if choice == 1 :
        num = int(input("Enter the number : ")) 
        print(s.is_member(num))
    elif choice == 2 : 
        print(s.powerset())
    elif choice == 3 :
        b = input("Enter elements for another set with space between them : ")
        b = set(b.split())
        print(s.subset(b))
    elif choice == 4 :
        b = input("Enter elements for another set with space between them : ")
        b = set(b.split())
        print(s.union(b))
    elif choice == 5 :
        b = input("Enter elements for another set with space between them : ")
        b = set(b.split())
        print(s.intersect(b))
    elif choice == 6 :
        b = input("Enter elements for another set with space between them : ")
        b = set(b.split())
        print(s.Difference(b))
    elif choice == 7 :
        b = input("Enter elements for another set with space between them : ")
        b = set(b.split())
        print(s.cartesianProduct(b))
    elif choice == 8 :
        print(s.complement())
    elif choice == 9 :
        print("Have a nice Day!")
        exit = True
    else : 
        print("ENTER THE CORRECT CHOICE!")
        continue



