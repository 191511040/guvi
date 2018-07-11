u=raw_input()
v=raw_input()
w=raw_input()
a=int(u)
b=int(v)
c=int(w)
if((a>=b) and (a>=c)):
   print a
elif(b>=a) and (b>=c):
	print b
elif(c>=a) and (c>=b):	
  print c
else:
   print("no it is not a alphabet") 
