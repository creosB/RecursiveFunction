def Toplama(a, b):
    return a + b


def Cikarma(a, b):
    return a - b


def Bolme(a, b):
    return a / b


def Carpma(a, b):
    return a*b


def Karesi(a, b):
    return a**b


def Faktoriel(a):
    if(a < 0):
        print("Sayinin faktoriyeli alınamadı")
    elif(a == 0 or a == 1):
        return a
    else:
        return a * Faktoriel(a-1)


def Fibonacci(a):
    if(a == 0 or a == 1):
        return a
    else:
        return Fibonacci(a-1)+Fibonacci(a-2)

def Menu():
    while(True):
        print(" (1)Toplama\n (2)Cikarma\n (3)Bolme\n (4)Carpma\n (5)Faktoriel\n (6)Karesi\n (7)Fibonacci\n (8)Cikis")
        Islem = int(input("Yapmak istediginiz islemi tuslayiniz: "))
        match Islem:
            case 1:
                Ilksayi = int(input("Ilk sayiyi giriniz: "))
                IkinciSayi = int(input("Ikinci sayiyi giriniz: "))
                return print(Toplama(Ilksayi, IkinciSayi))
            case 2:
                Ilksayi = int(input("Ilk sayiyi giriniz: "))
                IkinciSayi = int(input("IkinciSayi sayiyi giriniz: "))
                return print(Cikarma(Ilksayi, IkinciSayi))
            case 3:
                Ilksayi = int(input("Ilk sayiyi giriniz: "))
                IkinciSayi = int(input("Ikinci sayiyi giriniz: "))
                return print(Bolme(Ilksayi, IkinciSayi))
            case 4:
                Ilksayi = int(input("Ilk sayiyi giriniz: "))
                IkinciSayi = int(input("Ikinci sayiyi giriniz: "))
                return print(Carpma(Ilksayi, IkinciSayi))
            case 5:
                Ilksayi = int(input("Faktoriyeli alinacak sayiyi giriniz: "))
                return print(Faktoriel(Ilksayi))
            case 6:
                IlkSayi = int(input("Ussu alinacak sayiyi giriniz: "))
                IkinciSayi = int(input("Derecesini giriniz: "))
                return print(Karesi(IlkSayi, IkinciSayi))
            case 7:
                Ilksayi = int(input("Fibonacci icin sayi giriniz: "))
                return print(Fibonacci(Ilksayi))
 
            case 8:
                print("Cikis yapiliyor...")
                break


Menu()
