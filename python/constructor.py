class mydetails:
    year=2024   #class variable comman for all
    def __init__(self,name,place,age):
       self.name=name
       self.age=age              
       self.place=place

    def age_after_year(self):
           self.age=self.age+1
    def new_place(self,new_place):
           self.place=new_place
    def display(self):
         print(mydetails.year)   # since it is class variable should mention classname.variable
         print("name is : "+self.name)
         print("age is : "+str(self.age))
         print("place is : "+self.place)

    @classmethod
    def add_year(cls):
         cls.year=cls.year+1
         

x=mydetails("akash","koodali",20)
y=mydetails("ramesh","kunnamkulam",45)   #using __init__ without calling
           ##function we could access to parameters 

x.display()
y.display()
print("________________________________________________________________")

mydetails.year=mydetails.year+1
x.age_after_year()   #one methode
y.age_after_year() 
x.display() 
y.display()

print("________________________________________________________________")
mydetails.add_year()
x.age_after_year()       #other methode
y.age_after_year() 
x.display() 
y.display()