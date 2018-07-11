a=raw_input()
if a.isalpha():
 print("invalid")
else:
  a=int(a)
  count=0
    while a!=0:
      a=int(a/10)
      count=count+1
   print(count)
