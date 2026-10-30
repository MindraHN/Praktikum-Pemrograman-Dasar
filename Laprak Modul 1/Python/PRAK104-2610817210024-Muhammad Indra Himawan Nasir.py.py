sepatu_a = 400000
sepatu_b = 350000

diskon_a = 13
diskon_b = 21

hdiskon_a = sepatu_a - (sepatu_a * diskon_a / 100 )
hdiskon_b = sepatu_b - (sepatu_b * diskon_b / 100)

print(f"Harga sepatu A adalah Rp{sepatu_a}")
print(f"Harga sepatu B adalah Rp{sepatu_b}")
print(f"Sepatu A mendapat diskon {diskon_a}% sehingga harganya menjadi Rp{int(hdiskon_a)}")
print(f"Sepatu B mendapat diskon {diskon_b}% sehingga harganya menjadi Rp{int(hdiskon_b)}")