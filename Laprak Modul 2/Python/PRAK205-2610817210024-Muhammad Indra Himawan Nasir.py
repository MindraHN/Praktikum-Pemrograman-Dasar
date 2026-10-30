import math
def main():
    data = input().split()
    a = float(data[0])
    b = float(data[1])

    alas = math.sqrt((b ** 2) - (a ** 2))
    tinggi = a
    sisi_miring = b
    keliling = alas + tinggi + sisi_miring
    luas = alas * tinggi / 2

    print(f"Alas = {int(alas)} cm")
    print(f"Tinggi = {int(tinggi)} cm")
    print(f"Keliling = {int(keliling)} cm")
    print(f"Luas = {int(luas)} cm^2")

if __name__ == "__main__":
    main()