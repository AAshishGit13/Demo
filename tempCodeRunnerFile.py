import sys as s
Z={0,1,2,3,4,5}
def f(a,b):
     return((a+b)%6)
e=5
for a in Z:
     for b in Z:
         if f(a,b)==b and f(b,a)==b:
             e=a
if e in Z:
    print("identity element=",e)
else:
    print("identity does not exist")
for a in Z:
      for b in Z:
          if f(a,b)==0 and f(b,a)==0:
              print(b,"is the inverse of",a)