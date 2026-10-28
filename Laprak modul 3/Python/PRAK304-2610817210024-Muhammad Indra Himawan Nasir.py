a = int(input("Masukkan bilangan: "))

if a < 0 or a>= 100:
    print("Anda menginput melebihi limit bilangan")
elif a == 0:
    print("Nol")
elif 1 <= a <= 9:
    print("Satuan") 
elif 10 <= a <= 19:
    print("Belasan")
else:
    print("Puluhan")
