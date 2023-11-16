import hashlib

with open("C:/Users/micha/OneDrive/Рабочий стол/HashInput.txt", "rb") as f:
    source = f.read()
    hashed = hashlib.sha256(source).hexdigest()
    print(hashed)
