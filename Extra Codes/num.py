n1 = int(input("Input number 1 :"))
n2 = int(input("Input number 2 :"))
n3 = int(input("Input number 3 :"))

if(n1>n2):
    if(n1>n3):
        print("Number 1 is greatest")
    else:
        print("Number 3 is greatest")
else:
    if(n2>n3):
        print("Number 2 is greatest")
    else:
        print("Number 3 is greatest")    